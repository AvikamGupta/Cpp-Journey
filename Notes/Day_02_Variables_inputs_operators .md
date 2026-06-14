# Variables, Data Types & Operators in C++

## Variables

Variables are containers used to store data in memory. Each variable has:

* A name (identifier)
* A data type
* A value

### Example

```cpp
int age = 18;
char grade = 'A';
```

---

## Data Types

Data types define the type of data a variable can store.

| Data Type | Description                                | Typical Size |
| --------- | ------------------------------------------ | ------------ |
| `int`     | Stores whole numbers                       | 4 bytes      |
| `double`  | Stores decimal numbers with high precision | 8 bytes      |
| `bool`    | Stores `true` or `false`                   | 1 byte       |
| `char`    | Stores a single character                  | 1 byte       |
| `float`   | Stores decimal numbers                     | 4 bytes      |

### Example

```cpp
int age = 18;
double pi = 3.1415926535;
bool isStudent = true;
char grade = 'A';
float marks = 95.5;
```

---

## Bytes and Memory

Memory is measured in bytes.

```text
1 Byte = 8 Bits
```

A bit can store only:

```text
0 or 1
```

---

## sizeof() Operator

The `sizeof()` operator is used to determine the memory occupied by a data type.

### Example

```cpp
cout << sizeof(int);
```

### More Examples

```cpp
cout << sizeof(double) << endl;
cout << sizeof(char) << endl;
cout << sizeof(bool) << endl;
```

---

## User Input

To receive input from the user, we use `cin`.

### Syntax

```cpp
cin >> variableName;
```

### Example

```cpp
int age;

cout << "Enter your age: ";
cin >> age;
```

---

## Type Casting

Type casting is the process of converting one data type into another.

### Implicit Type Casting

Performed automatically by the compiler.

```cpp
int num = 10;
double value = num;
```

### Explicit Type Casting

Performed manually by the programmer.

```cpp
double num = 10.75;
int value = (int)num;
```

---

## Operators

Operators are symbols used to perform operations on data.

### Arithmetic Operators

| Operator | Meaning             |
| -------- | ------------------- |
| `+`      | Addition            |
| `-`      | Subtraction         |
| `*`      | Multiplication      |
| `/`      | Division            |
| `%`      | Modulus (Remainder) |

### Example

```cpp
int a = 10;
int b = 3;

cout << a + b << endl;
cout << a % b << endl;
```

---

### Relational Operators

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal To                 |
| `!=`     | Not Equal To             |
| `>`      | Greater Than             |
| `<`      | Less Than                |
| `>=`     | Greater Than or Equal To |
| `<=`     | Less Than or Equal To    |

### Example

```cpp
cout << (10 > 5);
```

---

### Logical Operators

| Operator | Meaning |   |    |
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

### Example

```cpp
cout << (true && false);
```

---

## Unary and Binary Operators

### Unary Operators

Operate on a single operand.

```cpp
a++;
```

Examples:

```cpp
++
--
!
```

### Binary Operators

Operate on two operands.

```cpp
a + b
```

Examples:

```cpp
+
-
*
/
%
==
&&
||
```
