# 📘 Day 9 - Subarrays & Maximum Subarray Sum

---

# 🔹 What is a Subarray?

A **subarray** is a **contiguous** (continuous) part of an array.

### Example

```cpp
arr = {1, 2, 3}
```

Possible subarrays:

```
{1}
{1,2}
{1,2,3}
{2}
{2,3}
{3}
```

❌ Not Subarrays:

```
{1,3}
{1,3,2}
```

Because the elements are **not contiguous**.

---

# 🔹 Total Number of Subarrays

For an array of size **n**,

**Formula:**

```
Total Subarrays = n × (n + 1) / 2
```

Example:

```
n = 5

Total = 5 × 6 / 2
      = 15
```

---

# 🔹 Printing All Subarrays (Brute Force)

### Logic

Use **3 loops**:

- First loop → Starting index (`st`)
- Second loop → Ending index (`end`)
- Third loop → Print elements from `st` to `end`

```cpp
for (int st = 0; st < n; st++)
{
    for (int end = st; end < n; end++)
    {
        for (int i = st; i <= end; i++)
        {
            cout << arr[i];
        }
        cout << " ";
    }
    cout << endl;
}
```

### Time Complexity

```
O(n³)
```

Reason:

- Outer loop → n
- Middle loop → n
- Inner loop → n

Overall:

```
O(n × n × n)
= O(n³)
```

---

# 🔹 Maximum Subarray Sum

## Problem Statement

Find the **largest possible sum** among all contiguous subarrays.

Example:

```
Array:

{1, 2, 3, 4, 5}

Subarray with maximum sum:

{1,2,3,4,5}

Maximum Sum = 15
```

Another Example:

```
{-2,1,-3,4,-1,2,1,-5,4}

Maximum Sum = 6

Subarray:

{4,-1,2,1}
```

---

# 🔹 Brute Force Approach

### Idea

Generate every possible subarray and keep calculating its sum.

Instead of recalculating the sum every time, keep a running sum (`cursum`).

```cpp
int maxsum = INT_MIN;

for (int st = 0; st < n; st++)
{
    int cursum = 0;

    for (int end = st; end < n; end++)
    {
        cursum += arr[end];
        maxsum = max(maxsum, cursum);
    }
}
```

### Why initialize with `INT_MIN`?

```cpp
int maxsum = INT_MIN;
```

If the array contains only negative numbers,

```
{-5,-2,-7}
```

The answer should be:

```
-2
```

Using `INT_MIN` ensures negative sums are handled correctly.

---

### Time Complexity

```
O(n²)
```

Reason:

- Starting index → n
- Ending index → n

Running sum removes the need for the third loop.

---

### Space Complexity

```
O(1)
```

---

# 🔹 Kadane's Algorithm

One of the most famous algorithms in DSA.

### Idea

If the current sum becomes negative, discard it because it will only reduce the sum of future subarrays.

So,

```
Current Sum < 0

↓

Reset Current Sum = 0
```

---

## Algorithm

```
Current Sum = 0
Maximum Sum = INT_MIN

Traverse array

Current Sum += current element

Maximum Sum = max(Current Sum, Maximum Sum)

If Current Sum < 0
    Current Sum = 0
```

---

### Code

```cpp
int cursm = 0;
int maxsm = INT_MIN;

for (int val : arr)
{
    cursm += val;

    maxsm = max(maxsm, cursm);

    if (cursm < 0)
        cursm = 0;
}
```

---

### Dry Run

Array:

```
{1,2,3,-2,5}
```

| Element | Current Sum | Max Sum |
|---------:|------------:|---------:|
| 1 | 1 | 1 |
| 2 | 3 | 3 |
| 3 | 6 | 6 |
| -2 | 4 | 6 |
| 5 | 9 | 9 |

Answer:

```
9
```

---

### Example with Negative Prefix

```
{-3,4,5}
```

Step 1

```
Current Sum = -3

Negative

Reset to 0
```

Step 2

```
Current Sum = 4

Max = 4
```

Step 3

```
Current Sum = 9

Max = 9
```

Answer:

```
9
```

---

# 🔹 Time Complexity of Kadane's Algorithm

```
O(n)
```

Only one traversal of the array is required.

---

# 🔹 Space Complexity

```
O(1)
```

Only two variables are used.

---

# 🔹 Important Note (Edge Case)

The standard Kadane's Algorithm works correctly only if `maxsum` is updated **before** resetting `cursm` to `0`, as done in your code.

For arrays containing **all negative elements**, initializing `maxsm` with `INT_MIN` ensures the correct answer is returned.

Example:

```
{-4,-2,-7}

Answer = -2
```

---

# 🔹 Comparison

| Method | Time | Space |
|---------|------|-------|
| Print All Subarrays | O(n³) | O(1) |
| Maximum Subarray (Brute Force) | O(n²) | O(1) |
| Kadane's Algorithm | O(n) | O(1) |

---

# ⭐ Key Takeaways

- A subarray is always **contiguous**.
- Number of subarrays = **n × (n + 1) / 2**.
- Printing all subarrays requires **3 nested loops**.
- Running sum optimizes maximum subarray from **O(n³)** to **O(n²)**.
- Kadane's Algorithm solves the problem in **O(n)**.
- Reset the current sum only when it becomes negative.
- Initialize the maximum sum with `INT_MIN` to correctly handle arrays with all negative values.
