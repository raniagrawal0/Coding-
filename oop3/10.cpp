// Experiment 10: (Operator Overloading) 
// Design a class named Vector to model a one-dimensional array with integer elements. 
// Overload the followimg operators to perform the intended task: 
// (i)     Operator ‘<<’ to output a Vector object. 
// (ii)    Operator ‘>>’ to input a Vector object in the form [10, 20, 30, . . .]. 
// (iii)   Operator ‘+’ to add two Vector objects. 
// (iv)   Operator ‘-‘ to subtract a given Vector object from another Vector object. 
#include <iostream>

using namespace std;

class Vector {
private:
    int* arr;
    int size;

public:
    Vector(int s) : size(s) 
    {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    ~Vector() {
        delete[] arr;
    }

    void setValueAt(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    int getValueAt(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return 0;
    }

    Vector operator-(const Vector& v) const {
        // if (size != v.size) {
        //     cerr << "Error: Vectors must be of the same size for subtraction." << endl;
        //     return Vector(0);
        // }
        Vector result(size);
        for (int i = 0; i < size; ++i) {
            result.arr[i] = arr[i] - v.arr[i];
        }
        return result;
    }
    Vector operator+(const Vector& v) const {
        // if (size != v.size) {
        //     cerr << "Error: Vectors must be of the same size for addition." << endl;
        //     return Vector(0);
        // }
        Vector result(size);
        for (int i = 0; i < size; ++i) {
            result.arr[i] = arr[i] + v.arr[i];
        }
        return result;
    }

    friend ostream& operator<<(ostream& os, const Vector& vec);
};

ostream& operator<<(ostream& os, const Vector& vec) {
    os << "[ ";
    for (int i = 0; i < vec.size; ++i) {
        os << vec.arr[i] << " ";
    }
    os << "]";
    return os;
}

int main() {
    int size;

    cout << "Enter the number of elements in the vectors: ";
    cin >> size;

    Vector vector1(size);
    Vector vector2(size);

    cout << "Enter values for the first vector:" << endl;
    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Element " << i << ": ";
        cin >> value;
        vector1.setValueAt(i, value);
    }

    cout << "Enter values for the second vector:" << endl;
    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Element " << i << ": ";
        cin >> value;
        vector2.setValueAt(i, value);
    }

    Vector result = vector1 - vector2;
    cout << "Result of vector subtraction: " << result << endl;
    Vector result1 = vector1 + vector2;

    
    cout << "Result of vector addition: " << result1 << endl;

    return 0;
}
