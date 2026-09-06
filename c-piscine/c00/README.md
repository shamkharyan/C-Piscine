# C00 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_putchar

- **Directory:** `ex00/`
- **Files:** `ft_putchar.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs the character given as a parameter to the standard output.

### Prototype
```c
void ft_putchar(char c);
```

---

## Exercise 01: ft_print_alphabet

- **Directory:** `ex01/`
- **Files:** `ft_print_alphabet.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs the lowercase alphabet in ascending order (from `'a'` to `'z'`) on a single line.

### Prototype
```c
void ft_print_alphabet(void);
```

---

## Exercise 02: ft_print_reverse_alphabet

- **Directory:** `ex02/`
- **Files:** `ft_print_reverse_alphabet.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs the lowercase alphabet in descending order (from `'z'` to `'a'`) on a single line.

### Prototype
```c
void ft_print_reverse_alphabet(void);
```

---

## Exercise 03: ft_print_numbers

- **Directory:** `ex03/`
- **Files:** `ft_print_numbers.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays all single decimal digits in ascending order (from `'0'` to `'9'`) on a single line.

### Prototype
```c
void ft_print_numbers(void);
```

---

## Exercise 04: ft_is_negative

- **Directory:** `ex04/`
- **Files:** `ft_is_negative.c`
- **Allowed external functions:** `write`

### Subject
Write a function that outputs 'N' if the given integer is strictly negative, or 'P' if the integer is positive or zero.

### Prototype
```c
void ft_is_negative(int n);
```

---

## Exercise 05: ft_print_comb

- **Directory:** `ex05/`
- **Files:** `ft_print_comb.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays all different combinations of three different digits in ascending order: `012, 013, 014, ..., 789`.

- Combinations with non-ascending digits (e.g. `987`) or repeating digits (e.g. `777`) must be omitted.
- The last element must not be followed by a comma or space.

### Prototype
```c
void ft_print_comb(void);
```

---

## Exercise 06: ft_print_comb2

- **Directory:** `ex06/`
- **Files:** `ft_print_comb2.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays all different combinations of two two-digit numbers (between `00` and `99`), separated by a space, in ascending order: `00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99`.

### Prototype
```c
void ft_print_comb2(void);
```

---

## Exercise 07: ft_putnbr

- **Directory:** `ex07/`
- **Files:** `ft_putnbr.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays the number entered as a parameter. The function must be able to display all possible values in an `int` variable (from `-2147483648` to `2147483647`).

### Prototype
```c
void ft_putnbr(int nb);
```

---

## Exercise 08: ft_print_combn

- **Directory:** `ex08/`
- **Files:** `ft_print_combn.c`
- **Allowed external functions:** `write`

### Subject
Write a function that displays all different combinations of `n` digits in ascending order. `n` will be between `0` and `10` (`0 < n < 10`).

- Combinations with non-ascending digits (e.g. `987`) or repeating digits (e.g. `777`) must be omitted.
- The last element must not be followed by a comma or space.
- Example, when `n = 2`: `01, 02, 03, ..., 09, 12, ..., 79, 89`

### Prototype
```c
void ft_print_combn(int n);
```
