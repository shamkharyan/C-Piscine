# C06 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_print_program_name

- **Directory:** `ex00/`
- **Files:** `ft_print_program_name.c`
- **Allowed external functions:** `write`

### Subject
Write a program that outputs its own executable name followed by a newline.

---

## Exercise 01: ft_print_params

- **Directory:** `ex01/`
- **Files:** `ft_print_params.c`
- **Allowed external functions:** `write`

### Subject
Write a program that outputs all received command-line arguments in the order they were provided, each followed by a newline. The executable name (`argv[0]`) must not be printed.

---

## Exercise 02: ft_rev_params

- **Directory:** `ex02/`
- **Files:** `ft_rev_params.c`
- **Allowed external functions:** `write`

### Subject
Write a program that outputs all received command-line arguments in reverse order, each followed by a newline. The executable name (`argv[0]`) must not be printed.

---

## Exercise 03: ft_sort_params

- **Directory:** `ex03/`
- **Files:** `ft_sort_params.c`
- **Allowed external functions:** `write`

### Subject
Write a program that displays all command-line arguments sorted in ASCII order, each followed by a newline. The executable name (`argv[0]`) must be excluded from sorting and output.
