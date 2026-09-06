# C05 — C Piscine

## General Instructions

- Must be written in C and adhere strictly to the Norm (`norminette -R CheckForbiddenSourceHeader`).
- Functions must not stop unexpectedly (segmentation fault, bus error, double free, etc.).
- Only explicitly allowed functions may be used.
- Submit only the files specified in each exercise; no extra files allowed in directories.
- Must compile with `cc -Wall -Wextra -Werror`.

---

## Exercise 00: ft_iterative_factorial

- **Directory:** `ex00/`
- **Files:** `ft_iterative_factorial.c`
- **Allowed external functions:** `None`

### Subject
Write an iterative function that computes and returns the factorial of a given integer `nb`.
- If `nb` is negative, the function must return `0`.
- Overflows do not need to be handled.

### Prototype
```c
int ft_iterative_factorial(int nb);
```

---

## Exercise 01: ft_recursive_factorial

- **Directory:** `ex01/`
- **Files:** `ft_recursive_factorial.c`
- **Allowed external functions:** `None`

### Subject
Write a recursive function that computes and returns the factorial of a given integer `nb`.
- If `nb` is negative, the function must return `0`.
- Overflows do not need to be handled.

### Prototype
```c
int ft_recursive_factorial(int nb);
```

---

## Exercise 02: ft_iterative_power

- **Directory:** `ex02/`
- **Files:** `ft_iterative_power.c`
- **Allowed external functions:** `None`

### Subject
Write an iterative function that calculates and returns the value of `nb` raised to the power of `power`.
- A negative power must return `0`.
- Overflows do not need to be handled, but $0^0$ must return `1`.

### Prototype
```c
int ft_iterative_power(int nb, int power);
```

---

## Exercise 03: ft_recursive_power

- **Directory:** `ex03/`
- **Files:** `ft_recursive_power.c`
- **Allowed external functions:** `None`

### Subject
Write an recursive function that calculates and returns the value of `nb` raised to the power of `power`.
- A negative power must return `0`.
- Overflows do not need to be handled, but $0^0$ must return `1`.

### Prototype
```c
int ft_recursive_power(int nb, int power);
```

---

## Exercise 04: ft_fibonacci

- **Directory:** `ex04/`
- **Files:** `ft_fibonacci.c`
- **Allowed external functions:** `None`

### Subject
Write a recursive function that returns the value at a given index in the Fibonacci sequence.
- Index `0` returns `0`.
- Index `1` returns `1`.
- Every subsequent index is the sum of the two preceding numbers ($F_n = F_{n-1} + F_{n-2}$).
- If `index` is negative, the function must return `-1`.

### Prototype
```c
int ft_fibonacci(int index);
```

---

## Exercise 05: ft_sqrt

- **Directory:** `ex05/`
- **Files:** `ft_sqrt.c`
- **Allowed external functions:** `None`

### Subject
Write a function that returns the square root of a given integer `nb` if it is a whole integer.
- If the square root is not an integer or if `nb` is negative, the function must return `0`.

### Prototype
```c
int ft_sqrt(int nb);
```

---

## Exercise 06: ft_is_prime

- **Directory:** `ex06/`
- **Files:** `ft_is_prime.c`
- **Allowed external functions:** `None`

### Subject
Write a function that returns 1 if the given integer nb is a prime number, and 0 otherwise.

### Prototype
```c
int ft_is_prime(int nb);
```

---

## Exercise 07: ft_find_next_prime

- **Directory:** `ex07/`
- **Files:** `ft_find_next_prime.c`
- **Allowed external functions:** `None`

### Subject
Write a function that returns the smallest prime number that is greater than or equal to `nb`.

### Prototype
```c
int ft_find_next_prime(int nb);
```

---

## Exercise 08: The Ten Queens

- **Directory:** `ex08/`
- **Files:** `ft_ten_queens_puzzle.c`
- **Allowed external functions:** `None`

### Subject
Write a function that finds and displays all possible valid placements of 10 queens on a $10 \times 10$ chessboard such that no two queens threaten each other.
- Each solution must be printed on a separate line as a sequence of 10 digits (0 to 9), representing the row position of the queen in each column (from column 0 to column 9).
- Solutions must be followed by a newline.
- The function must return the total number of valid solutions found.

### Example
```
$>./a.out | cat -e
0257948136$
0258693147$
...
4605713829$
4609582731$
...
9742051863$
```

### Prototype
```c
int ft_ten_queens_puzzle(void);
```
