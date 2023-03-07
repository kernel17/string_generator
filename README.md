# string_generator
A high-efficent memory-safe and thread-safe string generator written in C++

## Usage:
An example of usage is given in main.cpp

```
#include "strgen.h"

//...

strgen::random_string(
    10, // length
    charset = strgen::charset::ALL | LOWERCASE | UPPERCASE | DIGITS); // charset::ALL by default
```
