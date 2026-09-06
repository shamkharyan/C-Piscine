# C04 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_strlen

- **Directory:** `ex00/`
- **Files:** `ft_strlen.c`
- **Allowed external functions:** `None`

### Subject
Write a function that counts and returns the number of characters in a null-terminated string.

### Prototype
```c
int ft_strlen(char *str);
```

---

## Exercise 01: ft_putstr

- **Directory:** `ex01/`
- **Files:** `ft_putstr.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs a null-terminated string to standard output.

### Prototype
```c
void ft_putstr(char *str);
```

---

## Exercise 02: ft_putnbr

- **Directory:** `ex02/`
- **Files:** `ft_putnbr.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays the integer passed as a parameter to standard output. The function must handle all possible values of a standard 32-bit signed `int` (from `-2147483648` to `2147483647`).

### Prototype
```c
void ft_putnbr(int nb);
```

---

## Exercise 03: ft_atoi

- **Directory:** `ex03/`
- **Files:** `ft_atoi.c`
- **Allowed external functions:** `None`

### Subject
Write a function that converts the initial portion of a string to an integer representation.
- The string can start with an arbitrary amount of white space (as determined by `isspace(3)`).
- The string can be followed by an arbitrary number of `+` and `-` signs. An odd number of `-` signs results in a negative number, while an even number (or none) results in a positive number.
- The function reads digits until a non-digit character or the end of the string is encountered.
- Returns the converted integer value.

### Prototype
```c
int ft_atoi(char *str);
```

---

## Exercise 04: ft_putnbr_base

- **Directory:** `ex04/`
- **Files:** `ft_putnbr_base.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays an integer in a given number system base to standard output.
- The base is provided as a string of valid characters (e.g., `"0123456789ABCDEF"` for hexadecimal).
- Negative numbers must be preceded by a `-` sign.
- If the base is invalid, the function must display nothing and return immediately.
Base validation rules:
- A base is invalid if its size is less than `2`.
- A base is invalid if it contains duplicate characters.
- A base is invalid if it contains `+`, `-`, or whitespace characters.

### Prototype
```c
void ft_putnbr_base(int nbr, char *base);
```

---

## Exercise 05: ft_atoi_base

- **Directory:** `ex05/`
- **Files:** `ft_atoi_base.c`
- **Allowed external functions:** `None`

### Subject
Write a function that converts the initial portion of a string representing a number in a specific base into an integer.
- The function must parse leading whitespaces and signs (`+` / `-`) similarly to `ft_atoi`.
- The base parameter follows the exact same validation rules as in `ft_putnbr_base`.
- If the base is invalid or contains invalid characters, the function returns `0`.

### Prototype
```c
int ft_atoi_base(char *str, char *base);
```
