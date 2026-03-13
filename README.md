# ft_printf

A custom implementation of the standard C `printf` function, developed as part of the **42 curriculum**.

This project is an introduction to **variadic functions**, formatted output handling, and low-level string/number conversion in C. The goal is to recreate the behavior of `printf` for a set of supported conversions while respecting the constraints of the project.

---

## About the Project

The purpose of `ft_printf` is to build a function that mimics the behavior of the original `printf()` from the C standard library.

This project helped me strengthen my understanding of:

- Variadic arguments with `stdarg.h`
- Format parsing
- Hexadecimal and decimal conversions
- Memory-safe string output
- Writing modular and reusable C code

---

## Function Prototype

```c
int	ft_printf(const char *format, ...);
```

---

## Supported Conversions

The mandatory part supports the following format specifiers:

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a percent sign |

---

---

## Compilation

To compile the project, run:

```bash
make
```

This will generate the static library:

```
libftprintf.a
```

| Command | Description |
|---------|-------------|
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Recompiles everything |

---

## Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile with your library:

```bash
cc main.c libftprintf.a
```

### Example

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello, %s!\n", "42");
	ft_printf("Character: %c\n", 'A');
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Hexadecimal: %x\n", 255);
	return (0);
}
```

### Output

```
Hello, 42!
Character: A
Decimal: 42
Hexadecimal: ff
```

---

## Learning Outcomes

Through this project, I improved my skills in:

- Handling variable argument lists
- Splitting logic into small, clean functions
- Managing output length correctly
- Implementing number conversion algorithms
- Writing clearer and more maintainable C code

---

## Notes

- This project was written following the **42 Norm**.
- The implementation focuses on the required conversions from the subject.
- It is designed to be simple, efficient, and easy to integrate into future 42 projects.

---

## Author

**ajeffers**  
42 Student
