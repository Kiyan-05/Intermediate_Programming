#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // base case
    } else {
        return n * factorial(n - 1); // recursive case
    }
}

int main() {
    // Calling the factorial function
    cout << factorial(5) << endl; // Output: 120
    return 0;
}
