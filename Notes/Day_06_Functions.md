# Day 6 - Functions in C++

## What is a Function?

A function is a block of code that performs a specific task.

Functions help to:
- Avoid code repetition
- Improve readability
- Make programs modular and easier to maintain

---

## Syntax of a Function

```cpp
returnType functionName(parameters)
{
    // function body
}
```

### Example

```cpp
#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello, World!";
}

int main()
{
    greet();
    return 0;
}
```

Output:

```
Hello, World!
```

---

## Components of a Function

### 1. Function Declaration (Prototype)

Tells the compiler about the function before its use.

```cpp
void greet();
```

### 2. Function Definition

Contains the actual implementation.

```cpp
void greet()
{
    cout << "Hello";
}
```

### 3. Function Call

Invokes the function.

```cpp
greet();
```

---

## Types of Functions

### 1. Function with No Parameters and No Return Value

```cpp
void display()
{
    cout << "Welcome";
}
```

---

### 2. Function with Parameters and No Return Value

```cpp
void add(int a, int b)
{
    cout << a + b;
}
```

Function Call:

```cpp
add(5, 3);
```

---

### 3. Function with Parameters and Return Value

```cpp
int add(int a, int b)
{
    return a + b;
}
```

Function Call:

```cpp
int sum = add(5, 3);
```

---

### 4. Function with No Parameters but Return Value

```cpp
int getNumber()
{
    return 10;
}
```

---

## Return Statement

The `return` statement sends a value back to the caller and ends the function.

```cpp
int square(int n)
{
    return n * n;
}
```

---

## Function Parameters and Arguments

### Parameters

Variables defined in the function declaration.

```cpp
void greet(string name)
```

### Arguments

Actual values passed during function call.

```cpp
greet("John");
```

Here:
- `name` → Parameter
- `"John"` → Argument

---

## Pass by Value

A copy of the variable is passed to the function.

```cpp
void increment(int x)
{
    x++;
}

int main()
{
    int a = 5;
    increment(a);

    cout << a;
}
```

Output:

```
5
```

Original variable remains unchanged.

---

## Function Overloading

Multiple functions can have the same name but different parameters.

```cpp
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}
```

This is called **Function Overloading**.

---

## Advantages of Functions

- Code Reusability
- Better Readability
- Easier Debugging
- Modular Programming
- Reduced Code Duplication

---

## Key Points

- A function performs a specific task.
- Functions make code reusable and organized.
- `void` means no value is returned.
- `return` sends a value back to the caller.
- Parameters receive data, arguments provide data.
- Functions can be overloaded.
- Every C++ program starts execution from the `main()` function.
