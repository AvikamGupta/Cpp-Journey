# C++ Notes - Day 4
## Loops & Nested Control Structures

---

# Loops in C++

Loops are used to execute a block of code repeatedly until a specified condition becomes false.

## Types of Loops

1. For Loop
2. While Loop
3. Do-While Loop

---

# For Loop

A `for` loop is used when the number of iterations is known beforehand.

## Syntax

```cpp
for(initialization; condition; update)
{
    // code
}
```

## Example

```cpp
for(int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
```

## Working

1. Initialization executes once.
2. Condition is checked.
3. Loop body executes if condition is true.
4. Update statement executes.
5. Steps 2–4 repeat until condition becomes false.

---

# While Loop

A `while` loop is used when the number of iterations is not known in advance.

## Syntax

```cpp
while(condition)
{
    // code
}
```

## Example

```cpp
int i = 1;

while(i <= 5)
{
    cout << i << endl;
    i++;
}
```

## Working

1. Condition is checked first.
2. If true, loop body executes.
3. Control returns to the condition.
4. Loop stops when condition becomes false.

---

# Do-While Loop

A `do-while` loop executes the code block at least once before checking the condition.

## Syntax

```cpp
do
{
    // code
}
while(condition);
```

## Example

```cpp
int i = 1;

do
{
    cout << i << endl;
    i++;
}
while(i <= 5);
```

## Working

1. Loop body executes first.
2. Condition is checked afterward.
3. If true, loop repeats.
4. If false, loop terminates.

## Key Point

A `do-while` loop always executes at least one time.

---

# Comparison of Loops

| Feature | For Loop | While Loop | Do-While Loop |
|----------|----------|-----------|--------------|
| Condition Check | Before execution | Before execution | After execution |
| Minimum Executions | 0 | 0 | 1 |
| Best Used When | Iterations are known | Iterations are unknown | Code must run at least once |

---

# Nested Loops

A loop inside another loop is called a nested loop.

## Syntax

```cpp
for(initialization; condition; update)
{
    for(initialization; condition; update)
    {
        // code
    }
}
```

## Example

```cpp
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        cout << "* ";
    }

    cout << endl;
}
```

## Output

```
* * *
* * *
* * *
```

## Uses of Nested Loops

- Pattern printing
- Matrix operations
- Working with rows and columns
- Multi-level iterations

---

# Nested If-Else

An `if-else` statement inside another `if` or `else` block is called a nested if-else.

## Syntax

```cpp
if(condition1)
{
    if(condition2)
    {
        // code
    }
    else
    {
        // code
    }
}
else
{
    // code
}
```

## Example

```cpp
int age = 20;
bool hasLicense = true;

if(age >= 18)
{
    if(hasLicense)
    {
        cout << "Eligible to drive";
    }
    else
    {
        cout << "License required";
    }
}
else
{
    cout << "Underage";
}
```

---

# Infinite Loops

An infinite loop occurs when the loop condition never becomes false.

## Example

```cpp
while(true)
{
    cout << "Running...";
}
```

## Common Causes

- Missing update statement
- Incorrect condition
- Logical errors

---

# Best Practices

- Use meaningful loop variables.
- Avoid unnecessary nested loops.
- Ensure loop conditions eventually become false.
- Choose the appropriate loop type based on the problem.
- Keep loop bodies clean and readable.

---

# Key Takeaways

- `for` loop is preferred when the number of iterations is known.
- `while` loop is useful when iterations depend on a condition.
- `do-while` loop executes at least once.
- Nested loops are commonly used for pattern printing and matrix problems.
- Nested if-else helps handle multiple decision levels.
- Always avoid unintended infinite loops.
