# Conditional Statements in C++

Conditional statements allow a program to make decisions and execute different blocks of code based on specific conditions.

---

## if Statement

The `if` statement executes a block of code only when the given condition is `true`.

### Syntax

```cpp
if(condition)
{
    // code to execute if condition is true
}
```

### Example

```cpp
int age = 18;

if(age >= 18)
{
    cout << "Eligible to vote";
}
```

---

## if-else Statement

The `if-else` statement provides an alternative block of code when the condition is `false`.

### Syntax

```cpp
if(condition)
{
    // code if condition is true
}
else
{
    // code if condition is false
}
```

### Example

```cpp
int age = 16;

if(age >= 18)
{
    cout << "Eligible to vote";
}
else
{
    cout << "Not eligible to vote";
}
```

---

## else-if Ladder

The `else-if` ladder is used when multiple conditions need to be checked one after another.

The program executes the first block whose condition evaluates to `true` and skips the remaining conditions.

### Syntax

```cpp
if(condition1)
{
    // code
}
else if(condition2)
{
    // code
}
else if(condition3)
{
    // code
}
else
{
    // code if none of the conditions are true
}
```

### Example

```cpp
int marks = 85;

if(marks >= 90)
{
    cout << "Grade A";
}
else if(marks >= 75)
{
    cout << "Grade B";
}
else if(marks >= 50)
{
    cout << "Grade C";
}
else
{
    cout << "Fail";
}
```

---

## Nested if Statement

A nested `if` statement means placing an `if` statement inside another `if` statement.

### Example

```cpp
int age = 20;
bool hasLicense = true;

if(age >= 18)
{
    if(hasLicense)
    {
        cout << "Can drive";
    }
}
```

---

## Comparison Operators

These operators are commonly used in conditional statements.

| Operator | Meaning |
|----------|----------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

### Example

```cpp
if(a == b)
{
    cout << "Both are equal";
}
```

---

## Logical Operators

Logical operators are used to combine multiple conditions.

| Operator | Meaning |
|----------|----------|
| `&&` | Logical AND |
| `||` | Logical OR |
| `!` | Logical NOT |

### Example

```cpp
if(age >= 18 && hasLicense)
{
    cout << "Can drive";
}
```

---

## Key Points

- `if` executes code only when the condition is true.
- `if-else` provides two possible execution paths.
- `else-if` ladder is used for multiple conditions.
- Nested `if` allows checking conditions inside another condition.
- Comparison operators compare values.
- Logical operators combine multiple conditions.
- Conditions always evaluate to either `true` or `false`.
