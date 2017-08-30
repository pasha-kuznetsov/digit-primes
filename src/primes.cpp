#include <cmath>
#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

// to optimize future tests:
// * keep track of the prime numbers found so far
static std::vector<int> ordered_primes = {2};
static std::unordered_set<int> primes = {2};
// * keep track of max tested number
static int max_tested = 2;

// test if `n` is a prime number
// populate the above 
bool is_prime(int n) {

    if (primes.find(n) != primes.end()) return true;
    if (n <= max_tested) return false;
    max_tested = n;
    for (auto prime : ordered_primes) {
        auto sq = prime * prime;
        if (sq > n) break;
        if (sq == n) return false;
        if (n % prime == 0) return false;
    }
    ordered_primes.push_back(n);
    primes.insert(primes.end(), n);
    return true;
}

// calculates the sum of the decimal digits in a number
int sum_digits(int n) {
    int sum = 0;
    for (; n; n /= 10)
        sum += n % 10;
    return sum;
}

int main() {
    // Generate a range of numbers from 1 to 100000
    for (int n = 2; n < 100000; ++n) {
        
        // for each number add the digits of that number together
        int sum = sum_digits(n);

        // Print the sum of those digits if the sum is a prime number
        if (is_prime(sum))
            std::cout << sum << std::endl;
            // annotated output instead:
            // std::cout << n << ": " << sum << std::endl;
        }
    return 0;
}
