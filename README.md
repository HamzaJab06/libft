*This activity has been created as part of the 42 curriculum by hjabarin.*

# Description

Libft is a custom C library containing commonly used functions from the C standard library, along with additional functions for working with strings, memory, and linked lists.

The goal of this project is to recreate these functions from scratch and build a reusable library that can be used in future 42 projects.

The library includes functions for:

- Character checking and conversion
- String manipulation
- Memory manipulation
- Number conversion
- Memory allocation
- File descriptor output
- Linked list manipulation

# Instructions

## Compilation

To compile the library, run:

    make

This creates the `libft.a` static library.

To remove the object files, run:

    make clean

To remove the library and object files, run:

    make fclean

To recompile everything, run:

    make re

## Usage

Include the library header in your C program:

    #include "libft.h"

Then compile your program with the library:

    cc main.c -L. -lft

# Library Functions

## Character Functions

- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character belongs to the ASCII character set.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a lowercase character to uppercase.
- `ft_tolower` - Converts an uppercase character to lowercase.

## String Functions

- `ft_strlen` - Calculates the length of a string.
- `ft_strchr` - Finds the first occurrence of a character in a string.
- `ft_strrchr` - Finds the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings.
- `ft_strnstr` - Searches for a string inside another string.
- `ft_strdup` - Duplicates a string.
- `ft_strlcpy` - Copies a string with a size limit.
- `ft_strlcat` - Concatenates strings with a size limit.
- `ft_substr` - Creates a substring.
- `ft_strjoin` - Joins two strings.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string using a delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string.
- `ft_striteri` - Applies a function to each character while passing its index.

## Memory Functions

- `ft_memset` - Fills memory with a specified byte.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memmove` - Copies memory while handling overlapping areas.
- `ft_memchr` - Searches memory for a character.
- `ft_memcmp` - Compares two memory areas.
- `ft_calloc` - Allocates and initializes memory to zero.

## Conversion Functions

- `ft_atoi` - Converts a string to an integer.

## File Descriptor Functions

- `ft_putchar_fd` - Writes a character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline.
- `ft_putnbr_fd` - Writes an integer to a file descriptor.

## Linked List Functions

The library also contains functions for creating and manipulating linked lists using the `t_list` structure.

- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds an element to the beginning of a list.
- `ft_lstsize` - Counts the number of elements in a list.
- `ft_lstlast` - Returns the last element of a list.
- `ft_lstadd_back` - Adds an element to the end of a list.
- `ft_lstdelone` - Deletes one list element.
- `ft_lstclear` - Deletes and frees an entire list.
- `ft_lstiter` - Applies a function to every element of a list.
- `ft_lstmap` - Creates a new list by applying a function to each element.

# Resources

## References

- Linux `man` pages
- 42 Libft subject
- w3schools functions explaination

The documentation and `man` pages were used to understand the expected behavior of the original functions.

## AI Usage

AI was used as a learning and debugging tool during the project.

It was used for:

- Explaining how C functions work.
- Understanding edge cases and expected behavior.
- Helping identify and fix compilation errors.
- Explaining Makefile and compilation issues.
- Reviewing code logic when needed.

The implementation of the library was written and tested as part of the project.
