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
