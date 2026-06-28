# Day 8 - Vectors in C++

## What is a Vector?

A **vector** is a dynamic array provided by the C++ Standard Template Library (STL).

Unlike normal arrays:
- Arrays have a fixed size.
- Vectors can grow and shrink automatically.
- Memory is managed automatically.

Header File:

```cpp
#include <vector>
```

Namespace:

```cpp
using namespace std;
```

---

# Declaring a Vector

### Empty Vector

```cpp
vector<int> nums;
```

### Vector with Initial Size

```cpp
vector<int> nums(5);
```

Output:

```
0 0 0 0 0
```

(All elements are initialized to 0.)

---

### Vector with Initial Size and Value

```cpp
vector<int> nums(5, 10);
```

Output:

```
10 10 10 10 10
```

---

### Initialize with Values

```cpp
vector<int> nums = {1,2,3,4,5};
```

or

```cpp
vector<int> nums{1,2,3,4,5};
```

---

# Accessing Elements

Using index:

```cpp
cout << nums[0];
```

Using `.at()`

```cpp
cout << nums.at(0);
```

Difference:

- `[]` does NOT check bounds.
- `.at()` checks bounds and throws an exception if the index is invalid.

Example:

```cpp
cout << nums.at(100);
```

Runtime Error (Out of Range)

---

# Size of Vector

```cpp
cout << nums.size();
```

Returns:

Number of elements currently stored.

Example:

```cpp
vector<int> v = {5,8,2};

cout << v.size();
```

Output

```
3
```

---

# Adding Elements

## push_back()

Adds an element at the end.

```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);
v.push_back(30);
```

Output:

```
10 20 30
```

Time Complexity:

```
O(1) Average
```

---

# Removing Elements

## pop_back()

Removes the last element.

```cpp
v.pop_back();
```

Example

Before

```
10 20 30
```

After

```
10 20
```

Time Complexity

```
O(1)
```

---

# First Element

```cpp
v.front();
```

Example

```cpp
cout << v.front();
```

Output

```
10
```

---

# Last Element

```cpp
v.back();
```

Example

```cpp
cout << v.back();
```

Output

```
30
```

---

# Check if Vector is Empty

```cpp
v.empty();
```

Returns

- `true`
- `false`

Example

```cpp
if(v.empty())
{
    cout<<"Empty";
}
```

---

# Remove All Elements

```cpp
v.clear();
```

Example

Before

```
1 2 3 4 5
```

After

```
(empty)
```

Size becomes

```
0
```

---

# Resize Vector

```cpp
v.resize(5);
```

If new size is larger:

New elements become 0.

Example

```cpp
vector<int> v = {1,2};

v.resize(5);
```

Output

```
1 2 0 0 0
```

---

Shrink Size

```cpp
v.resize(2);
```

Output

```
1 2
```

---

# Insert Element

```cpp
v.insert(v.begin()+2,100);
```

Example

Before

```
1 2 3 4
```

After

```
1 2 100 3 4
```

Time Complexity

```
O(n)
```

---

# Erase Element

Remove one element

```cpp
v.erase(v.begin()+1);
```

Before

```
10 20 30 40
```

After

```
10 30 40
```

---

Remove a Range

```cpp
v.erase(v.begin()+1, v.begin()+3);
```

Before

```
10 20 30 40 50
```

After

```
10 40 50
```

---

# Iterating Through Vector

## Using Index

```cpp
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
```

---

## Range Based Loop

```cpp
for(int x : v)
{
    cout<<x<<" ";
}
```

Output

```
10 20 30
```

---

## Using Iterator

```cpp
for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
{
    cout<<*it<<" ";
}
```

Modern C++

```cpp
for(auto it=v.begin(); it!=v.end(); it++)
{
    cout<<*it<<" ";
}
```

---

# Important Functions Summary

| Function | Purpose |
|----------|---------|
| push_back(x) | Add element at end |
| pop_back() | Remove last element |
| size() | Number of elements |
| empty() | Check if vector is empty |
| clear() | Remove all elements |
| front() | First element |
| back() | Last element |
| at(i) | Safe indexing |
| resize(n) | Change size |
| insert() | Insert element |
| erase() | Delete element |
| begin() | Iterator to first element |
| end() | Iterator after last element |

---

# Vector vs Array

| Array | Vector |
|-------|--------|
| Fixed Size | Dynamic Size |
| Cannot Grow | Can Grow Automatically |
| Manual Memory | Automatic Memory Management |
| Faster | Slightly Slower |
| No Built-in Functions | Rich STL Functions |

---

# Time Complexity

| Operation | Complexity |
|-----------|------------|
| Access by Index | O(1) |
| push_back() | O(1) Average |
| pop_back() | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| clear() | O(n) |
| insert() | O(n) |
| erase() | O(n) |

---

# Example Program

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout<<"Size : "<<nums.size()<<endl;
    cout<<"First : "<<nums.front()<<endl;
    cout<<"Last : "<<nums.back()<<endl;

    for(int x : nums)
    {
        cout<<x<<" ";
    }

    nums.pop_back();

    cout<<"\nAfter Pop : ";

    for(int x : nums)
    {
        cout<<x<<" ";
    }

    return 0;
}
```

Output

```
Size : 3
First : 10
Last : 30
10 20 30
After Pop : 10 20
```

---

# Interview Tips ⭐

- Vector is the most commonly used STL container.
- `push_back()` is **O(1) average** because vectors allocate extra capacity.
- `insert()` and `erase()` are **O(n)** since elements may need to shift.
- Prefer `.at()` when safety is important; use `[]` for slightly faster access when you're sure the index is valid.
- `capacity()` (allocated storage) and `size()` (actual elements) are different concepts.
- `vector<int>` stores elements in **contiguous memory**, making random access very fast.

---

# Common Mistakes

❌ Accessing an invalid index

```cpp
cout << v[100];
```

✔ Check the size first or use:

```cpp
v.at(index);
```

---

❌ Calling `pop_back()` on an empty vector

```cpp
v.pop_back();
```

✔ Safe approach

```cpp
if(!v.empty())
{
    v.pop_back();
}
```

---

# Key Takeaways

- A vector is a **dynamic array**.
- Include it using `#include <vector>`.
- Use `push_back()` to add elements.
- Use `pop_back()` to remove the last element.
- Access elements with `[]` or `.at()`.
- Use `front()` and `back()` for the first and last elements.
- `size()` returns the current number of elements.
- `clear()` removes all elements.
- `insert()` and `erase()` modify elements at specific positions.
- Vectors are one of the most important STL containers and are heavily used in DSA and competitive programming.
