# 📘 Math Formulas for Coding (Beginner → Advanced)

This repository contains important **Mathematics Formulas** that are useful in **Programming, Competitive Coding, Data Structures, Algorithms, AI/ML, and Game Development**.

---

## 📌 Index
1. **Basic Arithmetic**
2. **Algebra & Number Theory**
3. **Geometry & Trigonometry**
4. **Probability & Statistics**
5. **Calculus**
6. **Linear Algebra**
7. **Advanced (Coding-Specific Formulas)**

---

## 1️⃣ Basic Arithmetic
- Sum of first `n` natural numbers:  
  \[
  S = \frac{n(n+1)}{2}
  \]

- Sum of squares:  
  \[
  S = \frac{n(n+1)(2n+1)}{6}
  \]

- Sum of cubes:  
  \[
  S = \left(\frac{n(n+1)}{2}\right)^2
  \]

---

## 2️⃣ Algebra & Number Theory
- Factorial:  
  \[
  n! = 1 \times 2 \times 3 \times ... \times n
  \]

- Permutation:  
  \[
  P(n, r) = \frac{n!}{(n-r)!}
  \]

- Combination:  
  \[
  C(n, r) = \frac{n!}{r!(n-r)!}
  \]

- GCD (Euclidean Algorithm):  
  ```cpp
  int gcd(int a, int b) {
      return (b == 0) ? a : gcd(b, a % b);
  }
