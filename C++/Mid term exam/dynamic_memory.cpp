#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* dynamicArray = new int[size];  // Dynamic array creation

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> dynamicArray[i];
    }

    cout << "The elements of the dynamic array are:\n";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << "\n";

    delete[] dynamicArray;  // Deallocate the dynamically allocated array

    return 0;
}
