# Libft
*This project has been created as part of the 42 curriculum by kaeiu.*

# Libft

## Description

Libft is the first project in the 42 curriculum and focuses on recreating a custom version of the standard C library.

The goal of the project is to better understand low-level programming concepts in C by reimplementing commonly used libc functions from scratch, without relying on the original implementations. The project also introduces additional utility functions and linked list manipulation functions that will be reused throughout future projects in the curriculum.

This project strengthens understanding of:

- Memory management
- Pointer arithmetic
- String manipulation
- Defensive programming
- File descriptors
- Dynamic allocation
- Linked lists
- Recreating standard library behavior

All functions were written in pure C and follow the 42 Norm coding standard.

---

# Library Overview

The library contains implementations of standard libc functions, additional utility functions, and bonus linked list functions.

---

# Mandatory Functions

## Character Classification

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is numeric |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |

---

## Character Conversion

| Function | Description |
|----------|-------------|
| `ft_toupper` | Converts lowercase to uppercase |
| `ft_tolower` | Converts uppercase to lowercase |

---

## String Functions

| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns string length |
| `ft_strlcpy` | Copies string safely |
| `ft_strlcat` | Concatenates strings safely |
| `ft_strchr` | Finds first occurrence of a character |
| `ft_strrchr` | Finds last occurrence of a character |
| `ft_strncmp` | Compares strings |
| `ft_strnstr` | Finds substring in limited size |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts substring |
| `ft_strjoin` | Joins two strings |
| `ft_strtrim` | Removes characters from start/end |
| `ft_split` | Splits string using delimiter |
| `ft_strmapi` | Applies function to each character |
| `ft_striteri` | Applies function to each character in-place |

---

## Memory Functions

| Function | Description |
|----------|-------------|
| `ft_memset` | Fills memory with a value |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory |
| `ft_memmove` | Copies overlapping memory safely |
| `ft_memchr` | Searches memory |
| `ft_memcmp` | Compares memory |
| `ft_calloc` | Allocates and zeroes memory |

---

## Conversion Functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |
| `ft_itoa` | Converts integer to string |

---

## File Descriptor Functions

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Writes character to file descriptor |
| `ft_putstr_fd` | Writes string to file descriptor |
| `ft_putendl_fd` | Writes string followed by newline |
| `ft_putnbr_fd` | Writes integer to file descriptor |

---

# Bonus Functions

The bonus section introduces linked list manipulation.

## Linked List Functions

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates new node |
| `ft_lstadd_front` | Adds node at beginning |
| `ft_lstsize` | Counts nodes |
| `ft_lstlast` | Returns last node |
| `ft_lstadd_back` | Adds node at end |
| `ft_lstdelone` | Deletes node |
| `ft_lstclear` | Clears list |
| `ft_lstiter` | Iterates through list |
| `ft_lstmap` | Maps list into new list |

---

# Instructions

## Compilation

Compile the mandatory library:

```bash
make
```

Compile the bonus functions:

```bash
make bonus
```

---

## Makefile Rules

| Command | Action |
|---------|--------|
| `make` | Compile mandatory functions |
| `make bonus` | Compile bonus functions |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and library |
| `make re` | Recompile everything |

---

## Usage

Include the header file in your source code:

```c
#include "libft.h"
```

Compile with the library:

```bash
cc main.c libft.a
```

or

```bash
cc main.c -L. -lft
```

---

# Example

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str;

	str = ft_strjoin("Hello ", "World!");

	printf("%s\n", str);

	free(str);

	return (0);
}
```

Output:

```bash
Hello World!
```

---

# Technical Choices

Several implementation decisions were made during development:

- Defensive NULL checks were added to avoid crashes.
- Recursive implementation was used for `ft_putnbr_fd`.
- Memory allocations were protected to prevent leaks.
- Linked list utilities were implemented using reusable helper functions.
- Functions were designed to mimic original libc behavior as closely as possible.

---

# Testing

The library was tested using:

- Custom test cases
- Edge case testing
- Memory leak checks
- Protected malloc tests
- `libft-unit-test`
- `francinette`

---

# Resources

## Documentation

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- Linux manual pages:
  - https://man7.org/linux/man-pages/
- C reference:
  - https://cplusplus.com/reference/cstring/
  - https://en.cppreference.com/w/c

---

## Tutorials and References

- GeeksForGeeks articles on pointers and memory
- 42 intra subject documentation
- YouTube tutorials about pointers, linked lists, and memory allocation

---

# AI Usage

AI tools were used during development for:

- Debugging segmentation faults
- Understanding edge cases
- Verifying libc behavior
- Reviewing memory management issues
- Improving README formatting and documentation

AI assistance was used only as a learning and debugging aid. All implementations were manually written, tested, and understood before submission.

---

# Project Structure

```bash
.
├── Makefile
├── README.md
├── libft.h
├── libft.a
├── ft_*.c
├── ft_*.o
└── bonus/
```

---

# Norm Compliance

This project follows:

- 42 Norminette rules
- Proper memory management
- No forbidden functions
- Leak-free implementations

---

# Author

## kaeiu

42 School Student
