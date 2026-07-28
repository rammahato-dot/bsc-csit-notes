// ===============================================
// Unit 2: Classes and Objects — Complete Examples
// ===============================================
#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------
// 1. Basic class definition, object creation, access specifiers
// -----------------------------------------------
class Student {
private:
    int rollNo;
    string name;

public:
    void setData(int r, string n) {
        rollNo = r;
        name = n;
    }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

void demoBasicClass() {
    cout << "\n--- 1. Basic Class & Object ---\n";
    Student s1;
    s1.setData(1, "Ram");
    s1.display();
}

// -----------------------------------------------
// 2. Namespace and Scope Resolution Operator
// -----------------------------------------------
namespace First {
    int value = 10;
}
namespace Second {
    int value = 20;
}

class Box {
public:
    void show();   // declared here, defined outside using ::
};

void Box::show() {
    cout << "Box::show() called using scope resolution operator" << endl;
}

void demoNamespaceAndScope() {
    cout << "\n--- 2. Namespace & Scope Resolution ---\n";
    cout << "First::value = " << First::value << endl;
    cout << "Second::value = " << Second::value << endl;
    Box b;
    b.show();
}

// -----------------------------------------------
// 3. Inline function
// -----------------------------------------------
inline int square(int x) {
    return x * x;
}

class Circle {
    double radius;
public:
    Circle(double r) { radius = r; }
    double area() {                 // implicitly inline (defined inside class)
        return 3.14159 * radius * radius;
    }
};

void demoInline() {
    cout << "\n--- 3. Inline Function ---\n";
    cout << "square(5) = " << square(5) << endl;
    Circle c(4.0);
    cout << "Circle area = " << c.area() << endl;
}

// -----------------------------------------------
// 4. Storage classes: static (local persistence)
// -----------------------------------------------
void counter() {
    static int count = 0;   // retains value between calls
    count++;
    cout << "counter() called " << count << " time(s)" << endl;
}

void demoStorageClass() {
    cout << "\n--- 4. Storage Classes (static local variable) ---\n";
    counter();
    counter();
    counter();
}

// -----------------------------------------------
// 5. Static data members and static member functions
// -----------------------------------------------
class Counter {
    static int count;    // declaration only
public:
    Counter() { count++; }
    static int getCount() {   // static member function
        return count;
    }
};
int Counter::count = 0;    // mandatory definition outside the class

void demoStaticMembers() {
    cout << "\n--- 5. Static Data Members & Functions ---\n";
    Counter a, b, c;
    cout << "Total objects created: " << Counter::getCount() << endl;
}

// -----------------------------------------------
// 6. 'this' pointer
// -----------------------------------------------
class BoxWithThis {
    int length;
public:
    void setLength(int length) {         // parameter name same as data member
        this->length = length;           // 'this->' resolves the ambiguity
    }
    int getLength() {
        return this->length;
    }
    BoxWithThis& setAndChain(int l) {    // returning *this enables chaining
        this->length = l;
        return *this;
    }
};

void demoThisPointer() {
    cout << "\n--- 6. 'this' Pointer ---\n";
    BoxWithThis box;
    box.setLength(15);
    cout << "Length = " << box.getLength() << endl;
    box.setAndChain(20).setAndChain(30);   // chained calls
    cout << "After chaining, Length = " << box.getLength() << endl;
}

// -----------------------------------------------
// 7. Constructors and Destructors (default, parameterized)
// -----------------------------------------------
class Demo {
public:
    Demo() {
        cout << "Default constructor called" << endl;
    }
    Demo(int x) {
        cout << "Parameterized constructor called with x = " << x << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

void demoConstructorsDestructors() {
    cout << "\n--- 7. Constructors & Destructors ---\n";
    Demo d1;         // default constructor
    Demo d2(100);    // parameterized constructor
}   // both destructors fire here, in reverse order of creation

// -----------------------------------------------
// 8. Copy Constructor (deep copy vs shallow copy)
// -----------------------------------------------
class ShallowStudent {
public:
    int rollNo;
    ShallowStudent(int r) { rollNo = r; }
    // no custom copy constructor -> compiler generates a shallow copy automatically
};

class DeepArray {
    int *data;
    int size;
public:
    DeepArray(int n) {                 // dynamic constructor
        size = n;
        data = new int[size];
        for (int i = 0; i < size; i++) data[i] = i + 1;
    }
    DeepArray(const DeepArray &other) {  // custom copy constructor (deep copy)
        size = other.size;
        data = new int[size];            // separate memory block
        for (int i = 0; i < size; i++) data[i] = other.data[i];
        cout << "Deep copy constructor called" << endl;
    }
    void display() {
        for (int i = 0; i < size; i++) cout << data[i] << " ";
        cout << endl;
    }
    ~DeepArray() {
        delete[] data;    // free dynamically allocated memory
    }
};

void demoCopyConstructor() {
    cout << "\n--- 8. Copy Constructor & Dynamic Constructor ---\n";
    ShallowStudent s1(10);
    ShallowStudent s2 = s1;        // shallow copy (fine here, no pointers involved)
    cout << "s2.rollNo = " << s2.rollNo << endl;

    DeepArray arr1(5);
    DeepArray arr2 = arr1;         // triggers our custom deep copy constructor
    arr1.display();
    arr2.display();
}

// -----------------------------------------------
// 9. Constructor Overloading
// -----------------------------------------------
class OverloadedBox {
    int side;
public:
    OverloadedBox() { side = 0; }                     // default
    OverloadedBox(int s) { side = s; }                // parameterized
    OverloadedBox(const OverloadedBox &b) {           // copy
        side = b.side;
    }
    int getSide() { return side; }
};

void demoConstructorOverloading() {
    cout << "\n--- 9. Constructor Overloading ---\n";
    OverloadedBox b1;            // calls default
    OverloadedBox b2(25);        // calls parameterized
    OverloadedBox b3(b2);        // calls copy
    cout << "b1.side=" << b1.getSide()
         << " b2.side=" << b2.getSide()
         << " b3.side=" << b3.getSide() << endl;
}

// -----------------------------------------------
// 10. Manipulating private data members via getters/setters
// -----------------------------------------------
class BankAccount {
private:
    double balance;
public:
    BankAccount() { balance = 0; }
    void setBalance(double b) {
        if (b >= 0) balance = b;       // validation possible here
        else cout << "Invalid balance!" << endl;
    }
    double getBalance() {
        return balance;
    }
};

void demoPrivateDataAccess() {
    cout << "\n--- 10. Manipulating Private Data Members ---\n";
    BankAccount acc;
    acc.setBalance(5000.50);
    // acc.balance = -100;   // COMPILE ERROR if uncommented -- private member
    cout << "Balance = " << acc.getBalance() << endl;
}

// -----------------------------------------------
// main() — runs every demo in order
// -----------------------------------------------
int main() {
    demoBasicClass();
    demoNamespaceAndScope();
    demoInline();
    demoStorageClass();
    demoStaticMembers();
    demoThisPointer();
    demoConstructorsDestructors();
    demoCopyConstructor();
    demoConstructorOverloading();
    demoPrivateDataAccess();
    return 0;
}