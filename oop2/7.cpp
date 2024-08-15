// WAP that uses an overloaded constructor to dynamically allocate memory to an array and thus find 
// the largest of its elements. 
#include<iostream>
using namespace std;

class Array {
    private:
        int *arr;
        int size;
    public:
        // Default constructor
        Array() {
            size = 0;
            arr = nullptr;
        }
        // Overloaded constructor to dynamically allocate memory to an array
        Array(int s) {
            size = s;
            arr = new int[size];
        }
        void inputArray() {
            for (int i = 0; i < size; i++) {
                cout << "Enter element " << i + 1 << ": ";
                cin >> arr[i];
            }
        }
        void findLargest() {
            int max = arr[0];
            for (int i = 1; i < size; i++) {
           if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << "Largest element in the array is: " << max << endl;
        }
        ~Array() {
            delete[] arr;
        }
};
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    Array myArray(n);
    myArray.inputArray();
    myArray.findLargest();
    return 0;
}