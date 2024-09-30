#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array(int arrSize) {
        size = arrSize;
        arr = new int[size];
        cout << "Enter " << size << " elements for the array: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    double Average() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return static_cast<double>(sum) / size;
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    Array array(n);
    double average = array.Average();
    cout << "The average of all elements in the array is: " << average << endl;

    return 0;
}

