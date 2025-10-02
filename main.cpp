#include <iostream>

#include "src/Factorizer.hpp"

int main() {

  Factorizer factorizer;

  // int n{};
  // std::cout << "Enter the number (greater than 0) that you would find the prime factorization for: ";
  // std::cin >> n;
  // std::vector<int> primes = factorizer.prime(n);
  // std::cout << "The prime factorization of " << n << " is: ";
  // for (int i = 0; i < primes.size(); i++) {
  //   std::cout << primes[i] << " ";
  // }
  // std::cout << std::endl;
  // std::cout << n << " is ";
  // if (factorizer.isPrime(n) && !factorizer.isComposite(n)) {
  //   std::cout << "prime!";
  // }
  // else {
  //   std::cout << "not prime!";
  // }
  // std::cout << std::endl;

  int a;
  int b;
  std::cout << "Enter the numerator of a fraction: ";
  std::cin >> a;
  std::cout << "Enter the denominator of a fraction: ";
  std::cin >> b;

  std::cout << std::to_string(a) << "/" << std::to_string(b)
  << " = " << factorizer.reduce(a, b);

}
