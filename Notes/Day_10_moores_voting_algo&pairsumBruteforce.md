# 📅 Day 10 - Pair Sum & Moore's Voting Algorithm

---

# 🔹 Pair Sum (Brute Force Approach)

## 📌 Problem Statement

Given an array and a target value, find the indices of two elements whose sum is equal to the target.

### Example

```cpp
nums = {2,7,11,15}
target = 9
```

Output

```
0,1
```

Because

```
2 + 7 = 9
```

---

# 🔹 Code

```cpp
vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}
```

---

# 🔹 Working

### Step 1

Take the size of the vector.

```cpp
int n = nums.size();
```

---

### Step 2

Run two loops.

Outer loop selects the first element.

Inner loop checks every other element.

```cpp
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
```

---

### Step 3

Check whether the sum equals the target.

```cpp
if(nums[i] + nums[j] == target)
```

If true,

Store both indices.

```cpp
ans.push_back(i);
ans.push_back(j);
```

Return immediately because the answer has been found.

---

# 🔹 Dry Run

Array

```
Index : 0 1 2 3

Value : 2 7 11 15
```

Target

```
9
```

Iterations

```
i = 0

j = 0

2 + 2 = 4 ❌

j = 1

2 + 7 = 9 ✅
```

Store

```
0
1
```

Return answer.

---

# 🔹 Time Complexity

Two nested loops

```
O(n²)
```

---

# 🔹 Space Complexity

Only answer vector is used.

```
O(1)
```

(or O(2) to store indices, which is still considered O(1))

---

# 🔹 Drawback

This solution checks every possible pair.

For large arrays, it becomes slow.

A better approach is using:

- Hash Map
- Two Pointer (for sorted arrays)

which works in

```
O(n)
```

---

# 🔹 Moore's Voting Algorithm

## 📌 Problem Statement

Find the element that appears more than

```
n / 2
```

times in an array.

This element is called the **Majority Element**.

Example

```
1 2 2 2 3 2 2
```

Answer

```
2
```

Because it appears

```
5 times
```

which is greater than

```
7/2 = 3
```

---

# 🔹 Why Moore's Voting?

Instead of counting frequencies using a Hash Map,

Moore's Voting Algorithm finds the majority element in

```
O(n)
```

time

and

```
O(1)
```

space.

This makes it one of the most efficient algorithms for this problem.

---

# 🔹 Main Idea

Imagine every occurrence of the majority element gets paired with a different element.

Each pair cancels out.

Since the majority element occurs more than half the time,

it can never be completely canceled.

The remaining candidate is the majority element.

---

# 🔹 Variables Used

```cpp
int ans = 0;
int freq = 0;
```

### ans

Current candidate.

### freq

Vote count of the current candidate.

---

# 🔹 Algorithm

Traverse the array once.

### Case 1

If frequency becomes zero,

choose the current element as the new candidate.

```cpp
if(freq == 0)
    ans = nums[i];
```

---

### Case 2

If current element equals candidate,

increase frequency.

```cpp
freq++;
```

---

### Case 3

Otherwise,

decrease frequency.

```cpp
freq--;
```

---

# 🔹 Dry Run

Array

```
2 2 1 1 1 2 2
```

| Element | Candidate | Frequency |
|---------|-----------|-----------|
|2|2|1|
|2|2|2|
|1|2|1|
|1|2|0|
|1|1|1|
|2|1|0|
|2|2|1|

Final Candidate

```
2
```

Answer

```
2
```

---

# 🔹 Visualization

Imagine votes.

```
2 gets +1

2 gets +1

1 cancels one vote

1 cancels another vote

Candidate changes

2 returns

Remaining candidate survives.
```

The survivor is always the majority element.

---

# 🔹 Why It Works

If one element occurs more than

```
n/2
```

times,

all other elements together are fewer than it.

Even after every cancellation,

that element still remains.

---

# 🔹 Time Complexity

Only one traversal.

```
O(n)
```

---

# 🔹 Space Complexity

Only two variables are used.

```
O(1)
```

---

# 🔹 Important Note

Moore's Voting Algorithm only gives the correct answer **directly** if the problem guarantees that a majority element exists.

If the majority element is **not guaranteed**, then after finding the candidate, perform another traversal to verify that it appears more than `n/2` times.

---

# 🔹 Interview Tips

✅ Pair Sum Brute Force

- Easy to understand
- Checks every pair
- Time Complexity = O(n²)
- Can be optimized using Hash Map

---

✅ Moore's Voting Algorithm

- Used for Majority Element
- Based on vote cancellation
- Single traversal
- Constant space
- Time Complexity = O(n)
- Space Complexity = O(1)

---

# 🎯 Key Takeaways

✔ Pair Sum Brute Force uses nested loops to check every possible pair.

✔ It is simple but inefficient for large inputs.

✔ Moore's Voting Algorithm is one of the smartest array algorithms.

✔ It works because majority elements cannot be completely canceled.

✔ Moore's Voting is an important interview algorithm and is frequently asked in coding interviews.
