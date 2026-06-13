# Student Grade Averager 

A C program that accepts grades for multiple students and calculates the class average. Built as a group project at NUST.

---

## How to Run

**Requirements:** GCC or any standard C compiler.

```bash
gcc grade_averager.c -o grade_averager
./grade_averager
```

**Sample interaction:**
Enter the number of students: 3

Enter grade for student 1: 85

Enter grade for student 2: 90

Enter grade for student 3: 78
Total Grades = 253.00

Average Grade = 84.33
---

## Concepts Applied

- `scanf` / `printf` for formatted I/O
- Input validation with early `return 1` on bad input
- `for` loop for iterating over students
- Running sum accumulation (`sum += grade`)
- `float` arithmetic for accurate average
- Standard library: `<stdio.h>`

---

## Project Context

Group project for FOCP course at NUST (BS Bioinformatics) — Semester 1. Practices core C fundamentals in a practical, real-world context.

---

## Files
grade_averager.c

README.md
