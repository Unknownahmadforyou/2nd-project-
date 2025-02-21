#include <iostream>
using namespace std;  // Added missing namespace

int findGCD(int n1, int n2) {
    // Use Euclidean algorithm instead of iterating through all numbers
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Handle negative numbers by converting to positive
    num1 = abs(num1);
    num2 = abs(num2);
    
    int result = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;  // Added missing return statement
}