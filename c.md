# C

To compile and run a .c program, use the following command:
```bash
gcc -o <output>.exe <input>.c
```

By default, C programs read from standard input (keyboard) and write to standard output. However, you can redirect input and output using files:
```bash
<output>.exe < input.txt > output.txt
```

## Data Types in C

| **Data Type** | **Size**     | **Description**                                                | **Format Specifier** |
|---------------|--------------|----------------------------------------------------------------|:--------------------:|
| `char`        | 1 byte       | Single character/letter/number/ASCII value.                    |         `%c, %uc`         |
| `int`         | 2 or 4 bytes | Whole numbers                                                  |         `%hd, %d, %ld`    |
| `float`       | 4 bytes      | Fractional numbers. Sufficient for storing 6-7 decimal digits. |         `%f`              |
| `double`      | 8 bytes      | Fractional numbers.  Sufficient for storing 15 decimal digits. |         `%lf, %Lf`        |

For instance on Oppie we have:

```bash
Type Sizes on My System
    char: 1 bytes.
    short int: 2 bytes.
    int: 4 bytes.
    long int: 8 bytes.
    float: 4 bytes.
    double: 8 bytes.
    long double: 16 bytes.
```

The type `char` is stored an as integer corresponding to the ASCII number of printing characters.  Therefore, they can be used in both representations.  Variables of this type can also just be *used to store small integers*.

```c
int main(void)
{
  char a = 'a';
  printf("The char a is %c", a); // Output: a
  printf("The char a is %d", a); // Output 97

  return 0;
}
```

The typedef keyword allows you to create synonyms for existing types. For example:
```c
typedef float INCHES
INCHES length, width;
```

## Functions

- If a function definition does not specify return type, then it is `int` by default.  
- Functions should be declared before they are called. This is often done using a function prototype, typically placed in a `.h` file.
- All function arguments are passed **call-by-value**.
    1. Each expression in the argument list is evaluated.
    2. The value of each expression is converted to the type of the formal parameter (if needed).
    3. The body of the function is excecuted.

### Storage Classes

**`auto`** Principal storage class.  Considered "local" to the block where they are defined, and child blocks.  They can be masked when a child block declares them again.

**`extern`** Default class for all functions and variables declared outside of functions and can be used trouhghout the program.  Such variables can be masked by child blocks redeclaring them, but their values cannot be destroyed.

```c
#include <stdio.h>

int a = 1, b = 2, c = 3;
int f();

int main(void){
    printf("%3d\n", f()); // Output: 12
    printf("%2d%2d%2d", a, b, c); // Output: 4 2 3 

    return 0;
}

int f(){
    // masks of external variables
    int b, c;

    // global a gets updated
    a = b = c = 4;
    return a + b + c;
}
```

They keyword `extern` also tells the compiler to look for their declaration "somehwere else", such as a `.h` file.  This is the correct way of calling these variables. 

**`static`** Preserve block-exit values of variables.  When applied to external identifiers, these restric their scope to the file where they are defined only. This enhances program security by providing a form of privacy.

### Debugging: Assertions & Blocks

The use of assertions through the `assert.h` header file is good programming methodology.

```c
# include <assert,h>

int main(void){
    int a, b, c;
    ...
    c = f(a,b);
    assert(c > 0)
}
```
If the expression passed to `assert` is false, the system will print a message and the program aborted.  Another tool is to exploit the scope rules of blocks and temporarily insert blocks into the code.  In these blocks we can define local variables that are only accesssible there.

```c
{
    int v = f(x);
    // Debugging block
    {
        static int count = 0;
        printf("Debug Count %d: v = %d", count, v);
    }
} 
```
## Arrays, Pointers, & Strings 
