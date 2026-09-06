# C02 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_strcpy

- **Directory:** `ex00/`
- **Files:** `ft_strcpy.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strcpy` function. Copies the null-terminated string pointed to by `src` to the buffer pointed to by `dest`. Returns `dest`.

### Prototype
```c
char *ft_strcpy(char *dest, char *src);
```

---

## Exercise 01: ft_strncpy

- **Directory:** `ex01/`
- **Files:** `ft_strncpy.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the strncpy function. Copies up to `n` characters from `src` to `dest`. If `src` is less than `n` characters long, pads the remainder of dest with null characters (`'\0'`). Returns `dest`.

### Prototype
```c
char *ft_strncpy(char *dest, char *src, unsigned int n);
```

---

## Exercise 02: ft_str_is_alpha

- **Directory:** `ex02/`
- **Files:** `ft_str_is_alpha.c`
- **Allowed external functions:** `None`

### Subject
Write a function that checks if a string contains only alphabetical characters (uppercase or lowercase). Returns `1` if the string contains only letters, or `1` if the string is empty. Returns `0` if any non-alphabetical character is found.

### Prototype
```c
int ft_str_is_alpha(char *str);
```

---

## Exercise 03: ft_str_is_numeric

- **Directory:** `ex03/`
- **Files:** `ft_str_is_numeric.c`
- **Allowed external functions:** `None`

### Subject
Write a function that checks if a string contains only numeric digits (`'0'` to `'9'`). Returns `1` if the string contains only digits or is empty. Returns `0` if any non-numeric character is present.

### Prototype
```c
int ft_str_is_numeric(char *str);
```

---

## Exercise 04: ft_str_is_lowercase

- **Directory:** `ex04/`
- **Files:** `ft_str_is_lowercase.c`
- **Allowed external functions:** `None`

### Subject
Write a function that checks if a string contains only lowercase alphabetical characters (`'a'` to `'z'`). Returns `1` if all characters are lowercase or if the string is empty. Returns `0` otherwise.

### Prototype
```c
int ft_str_is_lowercase(char *str);
```

---

## Exercise 05: ft_str_is_uppercase

- **Directory:** `ex05/`
- **Files:** `ft_str_is_uppercase.c`
- **Allowed external functions:** `None`

### Subject
Write a function that checks if a string contains only uppercase alphabetical characters (`'A'` to `'Z'`). Returns `1` if all characters are uppercase or if the string is empty. Returns `0` otherwise.

### Prototype
```c
int ft_str_is_uppercase(char *str);
```

---

## Exercise 06: ft_str_is_printable

- **Directory:** `ex06/`
- **Files:** `ft_str_is_printable.c`
- **Allowed external functions:** `None`

### Subject
Write a function that checks if a string contains only printable ASCII characters (characters with ASCII decimal values from `32` to `126`). Returns `1` if all characters are printable or if the string is empty. Returns `0` otherwise.

### Prototype
```c
int ft_str_is_printable(char *str);
```

---

## Exercise 07: ft_strupcase

- **Directory:** `ex07/`
- **Files:** `ft_strupcase.c`
- **Allowed external functions:** `None`

### Subject
Write a function that transforms all lowercase letters in a string to uppercase in place. Returns the pointer to the modified string.

### Prototype
```c
char *ft_strupcase(char *str);
```

---

## Exercise 08: ft_strlowcase

- **Directory:** `ex08/`
- **Files:** `ft_strlowcase.c`
- **Allowed external functions:** `None`

### Subject
Write a function that transforms all uppercase letters in a string to lowercase in place. Returns the pointer to the modified string.

---

## Exercise 09: ft_strcapitalize

- **Directory:** `ex09/`
- **Files:** `ft_strcapitalize.c`
- **Allowed external functions:** `None`

### Subject
Write a function that capitalizes the first letter of each word in a string and converts all other letters to lowercase. A word is defined as a sequence of alphanumeric characters (letters and numbers). Returns the modified string.

### Prototype
```c
char *ft_strcapitalize(char *str);
```

---

## Exercise 10: ft_strlcpy

- **Directory:** `ex10/`
- **Files:** `ft_strlcpy.c`
- **Allowed external functions:** `None`

### Subject
Reproduce the behavior of the `strlcpy` function. Copies up to `size - 1` characters from the null-terminated string `src` to `dest`. Returns the total length of the string it tried to create (length of `src`).

### Prototype
```c
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
```

---

## Exercise 11: ft_putstr_non_printable

- **Directory:** `ex11/`
- **Files:** `ft_putstr_non_printable.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs a string to stdout. Any non-printable ASCII character must be displayed as a backslash followed by its lowercase hexadecimal value (e.g. `\0a` for newline).

### Prototype
```c
void ft_putstr_non_printable(char *str);
```

---

## Exercise 12: ft_print_memory

- **Directory:** `ex12/`
- **Files:** `ft_print_memory.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays a formatted memory dump of a given size starting at memory address `addr`.
- Display the memory address of the first byte in lowercase hexadecimal followed by a colon `:`
- Display the content in hexadecimal pairs separated by spaces
- Display the content in printable ASCII characters (replace non-printable characters with a dot .)
- If size is 0, the function should display nothing.

### Example
Calling ft_print_memory(str, 80) where str points to a string buffer produces the following output:
```
$> ./ft_print_memory | cat -te
0000001001000000: 4865 6c6c 6f20 576f 726c 6421 2054 6869 Hello World! Thi$
0000001001000010: 7320 6973 2061 206d 656d 6f72 7920 6475 s is a memory du$
0000001001000020: 6d70 2074 6573 7420 7374 7269 6e67 2e0a mp test string..$
0000001001000030: 4320 5069 7363 696e 6520 4330 3220 6578 C Piscine C02 ex$
0000001001000040: 3132 2066 756e 6374 696f 6e2e           12 function.$
$>
```

### Prototype
```c
void *ft_print_memory(void *addr, unsigned int size);
```
