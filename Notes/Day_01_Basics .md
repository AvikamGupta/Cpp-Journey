# C++ Basics

## Common Header Files

In most beginner C++ programs, we usually include the following two lines:

```cpp
#include <iostream>
using namespace std;
```

### What do they do?

* `#include <iostream>` allows us to use input and output features such as `cout`, `cin`, and `endl`.
* `using namespace std;` lets us use `cout` and `cin` directly without writing `std::cout` and `std::cin` every time.

---

## The Main Function

Every C++ program starts execution from the `main()` function.

```cpp
int main() {
    
}
```

* The compiler begins executing the program from this function.
* All the main logic of the program is written inside the curly braces `{}`.

---

## Printing Output

To display text on the screen, we use `cout`.

```cpp
cout << "Avikam Gupta";
```

### Printing on a New Line

There are two common ways to move to the next line after printing:

```cpp
cout << "Avikam Gupta" << endl;
```

or

```cpp
cout << "Avikam Gupta\n";
```

Both statements print the text and then move the cursor to the next line.

---

## Compiling a C++ Program

Suppose the file name is `practice.cpp`.

```powershell
g++ -o practice practice.cpp
```

* `g++` is the C++ compiler.
* `-o practice` specifies the name of the executable file to be created.
* This command compiles the source code and generates an executable file.

---

## Running the Executable

In PowerShell, run the executable using:

```powershell
.\practice.exe
```

This executes the compiled program.

---

# C++ Boilerplate Code

```cpp
#include <iostream>
using namespace std;

int main() {
    return 0;
}
```

## Explanation

### `#include <iostream>`

* `iostream` stands for **Input Output Stream**.
* It provides features such as `cout`, `cin`, and `endl`.

### `using namespace std;`

* Normally, we would need to write `std::cout` and `std::cin`.
* This statement allows us to use `cout` and `cin` directly.

### `int main()`

* This is the entry point of every C++ program.
* Program execution always begins from this function.

### `return 0;`

* Indicates that the program has finished executing successfully.
* The value `0` is returned to the operating system.

---

## Comments

Comments are used to add notes or explanations within the code.

### Single-line Comment

```cpp
// This is a comment
```

The compiler ignores everything written after `//` on that line.
