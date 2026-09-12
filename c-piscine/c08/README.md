# C08 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft.h

- **Directory:** `ex00/`
- **Files:** `ft.h`
- **Allowed external functions:** `None`

### Subject
Create a header file `ft.h` that contains standard double-inclusion guards and the prototypes for the following functions:
```c
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
```

---

## Exercise 01: ft_boolean.h

- **Directory:** `ex01/`
- **Files:** `ft_boolean.h`
- **Allowed external functions:** `None`

### Subject
Create a header file `ft_boolean.h` that defines the necessary macros, types, and constants to allow the following code to compile and execute properly:

```c
#include "ft_boolean.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
```

- Program must output `I have an even number of arguments.` or `I have an odd number of arguments.` followed by a newline.

---

## Exercise 02: ft_abs.h

- **Directory:** `ex02/`
- **Files:** `ft_abs.h`
- **Allowed external functions:** `None`

### Subject
Create a macro `ABS(Value)` that computes the absolute value of its parameter.

---

## Exercise 03: ft_point.h

- **Directory:** `ex03/`
- **Files:** `ft_point.h`
- **Allowed external functions:** `None`

### Subject
Create a header file `ft_point.h` that defines a structure named `t_point` representing 2D coordinates:
- `x`: integer coordinate
- `y`: integer coordinate

The header must allow the following test code to compile:

```c
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
```

---

## Exercise 04: ft_strs_to_tab

- **Directory:** `ex04/`
- **Files:** `ft_strs_to_tab.c`
- **Allowed external functions:** `malloc`, `free`

### Subject
Write a function that takes an array of strings and its size, creates an array of `t_stock_str` structures for each string, and appends an element with `str = 0` at the end to mark the termination. The header file `ft_stock_str.h` is provided.
- `size`: length of the string
- `str`: pointer to the original string
- `copy`: dynamically allocated duplicate of the string
Returns `NULL` if allocation fails.

### Prototype
```c
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
```

---

## Exercise 05: ft_show_tab

- **Directory:** `ex05/`
- **Files:** `ft_show_tab.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays the contents of an array of `t_stock_str` structures created by `ft_strs_to_tab`. The header file `ft_stock_str.h` is provided.
- For each element, display `str`, then `size`, then `copy`, each followed by a newline.
- Stops when reaching the element where `str` is `NULL`.

### Prototype
```c
void ft_show_tab(struct s_stock_str *par);
```
