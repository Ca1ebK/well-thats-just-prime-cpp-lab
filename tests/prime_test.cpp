#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/Factorizer.hpp"

#include <vector>

TEST_CASE( "#prime" ) {

    Factorizer factorizer;

    // Main test cases
    REQUIRE( factorizer.prime(0) == std::vector<int>{});
    REQUIRE( factorizer.prime(1) == std::vector<int>{});
    REQUIRE( factorizer.prime(2) == std::vector<int>{2});
    REQUIRE( factorizer.prime(3) == std::vector<int>{3});
    REQUIRE( factorizer.prime(4) == std::vector<int>{2, 2});
    REQUIRE( factorizer.prime(5) == std::vector<int>{5});
    REQUIRE( factorizer.prime(6) == std::vector<int>{2, 3});
    REQUIRE( factorizer.prime(55) == std::vector<int>{5, 11});
    REQUIRE( factorizer.prime(23) == std::vector<int>{23});
    REQUIRE( factorizer.prime(100) == std::vector<int>{2, 2, 5, 5});

    // Extra Credit (Is it Prime)
    REQUIRE( factorizer.isPrime(0) == true);
    REQUIRE( factorizer.isPrime(1) == true);
    REQUIRE( factorizer.isPrime(2) == true);
    REQUIRE( factorizer.isPrime(3) == true);
    REQUIRE( factorizer.isPrime(4) == false);
    REQUIRE( factorizer.isPrime(21) == false);
    REQUIRE( factorizer.isPrime(100) == false);

    // Extra Credit (Is it Composite)
    REQUIRE( factorizer.isComposite(0) == false);
    REQUIRE( factorizer.isComposite(1) == false);
    REQUIRE( factorizer.isComposite(2) == false);
    REQUIRE( factorizer.isComposite(3) == false);
    REQUIRE( factorizer.isComposite(4) == true);
    REQUIRE( factorizer.isComposite(21) == true);
    REQUIRE( factorizer.isComposite(100) == true);

    // Extra Credit (Simplifying Fractions)
    REQUIRE(factorizer.reduce(0, 12) == "0");
    REQUIRE(factorizer.reduce(12, 0) == "undefined");
    REQUIRE(factorizer.reduce(12, 12) == "1");
    REQUIRE(factorizer.reduce(36, 12) == "3");
    REQUIRE(factorizer.reduce(12, 14) == "6/7");
    REQUIRE(factorizer.reduce(12, 37) == "12/37");
    REQUIRE(factorizer.reduce(1, 1) == "1");
    REQUIRE(factorizer.reduce(1, 37) == "1/37");
    REQUIRE(factorizer.reduce(37, 1) == "37");
    REQUIRE(factorizer.reduce(1000000, 500000) == "2");
    REQUIRE(factorizer.reduce(18, 9) == "2");
    REQUIRE(factorizer.reduce(18, 6) == "3");
    REQUIRE(factorizer.reduce(18, 12) == "3/2");

}
