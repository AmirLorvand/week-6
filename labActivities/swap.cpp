#include <iostream>
using namespace std;

int size_s;

int* swap(int numbers[], int x, int y) {

    int temp = numbers[x];
    numbers[x] = numbers[y];
    numbers[y] = temp;

    return numbers;
}

void printArray(int numbers[], int size_s) {

    cout << "[";
    for(int i = 0; i < size_s - 1; i++) {
        cout << numbers[i] << ", ";
    }
    cout << numbers[size_s - 1] << "]" << endl;

} 

int main() {
    
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    size_s = size;

    int* numbers = new int[size];
    
    cout << "Enter elements of array: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> *(numbers + i);
    }
    cout << "---------------" << endl;

    printArray(numbers, size);
    cout << "---------------" << endl;
    
    int* newNumber = swap(numbers, 0, 1);
    printArray(newNumber, size);

    delete[] numbers;
    delete[] newNumber;
    return 0;
}