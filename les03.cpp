/*Finding factorial*/

#include <iostream>

int main() {
    int n, factorial = 1;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << "The factorial of " << n << " is " << factorial << std::endl;
    return 0;
}
