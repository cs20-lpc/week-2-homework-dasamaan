#include <iostream>
using namespace std;

// TODO: Write a function template named arraySum
// Parameters:
//   - an array of type T
//   - an integer size
// Return:
//   - the sum of the elements
template <typename T>
T arraySum(T arr[], int size) {
    // Initialize sum to the default value of type T
    T sum = T();

    // Add each element to sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Return the total
    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    double arr2[] = {1.1, 2.2, 3.3};

    cout << "Sum of int array: " << arraySum(arr1, 4) << endl;
    cout << "Sum of double array: " << arraySum(arr2, 3) << endl;

    return 0;
}
