#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of powers of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}