1. What is the purpose of the main function in a C++ program?
The main function serves as the entry point of a C++ program. It is where the execution of the program begins, and it must be defined in every C++ program.

2. Explain the significance of the return type of the main function.
The return type of the main function indicates the status of program execution when it terminates. A return type of int is standard, where returning 0 typically signifies successful execution, while returning a non-zero value indicates an error or abnormal termination.

3. What are the two valid signatures of the main function in C++?
The two valid signatures of the main function in C++ are:

int main()
int main(int argc, char* argv[])
The second signature allows for command-line arguments to be passed to the program.
4. What is function prototyping and why is it necessary in C++?
Function prototyping is the declaration of a function before its actual definition. It is necessary in C++ to inform the compiler about the function's name, return type, and parameters, allowing the function to be called before its definition appears in the code.

5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?
The function prototype can be declared as follows:

cpp
Run
Copy code
int functionName(int a, int b);
6. What happens if a function is used before it is prototyped?
If a function is used before it is prototyped, the compiler will not recognize the function, leading to a compilation error indicating that the function is undeclared.

7. What is the difference between a declaration and a definition of a function?
A declaration specifies the function's name, return type, and parameters but does not provide the body, while a definition includes the body of the function, providing the actual implementation.

8. How do you call a simple function that takes no parameters and returns void?
You can call a simple function that takes no parameters and returns void as follows:

cpp
Run
Copy code
functionName();
9. Explain the concept of "scope" in the context of functions.
Scope refers to the visibility and lifetime of variables and functions within a program. In the context of functions, local variables defined within a function are only accessible within that function, while global variables can be accessed from anywhere in the program.

10. What is call by reference in C++?
Call by reference is a method of passing arguments to a function where the function receives a reference to the actual variable, allowing it to modify the original variable's value.

11. How does call by reference differ from call by value?
In call by value, a copy of the variable's value is passed to the function, and changes made to the parameter do not affect the original variable. In call by reference, a reference to the original variable is passed, allowing the function to modify the original variable's value.

12. Provide an example of a function that uses call by reference to swap two integers.

cpp
Run
Copy code
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
13. What is an inline function in C++?
An inline function is a function defined with the inline keyword, suggesting to the compiler to insert the function's body directly into the code at each point of call, rather than performing a traditional function call.

14. How do inline functions improve performance?
Inline functions improve performance by eliminating the overhead of function calls, such as stack operations and jumps, which can lead to faster execution, especially for small, frequently called functions.

15. Explain the syntax for declaring an inline function.
The syntax for declaring an inline function is as follows:

cpp
Run
Copy code
inline returnType functionName(parameters) {
    // function body
}
16. What are macros in C++ and how are they different from inline functions?
Macros are preprocessor directives defined using #define that allow for code substitution before compilation. Unlike inline functions, macros do not have type checking and can lead to code bloat and errors if not used carefully.

17. Explain the advantages and disadvantages of using macros over inline functions.
Advantages of macros include simplicity and the ability to define constants or code snippets that can be reused. Disadvantages include lack of type safety, potential for code bloat, and difficulty in debugging. Inline functions provide type safety and better debugging but may not be as flexible as macros.

18. Provide an example to illustrate the differences between macros and inline functions.
Macro Example:

cpp
Run
Copy code
#define SQUARE(x) ((x) *(x)) // Macro for squaring a number
Inline Function Example:

cpp
Run
Copy code
inline int square(int x) {
    return x * x; // Inline function for squaring a number
}
19. What is function overloading in C++?
Function overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists (types or number of parameters). This enables the same function name to be used for different types of operations.

20. How does the compiler differentiate between overloaded functions?
The compiler differentiates between overloaded functions based on the number and types of parameters in the function signature. It uses this information to determine which function to call based on the arguments provided.

21. Provide an example of overloaded functions in C++.

cpp
Run
Copy code
void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}
22. What are default arguments in C++?
Default arguments are values that can be automatically assigned to function parameters if no corresponding argument is provided during the function call. This allows for more flexible function calls.

23. How do you specify default arguments in a function declaration?
Default arguments are specified in the function declaration by assigning a value to the parameter in the function prototype.

cpp
Run
Copy code
void func(int a, int b = 10); // b has a default value of 10
24. What are the rules for using default arguments in functions?

Default arguments must be specified in the function declaration, not in the definition.
Default arguments can only be provided from right to left; if a parameter has a default value, all parameters to its right must also have default values.
A function can have default arguments for some parameters while requiring others.
25. Provide an example of a function with default arguments.

cpp
Run
Copy code
void display(int a, int b = 5) {
    cout << "a: " << a << ", b: " << b << endl;
}

// Function calls
display(10); // Uses default value for b
display(10, 20); // Uses provided value for b