# Unit 1: Introduction to C++ and OOP

*(Syllabus: Evolution of C++ from C, Key differences between C and C++, Structure of a C++ program, Basic I/O operations, Introduction to OOP concepts)*

Since you already know OOP basics, this unit is mostly about **C++-specific syntax and history** you need for exam questions — not new concepts.

---

## 1. Evolution of C++ from C

- **C** was created by Dennis Ritchie (1972) — procedural, function-based.
- **C++** was created by **Bjarne Stroustrup** at Bell Labs (started **1979** as "C with Classes", renamed **C++ in 1983**).
- Why C++ was needed: C had no support for real-world modeling (objects, data hiding, reusability). As programs grew larger, procedural code became hard to maintain — C++ added OOP on top of C's efficiency.
- C++ is a **superset of C** — almost all valid C code compiles as C++ (with a few exceptions).
- Standardized by ISO/ANSI: C++98, C++03, C++11, C++14, C++17, C++20... (exam usually just wants you to know it's standardized, not exact versions).

**Exam one-liner:** *"C++ = C + OOP features (classes, objects, inheritance, polymorphism) + a few extra improvements (references, function overloading, stronger type checking)."*

---

## 2. Key Differences Between C and C++

| Feature | C | C++ |
|---|---|---|
| Programming paradigm | Procedural (top-down) | Procedural **+** Object-Oriented |
| Data security | No data hiding — data is global/exposed | Encapsulation via classes (private/protected) |
| Basic unit of program | Function | Class/Object |
| Function overloading | Not supported | Supported (same name, different parameters) |
| Operator overloading | Not supported | Supported |
| Inheritance | Not supported | Supported |
| Inline functions | Not supported (macros used instead) | Supported (`inline` keyword) |
| Reference variables | Not supported | Supported (`int &ref = x;`) |
| I/O | `printf()`, `scanf()` (stdio.h) | `cin`, `cout` (iostream) — type-safe |
| `new`/`delete` | Uses `malloc()`/`free()` | Uses `new`/`delete` (also calls constructors/destructors) |
| Exception handling | Not supported (uses error codes) | Supported (`try`, `catch`, `throw`) |
| Namespace | Not supported | Supported (`std::`) |
| `struct` | Can only hold data (no functions) | Can hold data **and** member functions (like a class, default public) |

---

## 3. Structure of a C++ Program

```cpp
#include <iostream>      // Preprocessor directive — header inclusion
using namespace std;     // Namespace declaration

// Function prototype (optional if defined before use)
int add(int a, int b);

int main() {              // Entry point of every C++ program
    int x = 5, y = 10;
    cout << "Sum = " << add(x, y) << endl;
    return 0;              // Signals successful termination to the OS
}

int add(int a, int b) {   // Function definition
    return a + b;
}
```

**Parts to remember for exams:**
1. **Documentation section** – comments describing the program
2. **Preprocessor directives** – `#include`, `#define`
3. **Namespace declaration** – `using namespace std;`
4. **Class/function declarations** (if any)
5. **`main()` function** – execution always starts here
6. **Function definitions**

---

## 4. Basic I/O Operations

C++ uses **stream-based I/O** via the `iostream` header.

| Object | Purpose | Operator |
|---|---|---|
| `cin` | Standard input (keyboard) | `>>` (extraction operator) |
| `cout` | Standard output (screen) | `<<` (insertion operator) |
| `cerr` | Standard error (unbuffered) | `<<` |
| `clog` | Standard error (buffered/log) | `<<` |

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;                 // reads a single word (stops at whitespace)

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    return 0;
}
```

**Notes:**
- `cin >>` skips leading whitespace and stops at the next whitespace — use `getline(cin, str)` to read a full line including spaces.
- `endl` flushes the output buffer and inserts a newline; `"\n"` just inserts a newline (slightly faster, no flush).
- `>>` and `<<` are actually **overloaded operators** — this is your first real-world preview of operator overloading (Unit 3).

---

## 5. Introduction to OOP Concepts

You know these already, so here's the exam-ready, precise version tied to C++ terms:

- **Class** — a user-defined blueprint/template that defines data members (attributes) and member functions (behavior). No memory is allocated until an object is created.
- **Object** — a concrete instance of a class; memory is allocated when an object is declared.
- **Encapsulation** — bundling data and functions that operate on that data into a single unit (class), and restricting direct access to internal data using access specifiers (`private`, `protected`). Achieved in C++ mainly via classes.
- **Abstraction** — showing only essential features and hiding implementation details. E.g. you call `car.start()` without knowing how the engine ignition code works internally.
- **Inheritance** — a mechanism where a new class (derived class) acquires properties and behavior of an existing class (base class), promoting **code reusability**.
- **Polymorphism** — literally "many forms". One interface, multiple implementations. In C++ this shows up as:
  - **Compile-time (static) polymorphism** → function overloading, operator overloading
  - **Run-time (dynamic) polymorphism** → virtual functions, function overriding

**Quick memory hook:** *"A-E-I-P" — Abstraction shows what's necessary, Encapsulation hides how it's done, Inheritance reuses it, Polymorphism reshapes it.*

```cpp
class Animal {                  // Class
public:
    void makeSound() {          // member function (behavior)
        cout << "Some generic sound" << endl;
    }
};

int main() {
    Animal a;                   // Object — memory allocated here
    a.makeSound();              // calling behavior on the object
    return 0;
}
```

---

## Common Exam Traps for Unit 1
- Don't say "C++ is a completely different language from C" — it's a **superset**.
- `struct` in C++ is NOT the same as in C — in C++ it can have member functions and defaults to `public` access (vs `class` which defaults to `private`).
- `main()` must return `int`, not `void`, per the C++ standard (many textbooks still use `void main()` — flag this as bad/non-standard practice if asked).
- OOP concepts (class, object, encapsulation, etc.) are **conceptual pillars**, not C++-specific — but you must explain them *with* C++ syntax examples in exam answers.