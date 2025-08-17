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
3️⃣ Geometry & Trigonometry

Area of Circle:

𝐴
=
𝜋
𝑟
2
A=πr
2

Pythagoras Theorem:

𝑐
2
=
𝑎
2
+
𝑏
2
c
2
=a
2
+b
2

Distance Formula:

𝑑
=
(
𝑥
2
−
𝑥
1
)
2
+
(
𝑦
2
−
𝑦
1
)
2
d=
(x2−x1)
2
+(y2−y1)
2
	​


Trigonometric Identities:

sin
⁡
2
𝜃
+
cos
⁡
2
𝜃
=
1
sin
2
θ+cos
2
θ=1
4️⃣ Probability & Statistics

Probability:

𝑃
(
𝐸
)
=
Favorable outcomes
Total outcomes
P(E)=
Total outcomes
Favorable outcomes
	​


Mean:

𝑥
ˉ
=
∑
𝑥
𝑛
x
ˉ
=
n
∑x
	​


Variance:

𝜎
2
=
∑
(
𝑥
−
𝑥
ˉ
)
2
𝑛
σ
2
=
n
∑(x−
x
ˉ
)
2
	​

5️⃣ Calculus

Derivative of 
𝑥
𝑛
x
n
:

𝑑
𝑑
𝑥
(
𝑥
𝑛
)
=
𝑛
⋅
𝑥
𝑛
−
1
dx
d
	​

(x
n
)=n⋅x
n−1

Integral of 
𝑥
𝑛
x
n
:

∫
𝑥
𝑛
𝑑
𝑥
=
𝑥
𝑛
+
1
𝑛
+
1
+
𝐶
∫x
n
dx=
n+1
x
n+1
	​

+C
6️⃣ Linear Algebra

Matrix Multiplication:

𝐶
[
𝑖
]
[
𝑗
]
=
∑
𝑘
=
1
𝑛
𝐴
[
𝑖
]
[
𝑘
]
⋅
𝐵
[
𝑘
]
[
𝑗
]
C[i][j]=
k=1
∑
n
	​

A[i][k]⋅B[k][j]

Determinant (2x2):

∣
𝐴
∣
=
𝑎
𝑑
−
𝑏
𝑐
∣A∣=ad−bc
7️⃣ Advanced (Coding-Specific Formulas)

Fibonacci (Closed Formula – Binet’s Formula):

𝐹
(
𝑛
)
=
𝜙
𝑛
−
(
1
−
𝜙
)
𝑛
5
,
𝜙
=
1
+
5
2
F(n)=
5
	​

ϕ
n
−(1−ϕ)
n
	​

,ϕ=
2
1+
5
	​

	​


📌 C++ Math Formula Library

// code library

#include <bits/stdc++.h>
using namespace std;

class MathLib {
public:

    // 1. Sum of first n natural numbers
    static long long sumN(long long n) {
        return (n * (n + 1)) / 2;
    }

    // 2. Sum of squares
    static long long sumSquares(long long n) {
        return (n * (n + 1) * (2 * n + 1)) / 6;
    }

    // 3. Sum of cubes
    static long long sumCubes(long long n) {
        long long s = (n * (n + 1)) / 2;
        return s * s;
    }

    // 4. n-th term of AP (a + (n-1)d)
    static long long nthAP(long long a, long long d, long long n) {
        return a + (n - 1) * d;
    }

    // 5. n-th term of GP (a * r^(n-1))
    static long long nthGP(long long a, long long r, long long n) {
        return a * pow(r, n - 1);
    }

    // 6. Factorial
    static long long fact(long long n) {
        long long f = 1;
        for (long long i = 1; i <= n; i++) f *= i;
        return f;
    }

    // 7. nCr (Combinations)
    static long long nCr(long long n, long long r) {
        return fact(n) / (fact(r) * fact(n - r));
    }

    // 8. nPr (Permutations)
    static long long nPr(long long n, long long r) {
        return fact(n) / fact(n - r);
    }

    // 9. GCD
    static long long gcd(long long a, long long b) {
        return __gcd(a, b);
    }

    // 10. LCM
    static long long lcm(long long a, long long b) {
        return (a * b) / gcd(a, b);
    }

    // 11. Fast Power (a^b % mod)
    static long long fastPower(long long a, long long b, long long mod) {
        long long res = 1;
        a %= mod;
        while (b > 0) {
            if (b & 1) res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }

    // 12. Digits count in base 10
    static int countDigits(long long n) {
        return (int)log10(n) + 1;
    }

    // 13. Distance between 2 points
    static double distance(double x1, double y1, double x2, double y2) {
        return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    }

    // 14. Fibonacci (nth term using DP)
    static long long fibonacci(int n) {
        if (n <= 1) return n;
        long long a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    // 15. Triangular number (row i start element)
    static long long rowStart(long long i) {
        return (i * (i - 1)) / 2 + 1;
    }

    // 16. Row i, Column j element
    static long long rowColValue(long long i, long long j) {
        return (i * (i - 1)) / 2 + j;
    }
};

// ================== Example Usage ==================
int main() {
    cout << "Sum of first 10 natural numbers = " << MathLib::sumN(10) << endl;
    cout << "Sum of squares (n=5) = " << MathLib::sumSquares(5) << endl;
    cout << "Factorial of 6 = " << MathLib::fact(6) << endl;
    cout << "10C3 = " << MathLib::nCr(10, 3) << endl;
    cout << "GCD(36, 60) = " << MathLib::gcd(36, 60) << endl;
    cout << "LCM(12, 15) = " << MathLib::lcm(12, 15) << endl;
    cout << "Fast Power 2^10 % 1000 = " << MathLib::fastPower(2, 10, 1000) << endl;
    cout << "Digits in 12345 = " << MathLib::countDigits(12345) << endl;
    cout << "Distance between (0,0) and (3,4) = " << MathLib::distance(0,0,3,4) << endl;
    cout << "Fibonacci(10) = " << MathLib::fibonacci(10) << endl;
    cout << "Row 4 starts at = " << MathLib::rowStart(4) << endl;
    cout << "Row 4, Col 3 value = " << MathLib::rowColValue(4,3) << endl;
}



// ================== Example Usage ==================
// ================== Example Usage ==================
int main() {
    cout << "Sum of first 10 natural numbers = " << MathLib::sumN(10) << endl;
    cout << "Sum of squares (n=5) = " << MathLib::sumSquares(5) << endl;
    cout << "Factorial of 6 = " << MathLib::fact(6) << endl;
    cout << "10C3 = " << MathLib::nCr(10, 3) << endl;
    cout << "GCD(36, 60) = " << MathLib::gcd(36, 60) << endl;
    cout << "LCM(12, 15) = " << MathLib::lcm(12, 15) << endl;
    cout << "Fast Power 2^10 % 1000 = " << MathLib::fastPower(2, 10, 1000) << endl;
    cout << "Digits in 12345 = " << MathLib::countDigits(12345) << endl;
    cout << "Distance between (0,0) and (3,4) = " << MathLib::distance(0,0,3,4) << endl;
    cout << "Fibonacci(10) = " << MathLib::fibonacci(10) << endl;
    cout << "Row 4 starts at = " << MathLib::rowStart(4) << endl;
    cout << "Row 4, Col 3 value = " << MathLib::rowColValue(4,3) << endl;
}



🚀 How to Use

Copy formulas into your coding notes

Implement with C++, Python, or Java

Useful in DSA, Competitive Programming, and Projects

👨‍💻 Author

Developed by Hero Ritik

📷 Instagram: @hacker_attitude42
