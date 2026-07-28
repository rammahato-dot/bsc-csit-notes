# Unit 2: Classes and Objects

*(Syllabus: Defining classes and creating objects, Access specifiers, Namespace, scope resolution operator, member functions, inline function, storage classes, static data members and functions, this pointer, Constructors and destructors, types of constructors, dynamic constructor, copy constructor, constructor overloading, manipulating private data members)*

This is the **heaviest unit (7 hrs)** — expect the most exam weight here. Take it slow.

---

## 1. Defining a Class and Creating Objects

```cpp
class Student {
private:
    int rollNo;
    string name;

public:
    void setData(int r, string n) {   // member function
        rollNo = r;
        name = n;
    }
    void display() {
        cout << rollNo << " - " << name << endl;
    }
};

int main() {
    Student s1;              // object created — memory allocated
    s1.setData(1, "Ram");
    s1.display();
    return 0;
}
```

- `class` keyword defines the blueprint.
- Objects are created just like normal variables: `Student s1;`
- Access members using the **dot operator**: `s1.setData(...)`.

---

## 2. Access Specifiers

| Specifier | Accessible from |
|---|---|
| `private` | Only within the same class (default for `class`) |
| `protected` | Same class + derived classes (important later in Unit 4) |
| `public` | Anywhere the object is visible |

```cpp
class Account {
private:
    double balance;     // hidden — cannot be accessed directly outside
protected:
    string accType;      // accessible to derived classes
public:
    string ownerName;   // accessible anywhere
};
```

**Exam trap:** Trying to access a `private` member from `main()` directly (`obj.balance`) causes a **compile-time error**. This is the mechanism behind Encapsulation.

---

## 3. Namespace & Scope Resolution Operator (`::`)

**Namespace** — a way to group related identifiers and avoid name conflicts.

```cpp
namespace First {
    int value = 10;
}
namespace Second {
    int value = 20;
}

int main() {
    cout << First::value;   // 10
    cout << Second::value;  // 20
}
```

`std` is the most common namespace — that's why `using namespace std;` gives you unqualified access to `cout`, `cin`, etc.

**Scope Resolution Operator (`::`)** has two big jobs:
1. Access a namespace member: `First::value`
2. Define a class member function **outside** the class body:

```cpp
class Box {
public:
    void show();     // declaration only
};

void Box::show() {   // definition outside class, using ::
    cout << "Box shown" << endl;
}
```

---

## 4. Member Functions & Inline Functions

- **Member function**: a function declared inside a class, defining the class's behavior.
- **Inline function**: a request to the compiler to substitute the function's code directly at the call site instead of a normal function call — reduces call overhead for small, frequently-used functions.

```cpp
class Circle {
    double radius;
public:
    inline double area() {          // defined inside class = implicitly inline anyway
        return 3.14159 * radius * radius;
    }
};

inline int square(int x) {          // standalone inline function
    return x * x;
}
```

**Note:** Any function **defined inside the class body** is automatically treated as inline by the compiler (no need to write the `inline` keyword explicitly), but you *can* define it outside and still mark it `inline`.

**When NOT to use inline:** large functions, functions with loops/recursion — the compiler may ignore the inline request anyway (it's only a *suggestion*, not a guarantee).

---

## 5. Storage Classes

| Storage class | Keyword | Lifetime | Scope | Default value |
|---|---|---|---|---|
| Automatic | `auto` (rarely written explicitly) | Function/block | Local | Garbage |
| External | `extern` | Whole program | Global (across files) | 0 |
| Static | `static` | Whole program | Local (but retains value between calls) | 0 |
| Register | `register` | Function/block | Local | Garbage |

```cpp
void counter() {
    static int count = 0;   // retains value across function calls
    count++;
    cout << count << endl;
}
int main() {
    counter();  // prints 1
    counter();  // prints 2
    counter();  // prints 3
}
```

`register` suggests storing the variable in a CPU register for faster access (modern compilers mostly ignore this and optimize automatically).

`extern` is used to declare a variable defined in another file, so it can be shared across multiple `.cpp` files.

---

## 6. Static Data Members and Static Member Functions

- **Static data member**: shared by **all objects** of the class — only one copy exists regardless of how many objects are created. Must be defined outside the class.
- **Static member function**: can access only static data members, and can be called **without** creating an object, using the class name and `::`.

```cpp
class Counter {
    static int count;          // declaration
public:
    Counter() { count++; }
    static int getCount() {    // static member function
        return count;
    }
};

int Counter::count = 0;        // definition + initialization (mandatory, outside class)

int main() {
    Counter a, b, c;
    cout << Counter::getCount();  // 3 — shared across all objects
}
```

**Exam trap:** Forgetting to define the static member *outside* the class (`int Counter::count = 0;`) causes a **linker error**, not a compiler error.

---

## 7. `this` Pointer

- `this` is an implicit pointer available inside every non-static member function, pointing to **the object that invoked the function**.
- Commonly used to resolve naming conflicts between a parameter and a data member, and to return the object itself (for chaining).

```cpp
class Box {
    int length;
public:
    void setLength(int length) {
        this->length = length;   // 'this->length' = data member, 'length' = parameter
    }
    Box& setAndReturn(int l) {
        this->length = l;
        return *this;             // enables chaining: obj.setAndReturn(5).setAndReturn(10);
    }
};
```

---

## 8. Constructors and Destructors

### Constructor
- A special member function, **same name as the class**, automatically called when an object is created.
- **No return type** (not even `void`).
- Purpose: initialize object data members.

### Destructor
- Special member function, name = `~ClassName()`, automatically called when an object goes **out of scope** or is `delete`d.
- No return type, **no parameters**, **cannot be overloaded** (only one destructor per class).
- Purpose: cleanup (free dynamically allocated memory, close files, etc.)

```cpp
class Demo {
public:
    Demo() { cout << "Constructor called" << endl; }
    ~Demo() { cout << "Destructor called" << endl; }
};

int main() {
    Demo d;   // Constructor runs
}             // Destructor runs automatically here (end of scope)
```

### Types of Constructors

**a) Default constructor** — takes no parameters.
```cpp
Student() {
    rollNo = 0;
    name = "Unknown";
}
```

**b) Parameterized constructor** — takes arguments to initialize with specific values.
```cpp
Student(int r, string n) {
    rollNo = r;
    name = n;
}
```

**c) Copy constructor** — creates a new object as a **copy** of an existing object. Signature: `ClassName(const ClassName &obj)`.
```cpp
class Student {
    int rollNo;
public:
    Student(int r) { rollNo = r; }
    Student(const Student &s) {        // copy constructor
        rollNo = s.rollNo;
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Student s1(10);
    Student s2 = s1;      // calls copy constructor
    Student s3(s1);       // also calls copy constructor
}
```
- If you don't define one, C++ provides a **default (shallow) copy constructor** automatically — this becomes dangerous with dynamically allocated memory (pointers get copied, not the data they point to → both objects point to the same memory → **double free / dangling pointer** issues). This is *exactly* why you write your own copy constructor when a class has pointer members — this is called a **deep copy**.

**d) Dynamic constructor** — allocates memory dynamically (using `new`) to data members, typically pointers, at the time of object creation. Allows objects to be sized/configured at runtime.
```cpp
class Array {
    int *data;
    int size;
public:
    Array(int n) {              // dynamic constructor
        size = n;
        data = new int[size];   // dynamic memory allocation
    }
    ~Array() {
        delete[] data;          // must free in destructor
    }
};
```

**e) Constructor Overloading** — a class can have multiple constructors with different parameter lists (compile-time polymorphism in action).
```cpp
class Box {
    int side;
public:
    Box() { side = 0; }               // default
    Box(int s) { side = s; }          // parameterized
    Box(const Box &b) { side = b.side; }  // copy
};
```
The compiler picks the correct constructor based on the arguments used when the object is created.

---

## 9. Manipulating Private Data Members

Since private data can't be accessed directly from outside the class, we use **public member functions** (commonly called getters/setters) to read and modify them safely:

```cpp
class BankAccount {
private:
    double balance;
public:
    void setBalance(double b) {         // setter
        if (b >= 0) balance = b;         // validation possible here!
    }
    double getBalance() {                // getter
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    // acc.balance = -100;   // ERROR — not accessible directly
    cout << acc.getBalance();
}
```
This is the practical payoff of encapsulation: controlled, validated access instead of direct exposed data.

---

## Common Exam Traps for Unit 2
- Constructor has **no return type**, not even `void` — writing `void Student()` makes it a normal function, NOT a constructor.
- Destructor **cannot take parameters** and **cannot be overloaded** — only one per class.
- Static data members must be defined **outside** the class or you get a linker error.
- Default copy constructor does a **shallow copy** — write your own for **deep copy** when the class has pointer/dynamic members.
- `this` is a pointer, so accessing members through it uses `->`, not `.` (i.e., `this->name`, not `this.name`).
- Order of constructor/destructor calls matters more once inheritance is introduced (Unit 4) — destructors run in **reverse order** of construction.