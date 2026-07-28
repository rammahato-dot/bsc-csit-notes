# Unit 2: Assignments & Past Questions (with Answers) — Classes and Objects

---

## PART A: Programming Assignments (with Solutions)

### Assignment 1
**Q:** Write a C++ program to define a class `Rectangle` with private data members `length` and `width`. Include a member function to calculate area and another to display it.

**Answer:**
```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;
public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double calculateArea() {
        return length * width;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5.5, 3.2);
    r.display();
    return 0;
}
```

---

### Assignment 2
**Q:** Write a program demonstrating all three types of constructors (default, parameterized, copy) in a single class `Point` (with `x`, `y` coordinates).

**Answer:**
```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() {                        // default constructor
        x = 0; y = 0;
    }
    Point(int a, int b) {            // parameterized constructor
        x = a; y = b;
    }
    Point(const Point &p) {          // copy constructor
        x = p.x; y = p.y;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;              // default
    Point p2(3, 4);         // parameterized
    Point p3(p2);           // copy

    cout << "p1: "; p1.display();
    cout << "p2: "; p2.display();
    cout << "p3: "; p3.display();
    return 0;
}
```

---

### Assignment 3
**Q:** Write a program using a **static data member** to count the total number of objects created of a class `Employee`.

**Answer:**
```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    static int totalEmployees;
public:
    Employee(string n) {
        name = n;
        totalEmployees++;
    }
    static int getTotalEmployees() {
        return totalEmployees;
    }
};
int Employee::totalEmployees = 0;   // definition outside class

int main() {
    Employee e1("Sita");
    Employee e2("Hari");
    Employee e3("Gita");

    cout << "Total employees created: " << Employee::getTotalEmployees() << endl;
    return 0;
}
```
**Expected Output:** `Total employees created: 3`

---

### Assignment 4
**Q:** Write a program demonstrating a **dynamic constructor** that allocates an array of a size given at runtime, along with a destructor that frees the memory.

**Answer:**
```cpp
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;
public:
    DynamicArray(int n) {           // dynamic constructor
        size = n;
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = (i + 1) * 10;
    }
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~DynamicArray() {               // destructor frees memory
        delete[] arr;
        cout << "Memory freed" << endl;
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    DynamicArray da(n);
    da.display();
    return 0;
}
```

---

### Assignment 5
**Q:** Write a program to demonstrate the difference between **shallow copy** (default compiler-generated) and **deep copy** (custom copy constructor) using a class that holds a pointer.

**Answer:**
```cpp
#include <iostream>
using namespace std;

class DeepDemo {
private:
    int *data;
public:
    DeepDemo(int val) {
        data = new int(val);
    }
    // Custom deep copy constructor
    DeepDemo(const DeepDemo &obj) {
        data = new int(*obj.data);   // allocate separate memory, copy the value
        cout << "Deep copy constructor invoked" << endl;
    }
    void setValue(int val) { *data = val; }
    void display() { cout << "Value: " << *data << endl; }
    ~DeepDemo() { delete data; }
};

int main() {
    DeepDemo obj1(50);
    DeepDemo obj2 = obj1;   // deep copy — separate memory allocated

    obj2.setValue(999);     // changing obj2 does NOT affect obj1

    cout << "obj1: "; obj1.display();   // still 50
    cout << "obj2: "; obj2.display();   // 999
    return 0;
}
```
**Key learning point:** Without the custom copy constructor, both `obj1` and `obj2` would point to the *same* memory address (shallow copy), so changing `obj2` would also change `obj1`, and the destructor would try to `delete` the same memory twice (**double-free error** / undefined behavior).

---

### Assignment 6
**Q:** Write a program using the `this` pointer to resolve a naming conflict between a constructor parameter and a data member.

**Answer:**
```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;   // this->name = data member, name = parameter
        this->age = age;
    }
    void display() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main() {
    Student s("Anita", 20);
    s.display();
    return 0;
}
```

---

## PART B: Past / Exam-Pattern Questions (with Answers)

### Short Answer Questions

**Q1. What is a constructor? List its properties.**
**Answer:** A constructor is a special member function that has the same name as its class and is automatically invoked when an object is created. Properties: no return type (not even `void`), can be overloaded, can take default arguments, and is used to initialize data members.

---

**Q2. What is a destructor? How is it different from a constructor?**
**Answer:** A destructor is a special member function with the name `~ClassName()`, automatically invoked when an object goes out of scope or is deleted, used for cleanup (e.g., freeing dynamic memory). Unlike constructors, a destructor takes **no parameters**, **cannot be overloaded**, and only one exists per class.

---

**Q3. Differentiate between a copy constructor and a normal parameterized constructor.**
**Answer:** A parameterized constructor initializes an object using explicitly passed values (e.g., `Point(3,4)`). A copy constructor initializes a new object using **another existing object of the same class** as its argument (e.g., `Point p2(p1)` or `Point p2 = p1`), with the signature `ClassName(const ClassName &obj)`.

---

**Q4. What is a dynamic constructor?**
**Answer:** A dynamic constructor is a constructor that allocates memory to data members (typically pointers) dynamically using the `new` operator at the time of object creation, allowing object size/configuration to be decided at runtime rather than compile time. A matching destructor with `delete`/`delete[]` is required to release that memory.

---

**Q5. Why must static data members be defined outside the class?**
**Answer:** A static data member is shared by all objects of a class and exists independently of any object — only one copy exists for the entire class. Declaring it inside the class only reserves its name; memory is allocated by defining it outside the class (e.g., `int ClassName::member = 0;`). Skipping this definition causes a linker error.

---

**Q6. What is the purpose of the `this` pointer?**
**Answer:** `this` is an implicit pointer available in every non-static member function that points to the object which invoked the function. It is used to resolve naming conflicts between parameters and data members, and to return the calling object itself (enabling method chaining).

---

**Q7. Differentiate between static and automatic storage classes.**
**Answer:** An automatic variable is created when a function/block starts and destroyed when it ends, holding garbage value by default. A static variable retains its value between function calls (initialized only once) and defaults to 0, though it's still scoped locally to the function/block.

---

### Long Answer Questions

**Q1. Explain the different types of constructors in C++ with examples.**
**Answer:** C++ supports several types of constructors:
- **Default constructor** — takes no arguments, used to give default initial values (`Student() { rollNo = 0; }`).
- **Parameterized constructor** — accepts arguments to initialize an object with specific values (`Student(int r) { rollNo = r; }`).
- **Copy constructor** — creates a new object as a copy of an existing one (`Student(const Student &s)`), performing a **shallow copy** by default or a **deep copy** if custom-written (needed when the class holds pointers/dynamic memory).
- **Dynamic constructor** — allocates memory dynamically to data members using `new`, enabling runtime-sized objects.
Constructors can also be **overloaded**, so a class may have multiple constructors distinguished by their parameter lists; the compiler selects the appropriate one based on the arguments supplied at object creation (demonstrating compile-time polymorphism).

---

**Q2. Explain static data members and static member functions with a program.**
**Answer:** A static data member is shared across all objects of a class — only one copy exists in memory regardless of the number of objects, and it must be defined outside the class using the scope resolution operator. A static member function can be called using the class name (without creating an object) and can access only static data members (it has no `this` pointer, since it isn't tied to a specific object).
```cpp
class Counter {
    static int count;
public:
    Counter() { count++; }
    static int getCount() { return count; }
};
int Counter::count = 0;

int main() {
    Counter a, b, c;
    cout << Counter::getCount();  // Output: 3
}
```
This is commonly used to track things like total object counts, shared configuration values, or IDs across all instances.

---

**Q3. What is the difference between shallow copy and deep copy? Why is a custom copy constructor needed?**
**Answer:** A shallow copy (the compiler's default behavior) copies member values as-is — if a member is a pointer, only the pointer address is copied, so both the original and copied object end up pointing to the **same** memory location. This causes problems: modifying one object's data affects the other, and when both objects are destroyed, the destructor tries to free the same memory twice, causing undefined behavior (double-free error).
A deep copy, implemented via a custom copy constructor, allocates **separate** memory for the new object and copies the actual data (not just the address), so the two objects become fully independent. A custom copy constructor is essential whenever a class has pointer members or manages dynamically allocated resources.

---

**Q4. Explain the `this` pointer with an appropriate example.**
**Answer:** `this` is a pointer implicitly available inside every non-static member function, holding the address of the object that called the function. Its two main uses are: (1) resolving ambiguity when a parameter name shadows a data member name (`this->name = name;`), and (2) enabling method chaining by returning `*this` from a member function so multiple calls can be linked together (`obj.setX(1).setY(2);`).

---

**Q5. Discuss access specifiers in C++ and their role in encapsulation.**
**Answer:** C++ provides three access specifiers: `private` (accessible only within the same class — the default for `class`), `protected` (accessible within the class and its derived classes), and `public` (accessible from anywhere the object is visible). By marking data members `private` and exposing only necessary operations via `public` member functions (getters/setters), a class hides its internal representation and enforces controlled, validated access — this is the practical implementation of **encapsulation** in C++.

---

## Quick Revision Table

| Concept | One-line takeaway |
|---|---|
| Constructor | Same name as class, no return type, auto-called on object creation |
| Destructor | `~ClassName()`, no params, no overloading, auto-called at scope end |
| Copy constructor | `ClassName(const ClassName &obj)` — default = shallow, custom = deep |
| Dynamic constructor | Uses `new` inside constructor for runtime-sized memory |
| Static data member | One copy shared by all objects; must be defined outside class |
| Static member function | Callable via `ClassName::func()`, only touches static members |
| `this` pointer | Points to the calling object; resolves naming conflicts, enables chaining |