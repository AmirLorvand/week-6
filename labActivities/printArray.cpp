#include <iostream>
using namespace std;

void printArray(int numbers[], int size) {

    cout << "[";
    for(int i = 0; i < size - 1; i++) {
        cout << numbers[i] << ", ";
    }
    cout << numbers[size - 1] << "]";

}

int main() {

    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> *(numbers + i);
    }

    printArray(numbers, size);
    

    delete[] numbers;
    return 0;
}