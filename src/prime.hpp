#pragma once

#include <vector>
#include <string>

class Factorizer {
  public:
    std::vector<int> prime(int n);

    bool isPrime(int n);

    bool isComposite(int n);

    std::string reduce(int a, int b);

};
