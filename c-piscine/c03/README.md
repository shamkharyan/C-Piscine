# C03 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_strcmp

- **Directory:** `ex00/`
- **Files:** `ft_strcmp.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strcmp` function. Compares the two null-terminated strings `s1` and `s2` lexicographically. Returns an integer less than, equal to, or greater than zero if `s1` is found to be less than, matching, or greater than `s2`.

### Prototype
```c
int ft_strcmp(char *s1, char *s2);
```

---

## Exercise 01: ft_strncmp

- **Directory:** `ex01/`
- **Files:** `ft_strncmp.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strncmp` function. Compares up to `n` characters of the two strings `s1` and `s2`. Returns an integer less than, equal to, or greater than zero depending on the comparison result.

### Prototype
```c
int ft_strncmp(char *s1, char *s2, unsigned int n);
```

---

## Exercise 02: ft_strcat

- **Directory:** `ex02/`
- **Files:** `ft_strcat.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strcat` function. Appends the `src` string to the `dest` string, overwriting the terminating null byte (`'\0'`) at the end of dest, and then adds a terminating null byte. Returns `dest`.

### Prototype
```c
char *ft_strcat(char *dest, char *src);
```

---

## Exercise 03: ft_strncat

- **Directory:** `ex03/`
- **Files:** `ft_strncat.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strncat` function. Appends at most `nb` bytes from `src` to `dest`. The resulting string is always null-terminated. Returns `dest`.

### Prototype
```c
char *ft_strncat(char *dest, char *src, unsigned int nb);
```

---

## Exercise 04: ft_strstr

- **Directory:** `ex04/`
- **Files:** `ft_strstr.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strstr` function. Finds the first occurrence of the substring `to_find` in the string `str`. The terminating null bytes (`'\0'`) are not compared. Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found. If `to_find` is an empty string, `str` is returned.

### Prototype
```c
char *ft_strstr(char *str, char *to_find);
```

---

## Exercise 05: ft_strlcat

- **Directory:** `ex05/`
- **Files:** `ft_strlcat.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strlcat` function. Appends the null-terminated string `src` to the end of `dest`. It will append at most `size - strlen(dest) - 1` bytes, NUL-terminating the result (as long as size is greater than 0 and there is at least one byte free in `dest`).
Returns the total length of the string it tried to create: initial length of `dest` plus length of `src`.

### Prototype
```c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
```
