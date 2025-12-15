# Lab Work 7: Mathematical Series Computation in C

This project is a laboratory work for the "Computer Technologies and Programming" course. It features two C programs that compute the sum of a mathematical series using different loop structures and termination conditions.

## Series Formula

Both programs calculate the sum of the alternating series defined by the term `a_n`:

`a_n = (-1)^n * (1 - (n³ + 1) / (n³ + 5))`

## Programs Included

### 1. Task 1 — Partial Sum of a Series (`task1.c`)

This program calculates the **partial sum** of the series by summing its **first 10 terms** (from n=0 to n=9).

The calculation is performed using a **`for` loop** with a fixed number of iterations.

### 2. Task 2 — Series Sum with Precision (`task2.c`)

This program calculates the sum of the series until the absolute value of a term `a_n` is less than a predefined precision `epsilon` (`ε = 0.00001`).

This is achieved using a **`do-while` loop**, which continues as long as `|a_n| ≥ ε`.

## How to Compile and Run

Both programs can be compiled using GCC or an equivalent C compiler. The math library must be linked.

### Compile Task 1
```bash
gcc task1.c -o task1 -lm
./task1
```

### Compile Task 2
```bash
gcc task2.c -o task2 -lm
./task2
```

> [!NOTE]  
> The `-lm` flag is required for linking the math library in both tasks.

## Example Usage

Example run of **Task 1**:
```text
--- Завдання 1. Варіант 22 ---
Сума 10 членів ряду = -0.0652758
```

Example run of **Task 2**:
```text
--- Завдання 2. Варіант 22 ---
Обчислення суми ряду з точністю до 0.00010.
Обчислена сума з точністю = -0.0652758
```

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2).
