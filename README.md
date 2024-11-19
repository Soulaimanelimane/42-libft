# Libft

**Libft** is a  custom C library that provides various useful functions to handle strings, memory management, and other standard operations typically found in C. This library is designed to help with common C programming tasks while also being a learning tool for better understanding how C libraries are structured and implemented.

## Table of Contents
1. [Introduction](#introduction)
2. [Functions Implemented](#functions-implemented)
3. [Installation](#installation)

## Introduction

Libft is a project from the [42 School](https://www.42.fr/) curriculum, aimed at creating a personal library in C by re-implementing some of the most commonly used standard library functions and adding some utility functions that may be useful in C programming.

The goal of the project is to improve understanding of memory management, pointer arithmetic, string manipulation, and other core concepts of the C language. It allows students to develop a library to use in future projects, making the coding process faster and more efficient.

## Functions Implemented

Below is a list of the functions implemented in this library:

## -------------------------------------------------- Part 1 ------------------------------------------------- :

### String Functions
- [`ft_strlen`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strlen.c)  - Returns the length of a string.
- [`ft_strdup`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strdup.c)  - Duplicates a string.
- [`ft_strlcpy`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strlcpy.c)- copies  characters from the string src to destanation.
- [`ft_strlcat`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strlcat.c)- appends string src to the end of destanation.
- [`ft_strchr`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strchr.c)  - Locates a character in a string.
- [`ft_strrchr`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strrchr.c)- Locates the last occurrence of a character in a string.
- [`ft_strncmp`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strncmp.c)- Compares up to n characters of two strings.
- [`ft_strnstr`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strnstr.c)- search in a string where not more than len characters are searched .

### Memory Functions
- [`ft_memset`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_memset.c) - Fills memory with a constant byte.
- [`ft_bzero` ](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_bzero.c)  - Sets memory to zero.
- [`ft_memcpy`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_memcpy.c) - Copies memory area.
- [`ft_memmove](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_memmove.c)- Moves memory area.
- [`ft_memcmp`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_memcmp.c) - Compares two memory blocks.
- [`ft_memchr`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_memchr.c) - locates the first occurrence of c in memory.
- [`ft_calloc`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_calloc.c) - Allocates memory for an array of specified elements and initializes it tozero.

### Other Utility Functions
- [`ft_isalpha`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_isalpha.c) - Checks if a character is alphabetic.
- [`ft_isdigit`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_isdigit.c) - Checks if a character is a digit.
- [`ft_isalnum`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_isalnum.c) - Checks if a character is alphanumeric.
- [`ft_isascii`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_isascii.c) - Checks if a character is ASCII.
- [`ft_isprint`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_isprint.c) - Checks if a character is printable.
- [`ft_toupper`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_toupper.c) - Converts a character to uppercase.
- [`ft_tolower`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_tolower.c) - Converts a character to lowercase.
- [`ft_atoi`]   (https://github.com/Soulaimanelimane/42-libft/blob/main/ft_atoi.c) - Converts a string to an integer.

## -------------------------------------------------- Part 2 ------------------------------------------------- :

### Additional String, Memory
- [`ft_itoa`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_itoa.c)      - Converts an integer to a string.
- [`ft_split`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_split.c)    - Splits a string into an array of substrings, using a delimiter.
- [`ft_strtrim`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strtrim.c)- Removes leading and trailing whitespaces (or other characters) from a string.
- [`ft_substr`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_substr.c)- Extracts a substring from a string, given a starting index and length.
- [`ft_strjoin`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strjoin.c)- Concatenates two strings into a new string.
- [`ft_strmapi`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_strmapi.c)- Applies a function to each character of a string, creating a new string with the results.
- [`ft_striteri`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_striteri.c) - Applies a function to each character of a string, modifying the string in place.
  
### File Descriptor Functions
- [`ft_putchar_fd`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_putchar_fd.c)- Outputs a single character to a file descriptor.
- [`ft_putstr_fd`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_putstr_fd.c)  - Outputs a string to a file descriptor.
- [`ft_putendl_fd`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_putendl_fd.c)- Outputs a string followed by a newline to a file descriptor.
- [`ft_putnbr_fd`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_putnbr_fd.c)  - Outputs an integer as a string to a file descriptor.

## -------------------------------------------------- Part 3 (bonus) ------------------------------------------------- :

### Linked List Functions
- [`ft_lstnew`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_lstnew.c)  - Creates a new linked list node.
- [`ft_lstsize`](https://github.com/Soulaimanelimane/42-libft/blob/main/ft_lstsize.c)  - Count linked list.

## -------------------------------------------------- end --------------------------------------------------------------

## Installation

# 1. Clone the repository to your local machine:
	git clone https://github.com/yourusername/libft.git

# 2. Navigate to the project directory:
	cd libft

# 3. Compile the library using make:
	make

# 4. Optionally, to clean up compiled objects and binaries:
	make clean

# 5. To remove all compiled objects and the library itself:
	make fclean

# 6.To recompile everything from scratch:
	make re
