#include "Factorizer.hpp"
#include <iostream>

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

std::string Factorizer::reduce(int& a, int& b) {
    std::vector<int> primes_a = prime(a); // [2, 2, 3, 3]
    std::vector<int> primes_b = prime(b); // [2, 2, 3]

    int i = 0, j = 0;

    while (i < primes_a.size() && j < primes_b.size()) {
        if (primes_a[i] == primes_b[j]) {
            a /= primes_a[i];
            b /= primes_b[j];
            i += 1;
            j += 1;
        }
        else if (primes_a[i] > primes_b[j]) {
            j += 1;
        }
        else {
            i += 1;
        }
    }

    if (b == 1) {
        return std::to_string(a);
    }
    return std::to_string(a) + "/" + std::to_string(b);
}