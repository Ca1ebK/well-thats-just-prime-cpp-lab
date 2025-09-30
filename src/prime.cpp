#include "prime.hpp"

std::vector<int> Factorizer::prime(int n) {
    std::vector<int> primes = {};

    if (n < 2) {
        return primes;
    }

    while (n > 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                primes.push_back(i);
                n /= i;
                break;
            }
        }
    }


    return primes;
}

bool Factorizer::isPrime(int n) {
    if (n == 0 || n == 1) return true;
    return (n == prime(n).at(0));
}

bool Factorizer::isComposite(int n) {
    return !isPrime(n);
}

std::string Factorizer::reduce(int a, int b) {
    std::vector<int> primes_a = prime(a);
    std::vector<int> primes_b = prime(b);

    for (int i = primes_a.size() - 1; i >= 0; i--) {
        for (int j = primes_b.size() - 1; j >= 0; j--) {
            if (primes_a[i] == primes_b[j]) {
                // primes_a.
            }
        }
    }
}