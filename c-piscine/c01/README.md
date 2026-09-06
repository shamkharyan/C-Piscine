# C01 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_ft

- **Directory:** `ex00/`
- **Files:** `ft_ft.c`
- **Allowed external functions:** `None`

### Subject
Write a function that accepts a pointer to an `int` as a parameter and sets the value stored at that memory address to `42`.

### Prototype
```c
void ft_ft(int *nbr);
```

---

## Exercise 01: ft_ultimate_ft

- **Directory:** `ex01/`
- **Files:** `ft_ultimate_ft.c`
- **Allowed external functions:** `None`

### Subject
Write a function that accepts a pointer to a pointer to a pointer (9 levels of indirection in total) to an int and sets the target integer value to `42`.

### Prototype
```c
void ft_ultimate_ft(int *********nbr);
```

---

## Exercise 02: ft_swap

- **Directory:** `ex02/`
- **Files:** `ft_swap.c`
- **Allowed external functions:** `None`

### Subject
Write a function that swaps the integer values stored at two memory addresses passed as parameters.

### Prototype
```c
void ft_swap(int *a, int *b);
```

---

## Exercise 03: ft_div_mod

- **Directory:** `ex03/`
- **Files:** `ft_div_mod.c`
- **Allowed external functions:** `None`

### Subject
Write a function that divides two integers `a` and `b`. The integer quotient must be stored at the memory address pointed to by `div`, and the remainder (modulus) must be stored at the memory address pointed to by `mod`.

### Prototype
```c
void ft_div_mod(int a, int b, int *div, int *mod);
```

---

## Exercise 04: ft_ultimate_div_mod

- **Directory:** `ex04/`
- **Files:** `ft_ultimate_div_mod.c`
- **Allowed external functions:** `None`

### Subject
Write a function that divides the integer pointed to by `a` by the integer pointed to by `b`. Overwrite the value at address `a` with the division quotient, and overwrite the value at address `b` with the remainder.

### Prototype
```c
void ft_ultimate_div_mod(int *a, int *b);
```

---

## Exercise 05: ft_putstr

- **Directory:** `ex05/`
- **Files:** `ft_putstr.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs a null-terminated string of characters to standard output.

### Prototype
```c
void ft_putstr(char *str);
```

---

## Exercise 06: ft_strlen

- **Directory:** `ex06/`
- **Files:** `ft_strlen.c`
- **Allowed external functions:** `None`

### Subject
Write a function that counts and returns the total number of characters in a null-terminated string (excluding the null terminator `'\0'`).

### Prototype
```c
int ft_strlen(char *str);
```

---

## Exercise 07: ft_rev_int_tab

- **Directory:** `ex07/`
- **Files:** `ft_rev_int_tab.c`
- **Allowed external functions:** `None`

### Subject
Write a function that reverses the order of elements in an array of integers in place. Parameters are a pointer to the first element and the array size.

### Prototype
```c
void ft_rev_int_tab(int *tab, int size);
```

---

## Exercise 08: ft_sort_int_tab

- **Directory:** `ex08/`
- **Files:** `ft_sort_int_tab.c`
- **Allowed external functions:** `None`

### Subject
Write a function that sorts an array of integers in ascending order in place. Parameters are a pointer to the first element and the total element count.

### Prototype
```c
void ft_sort_int_tab(int *tab, int size);
```
