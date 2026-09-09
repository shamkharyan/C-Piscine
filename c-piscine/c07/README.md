# C07 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_strdup

- **Directory:** `ex00/`
- **Files:** `ft_strdup.c`
- **Allowed external functions:** `malloc`

### Subject
Reproduce the behavior of `strdup`. Allocates dynamic memory for a copy of the string `src`, copies its contents, and returns a pointer to it. Returns `NULL` if memory allocation fails.

### Prototype
```c
char *ft_strdup(char *src);
```

---

## Exercise 01: ft_range

- **Directory:** `ex01/`
- **Files:** `ft_range.c`
- **Allowed external functions:** `malloc`

### Subject
Write a function that allocates and returns an array of integers containing all values between `min` (inclusive) and `max` (exclusive).
- If `min >= max`, the function must return `NULL`.

### Prototype
```c
int *ft_range(int min, int max);
```

---

## Exercise 02: ft_ultimate_range

- **Directory:** `ex02/`
- **Files:** `ft_ultimate_range.c`
- **Allowed external functions:** `malloc`

### Subject
Write a function that allocates an array of integers containing all values between `min` (inclusive) and `max` (exclusive).
- Assigns the address of the allocated array to `*range`.
- Returns the total length of the array.
- If `min >= max`, `*range` must be set to `NULL` and the function returns `0`.
- If allocation fails, `*range` must be set to `NULL` and the function returns `-1`.

### Prototype
```c
int ft_ultimate_range(int **range, int min, int max);
```

---

## Exercise 03: ft_strjoin

- **Directory:** `ex03/`
- **Files:** `ft_strjoin.c`
- **Allowed external functions:** `malloc`

### Subject
Write a function that concatenates `size` strings from the `strs` array, inserting the delimiter string `sep` between each element.
- Returns a pointer to the dynamically allocated string.
- If `size` is `0`, returns an empty, dynamically allocated string.

### Prototype
```c
char *ft_strjoin(int size, char **strs, char *sep);
```

---

## Exercise 04: ft_convert_base

- **Directory:** `ex04/`
- **Files:** `ft_convert_base.c`, `ft_convert_base2.c`  
- **Allowed external functions:** `malloc`, `free`

### Subject
Write a function that converts an integer string nbr from `base_from` representation to `base_to` representation.
- Handles leading whitespaces, `+`, and `-` sign prefixes.
- Invalid bases (empty, size < 2, containing duplicate characters, or containing `+`, `-`, whitespaces) must cause the function to return `NULL`.
- Memory for the resulting string must be dynamically allocated.

### Prototype
```c
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
```

---

## Exercise 05: ft_split

- **Directory:** `ex05/`
- **Files:** `ft_split.c`
- **Allowed external functions:** `malloc`

### Subject
Write a function that splits a string `str` into an array of null-terminated strings using any character present in `charset` as a delimiter.
- Returns a `NULL`-terminated array of pointers to the extracted words.

### Prototype
```c
char **ft_split(char *str, char *charset);
```
