# Day 7 - Arrays in C++

## What is an Array?

An **Array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.

Instead of creating multiple variables, an array allows us to store multiple values under a single name.

### Example
```cpp
int marks[5] = {90, 85, 78, 92, 88};
```

Here:
- `marks` is the array name.
- `5` is the size of the array.
- Index starts from `0`.

| Index | Value |
|---------|---------|
| 0 | 90 |
| 1 | 85 |
| 2 | 78 |
| 3 | 92 |
| 4 | 88 |

---

# Binary Number System

The Binary Number System uses only two digits:

- `0`
- `1`

Computers understand and process data in binary form.

### Examples

| Decimal | Binary |
|----------|----------|
| 0 | 0 |
| 1 | 1 |
| 2 | 10 |
| 3 | 11 |
| 4 | 100 |
| 5 | 101 |

### Decimal to Binary (Logic)

Repeatedly divide the number by 2 and store the remainders.

Example: Convert 13 to Binary

```
13 ÷ 2 = 6 remainder 1
6 ÷ 2 = 3 remainder 0
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1
```

Read remainders from bottom to top:

```
13 = 1101
```

---

# Array Declaration

### Syntax

```cpp
dataType arrayName[size];
```

### Example

```cpp
int arr[5];
```

Creates an integer array capable of storing 5 values.

---

# Array Initialization

### Method 1

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

### Method 2

```cpp
int arr[] = {10, 20, 30, 40, 50};
```

Compiler automatically calculates size.

---

# Taking Input in Array

```cpp
int arr[5];

for(int i = 0; i < 5; i++)
{
    cin >> arr[i];
}
```

---

# Printing an Array

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}
```

---

# Traversing an Array

Traversing means visiting every element of an array one by one.

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i];
}
```

Time Complexity:

```
O(n)
```

---

# Finding Smallest Element in Array

### Logic

1. Assume first element is smallest.
2. Compare it with every element.
3. Update whenever a smaller value is found.

```cpp
int smallest = arr[0];

for(int i = 1; i < n; i++)
{
    if(arr[i] < smallest)
    {
        smallest = arr[i];
    }
}

cout << smallest;
```

### Time Complexity

```
O(n)
```

---

# Finding Largest Element in Array

### Logic

1. Assume first element is largest.
2. Compare with all elements.
3. Update whenever a larger value appears.

```cpp
int largest = arr[0];

for(int i = 1; i < n; i++)
{
    if(arr[i] > largest)
    {
        largest = arr[i];
    }
}

cout << largest;
```

### Time Complexity

```
O(n)
```

---

# Pass By Value

When a variable is passed to a function, a copy is created.

Changes made inside the function do not affect the original variable.

### Example

```cpp
void update(int x)
{
    x = 100;
}

int main()
{
    int a = 10;

    update(a);

    cout << a;
}
```

Output:

```
10
```

Reason:
A copy of `a` is sent.

---

# Pass By Reference

The original variable is passed using `&`.

Changes inside the function affect the original variable.

### Example

```cpp
void update(int &x)
{
    x = 100;
}

int main()
{
    int a = 10;

    update(a);

    cout << a;
}
```

Output:

```
100
```

Reason:
Function directly accesses the original variable.

---

# Passing Arrays to Functions

Arrays are passed by reference internally.

Changes inside the function modify the original array.

### Example

```cpp
void update(int arr[], int n)
{
    arr[0] = 100;
}

int main()
{
    int arr[3] = {1,2,3};

    update(arr, 3);

    cout << arr[0];
}
```

Output:

```
100
```

---

# Linear Search

Linear Search checks elements one by one until the target is found.

### Algorithm

1. Start from index 0.
2. Compare current element with target.
3. If found, return index.
4. If not found after full traversal, return -1.

### Example

```cpp
int linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}
```

### Time Complexity

- Best Case: `O(1)`
- Worst Case: `O(n)`

---

# Reverse an Array (Two Pointer Approach)

### Idea

Use two pointers:

- `start = 0`
- `end = n - 1`

Swap both values and move inward.

### Example

```cpp
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}
```

### Example

Before:

```
1 2 3 4 5
```

After:

```
5 4 3 2 1
```

### Time Complexity

```
O(n)
```

### Space Complexity

```
O(1)
```

---

# Important Points About Arrays

✅ Array stores elements of the same data type.

✅ Indexing starts from `0`.

✅ Elements are stored in contiguous memory locations.

✅ Array size is fixed after declaration.

✅ Arrays provide fast access using index.

✅ Out-of-bound access causes undefined behavior.

Example:

```cpp
int arr[5];

cout << arr[10];
```

This is invalid.

---

# Common Array Operations

| Operation | Complexity |
|------------|------------|
| Access by Index | O(1) |
| Update Element | O(1) |
| Traversal | O(n) |
| Linear Search | O(n) |
| Find Maximum | O(n) |
| Find Minimum | O(n) |
| Reverse Array | O(n) |

---

# Interview Notes

### Difference Between Pass By Value and Pass By Reference

| Pass By Value | Pass By Reference |
|---------------|------------------|
| Copy is passed | Original variable is passed |
| Changes do not affect original | Changes affect original |
| Extra memory used | No extra copy |
| Safer | Faster for large data |

---

# Key Takeaways

- Arrays store multiple values of the same type.
- Indexing starts from 0.
- Arrays are stored in contiguous memory.
- Traversal is done using loops.
- Linear Search works in O(n).
- Smallest and Largest elements can be found in one traversal.
- Two Pointer technique efficiently reverses an array.
- Arrays passed to functions can modify original data.
- Understanding arrays is essential before learning Sorting, Binary Search, Strings, and STL Vectors.
