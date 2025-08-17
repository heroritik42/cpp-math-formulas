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


Fast Exponentiation (Binary Exponentiation):

long long power(long long a, long long b, long long mod) {
    long long res = 1;
    while(b > 0) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

🚀 How to Use

Copy formulas into your coding notes

Implement with C++, Python, or Java

Useful in DSA, Competitive Programming, and Projects

👨‍💻 Author

Developed by Hero Ritik
📷 Instagram: @hacker_attitude42
