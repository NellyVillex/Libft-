*This project has been created as part of 42 curriculum by dnelly-b*

## DESCRIPTION
This text outlines the requirements for a programming project, which involves recreating a set of functions from the standard C library (libc) with the same prototypes and behaviors as the originals. The only difference is that these functions will have names starting with the 'ft_' prefix. Here's a summary of the key points:

Recreate several standard libc functions with 'ft_' prefixes. Functions to be implemented include those for character manipulation (e.g., toupper, isdigit), string manipulation (e.g., strlen, strncmp), memory manipulation (e.g., memset, memcpy), and more. Ensure the implementations adhere to the behavior described in their respective man pages. Use malloc for implementing functions that require dynamic memory allocation (e.g., calloc, strdup). Create and declare a custom structure called t_list for linked lists with members content (data in the node) and next (pointer to the next node or NULL). Implement a Makefile rule for compiling and creating a library file (libft.a) containing these functions.

Functions to manipulate linked lists using the t_list structure. Add a make bonus rule to include the bonus functions in the libft.a library.

In summary, this project involves recreating standard libc functions with 'ft_' prefixes, ensuring their functionality matches the originals. Additionally, there is an optional bonus part that includes creating functions to manipulate linked lists. The goal is to create a custom library (libft.a) with these functions for later use.

## INSTRUCTIONS

1º - Clone the repository
```c
$ git clone git@github.com:NellyVillex/Libft-.git
```

2º - Use the functions
```c
To use the libft's functions, you will need to compile your code using this library.
```

## NORMINETTE

At 42 School, projects are generally expected to adhere to the Norm, the school's coding standard:
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function

## Part 1 - Libc Functions

Reimplemented standard C library functions:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi

## Part 2 - Additional Functions

- ft_calloc
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Part 3 - Linked Lists

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Usage

Include the header in your project:

```c
#include "libft.h"
```

Compile with:

```bash
cc main.c libft.a
```
## RESOURCES

- Libft Your very first own library - Document.
- Unix Man page - A Unix man page is a technical document that describes the usage, options, and behavior of commands, functions, and system components in Unix-based operating systems.
- https://publish.obsidian.md/henriquesilvadev/Libft/libft - The aim of this project is to help you create, in C, a library of common functions that you can reuse in your future projects.