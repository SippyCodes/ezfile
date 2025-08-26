# 📁 ezfile.hpp

**Header-only C++ library for simplified file reading, writing, and creation.**  
Built for rapid prototyping, utility scripting, and clean abstraction.

---

## 🚀 Features

- Read entire file as string or line-by-line
- Write or append text and line vectors
- Create files with optional initial content
- Check file existence
- Minimal boilerplate, no dependencies

---

## 📦 Installation

Just drop `ezfile.hpp` into your project:

```cpp
#include "ezfile.hpp"
```

## ⚙️ Functions

exists(filepath)
The exists function checks if a file exists
```cpp
if (ezfile::exists("data.txt")) {
    std::cout << "File exists!\n";
}
```

create_file(filename, inital content)
This function allows you to make a file and add text/data to start with
```cpp
ezfile::create_file("example.txt", "hi");
```

read_text(filepath)
This function reads the file into an entire string
```cpp
std::string fileContent = ezfile::read_text("example.txt");
```

read_lines(filepath)
This function reads the file line-by-line into a vector of strings
```cpp
auto lines = ezfile::read_lines("todo.txt");
for (const auto& line : lines) {
    std::cout << line << '\n';
}
```
write_text(filepath, text)
Writes text to the specified file
```cpp
ezfile::write_text("example.txt", "hi");
```

append_text(filepath, text)
Adds text to the specified file
```cpp
ezfile::append_text("example.txt", " from github!");
```

write_lines(filepath, lines)
Adds multiple lines to a file via vectors
```cpp
std::vector<std::string> lines = { "Line 1", "Line 2", "Line 3" };
ezfile::write_lines("list.txt", lines);
```

 
I hope yall enjoy :P
