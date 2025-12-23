*This project has been created as part of the 42 curriculum by moamhouc.*

# ft_printf

## Description

This project is part of the 42 curriculum and consists of reimplementing the standard C library function `printf`.

The goal of `ft_printf` is to understand and apply:

* **Variadic functions in C** (`va_list`, `va_start`, `va_arg`, `va_end`)
* Format string parsing
* Output handling without using the original `printf`

The function reproduces the behavior of `printf` for a defined set of conversion specifiers while respecting the constraints imposed by the subject.

## Prototype

```c
int ft_printf(const char *format, ...);

## Instructions

### Requirements

* Compiler: `gcc` or `clang`
* `make`

### Compilation

To compile the library:

```bash
make

```

To recompile from scratch:

```bash
make fclean && make

```

## Usage

`ft_printf` is provided as a static library and must be linked to a program.

**Example:**

```bash
cc main.c libftprintf.a
./a.out

```

## Algorithm and Data Structures

### Algorithm Choice

`ft_printf` parses the format string sequentially from left to right.

1. **Regular characters** are printed directly.
2. When a `%` character is encountered, the following character is interpreted as a **conversion specifier**.
3. The corresponding argument is retrieved using `va_arg` and passed to the appropriate printing function.
4. Each printing function returns the number of characters written.
5. The total number of printed characters is accumulated and returned.

The algorithm runs in **O(n)** time, where **n** is the length of the format string.

### Data Structures

No complex data structures are used.

* `const char *`: Used to iterate over the format string.
* `va_list`: Used to manage variadic arguments.
* **Primitive types** (`int`, `char`, pointers): Used for conversions and counting.
* **No dynamic memory allocation** is used.

## Supported Conversions

| Specifier | Description |
| --- | --- |
| `%c` | Character |
| `%s` | String |
| `%d` / `%i` | Signed integer |
| `%u` | Unsigned integer |
| `%x` / `%X` | Hexadecimal (lowercase / uppercase) |
| `%p` | Pointer |
| `%%` | Percent sign |

## Resources

* 42 subject PDF
* `man 3 printf`
* `man stdarg`
* [GeeksforGeeks – Variadic Functions in C](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)

### AI Usage

AI tools were used to:
- Clarify the behavior of variadic functions (`va_list`, `va_arg`, `va_start`, `va_end`)
---
