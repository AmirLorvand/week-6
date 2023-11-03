#include <iostream>
using namespace std;

int cube(int number) {
    int cubeOfNumber = (number * number * number);
    return cubeOfNumber;
}

int main() {

    int number;
    cout << "Enter a number to find its cube: ";
    cin >> number;
    int result = cube(number);
    cout << "The cube of " << number << " is " << result;

    return 0;
}