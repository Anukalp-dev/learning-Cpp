# Getting Started with C++

C++ is a powerful, high-performance programming language widely used for system/software development and game programming.

## Basic C++ Syntax

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

- `#include <iostream>`: Includes the standard input/output stream library.
- `int main() { ... }`: Entry point of every C++ program.
- `std::cout`: Used to print output to the terminal.
- `return 0;`: Ends the program.

---

## Compiling and Running C++ Code in the Terminal

### 1. Save your code in a file, e.g., `main.cpp`.

### 2. Open your terminal and navigate to the file's directory.

### 3. Compile the code using `g++`:

```sh
g++ main.cpp -o main
```

### 4. Run the compiled program:

**On Windows:**
```sh
main.exe
```

**On Linux/macOS:**
```sh
./main
```

---

## Useful Terminal Commands

| Command                | Description                      |
|------------------------|----------------------------------|
| `g++ file.cpp -o file` | Compile C++ code                 |
| `ls` / `dir`           | List files in directory          |
| `cd folder`            | Change directory                 |
| `./file` or `file.exe` | Run the compiled program         |

---

Happy Coding! 