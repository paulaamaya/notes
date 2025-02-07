# C

The most basic way to run a `.c` program is to pass it to the compiler as follows:

```bash
gcc -o <output>.exe <input>.c
```

| **Data Type** | **Size**     | **Description**                                                | **Format Specifier** |
|---------------|--------------|----------------------------------------------------------------|:--------------------:|
| `int`         | 2 or 4 bytes | Whole numbers                                                  |         `%d`         |
| `float`       | 4 bytes      | Fractional numbers. Sufficient for storing 6-7 decimal digits. |         `%f`         |
| `double`      | 8 bytes      | Fractional numbers.  Sufficient for storing 15 decimal digits. |         `%lf`        |
| `char`        | 1 byte       | Single character/letter/number/ASCII value.                    |         `%c`         |
