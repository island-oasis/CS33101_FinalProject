#include <iostream>
#include <algorithm>
using namespace std;

void callByValue(int a, int b) // parameter passing
{
    a += b;
    cout << "In the Call By Value method: a = " << a << " b = " << b << endl;
}

int fibonacci(int n) // recursion
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int x = 5, y = 7;

    // call by value
    callByValue(x, y);
    cout << "In the Main method: x = " << x << " y = " << y << endl;

    // using recursion to find the n^th term in the fibonacci sequence
    int n = 9;
    cout << "\nThe " << n << " term in the fibonacci sequence is: " << fibonacci(n) << endl;

    // manual garbage collection in C++
    int* arr = new int[5];
    cout << "\nEnter five integers to be insereted into array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    size_t len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);

    cout << "The elements of the array are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ", ";
    }

    // manual garbage collection
    delete[] arr;

    return 0;
}