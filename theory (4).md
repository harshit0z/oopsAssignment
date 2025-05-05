1. What is the fundamental difference between procedural and object-oriented programming paradigms? Provide a brief example to illustrate.
The fundamental difference lies in how they structure code. Procedural programming focuses on functions and the sequence of actions to be performed, while object-oriented programming (OOP) organizes code around objects that combine data and behavior.
Example: In procedural programming, a function might be used to calculate the area of a rectangle, while in OOP, a Rectangle class would encapsulate properties like width and height and methods to calculate the area.

2. Define Object-Oriented Programming (OOP). What are its core characteristics?
Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to represent data and methods to manipulate that data. Its core characteristics are encapsulation, inheritance, polymorphism, and abstraction.

3. Explain the concept of "abstraction" within the context of OOP. Why is it important?
Abstraction in OOP refers to the concept of hiding complex implementation details and exposing only the necessary features of an object. It is important because it simplifies interaction with objects and reduces complexity, allowing developers to focus on high-level functionalities without needing to understand all underlying details.

4. What are the benefits of using OOP over procedural programming?
The benefits of using OOP include improved code reusability through inheritance, better organization of code through encapsulation, enhanced flexibility and maintainability through polymorphism, and a more intuitive mapping to real-world problems.

5. Give a real-world example of a problem that is well-suited to be solved using an OOP approach. Explain why.
A real-world example is a banking system. OOP is well-suited because it allows for the creation of classes like Account, Customer, and Transaction, which can encapsulate relevant data and behaviors, making it easier to manage complex interactions and relationships.

6. Define the four key principles of OOP: Encapsulation, Inheritance, Polymorphism, and Abstraction.

Encapsulation: Bundling data and methods that operate on that data within a single unit (class) and restricting access to some components.
Inheritance: A mechanism where a new class derives properties and behaviors from an existing class, promoting code reuse.
Polymorphism: The ability for different classes to be treated as instances of the same class through a common interface, allowing for method overriding and overloading.
Abstraction: The process of simplifying complex systems by modeling classes based on essential properties and behaviors while hiding unnecessary details.
7. Explain how encapsulation helps to protect data and create modular code. Give an example using a class and its members.
Encapsulation protects data by restricting direct access to an object's attributes and methods, allowing controlled access through public methods. This modularity makes code easier to maintain.
Example:

cpp
Run
Copy code
class BankAccount {
private:
    double balance; // private data member

public:
    void deposit(double amount) { balance += amount; } // public method
    double getBalance() const { return balance; } // public method
};
8. What is inheritance? How does it promote code reuse and maintainability? Provide a simple example using classes.
Inheritance allows a new class (subclass) to inherit properties and methods from an existing class (superclass), promoting code reuse and maintainability by reducing redundancy.
Example:

cpp
Run
Copy code
class Animal {
public:
    void eat() {}
};

class Dog : public Animal { // Dog inherits from Animal
public:
    void bark() {}
};
9. Describe polymorphism. How does it contribute to flexibility and extensibility in software design? Give examples of function/operator overloading and function overriding.
Polymorphism allows methods to do different things based on the object that it is acting upon, contributing to flexibility and extensibility.
Function Overloading Example:

cpp
Run
Copy code
void print(int i) { cout << i; }
void print(double d) { cout << d; }
Function Overriding Example:

cpp
Run
Copy code
class Base {
public:
    virtual void show() { cout << "Base"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived"; }
};
10. Explain the difference between "overloading" and "overriding".
Overloading refers to defining multiple functions with the same name but different parameters within the same scope, while overriding refers to redefining a base class method in a derived class with the same signature.

11. List at least three advantages of using OOP in software development.

Improved code reusability through inheritance.
Enhanced maintainability due to encapsulation.
Greater flexibility and extensibility through polymorphism.
12. Give examples of application domains where OOP is commonly used (e.g., GUI development, game programming, etc.).
OOP is commonly used in various application domains such as GUI development, game programming, web applications, simulation systems, and enterprise software.

13. Discuss the impact of OOP on code maintainability and reusability.
OOP enhances code maintainability by promoting modular design through encapsulation, making it easier to update and modify individual components without affecting the entire system. Reusability is achieved through inheritance, allowing developers to create new classes based on existing ones, reducing duplication of code.

14. How does OOP contribute to the development of large and complex software systems?
OOP facilitates the development of large and complex software systems by allowing developers to break down problems into smaller, manageable objects. This modular approach enables teams to work on different components simultaneously, improving collaboration and reducing integration issues.

15. Explain the benefits of using OOP in software development.
The benefits of using OOP include improved code organization, easier debugging and testing, enhanced collaboration among developers, and the ability to model real-world entities more intuitively, leading to more effective software solutions.

16. Describe the basic structure of a C++ program. What are the essential components?
A basic C++ program typically includes the following components:

Preprocessor directives (e.g., #include <iostream>)
The main function, which serves as the entry point of the program
Variable declarations and definitions
Function definitions (if any)
Control structures (loops, conditionals) to manage program flow.
17. Explain the purpose of namespaces in C++. How do they help to avoid naming conflicts?
Namespaces in C++ are used to organize code into logical groups and prevent naming conflicts by allowing the same name to be used in different contexts. This is particularly useful in large projects or when integrating multiple libraries.

18. What are identifiers in C++? What rules must be followed when creating them?
Identifiers in C++ are names used to identify variables, functions, classes, and other user-defined items. The rules for creating identifiers include: they must begin with a letter or underscore, can contain letters, digits, and underscores, and cannot exceed 255 characters.

19. What are the differences between variables and constants in C++? How are they declared?
Variables are storage locations that can hold different values during program execution, while constants are fixed values that cannot be changed. Variables are declared using a type followed by an identifier (e.g., int x;), while constants are declared using the const keyword (e.g., const int y = 10;).

20. Explain how to use control structures (e.g., if-else, for, while) to control the flow of execution in a C++ program. Provide a simple code example.
Control structures manage the flow of execution based on conditions or iterations.
Example:

cpp
Run
Copy code
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }

    int number = 10;
    if (number > 5) {
        cout << "Number is greater than 5." << endl;
    } else {
        cout << "Number is 5 or less." << endl;
    }

    return 0;
}