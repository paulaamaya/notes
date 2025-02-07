# C

The most basic way to run a `.c` program is to pass it to the compiler as follows:

```bash
gcc -o <output>.exe <input>.c
```

| **Data Type** | **Size**     | **Description**                                                | **Format Specifier** |
|---------------|--------------|----------------------------------------------------------------|:--------------------:|
| `char`        | 1 byte       | Single character/letter/number/ASCII value.                    |         `%c`         |
| `int`         | 2 or 4 bytes | Whole numbers                                                  |         `%d`         |
| `float`       | 4 bytes      | Fractional numbers. Sufficient for storing 6-7 decimal digits. |         `%f`         |
| `double`      | 8 bytes      | Fractional numbers.  Sufficient for storing 15 decimal digits. |         `%lf`        |

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

The type `char` is stored an as integer corresponding to the ASCII number of printing characters.  Therfore, they can be used in both representations.

```c
int main(void)
{
  char a = 'a';
  printf("The char a is %c", a);
  printf("The char a is %d", a);

  return 0;
}
```
```bash
The char a is a
The char a is 97
```
