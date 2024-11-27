 
// Experiment 9: (Dynamic memory allocation with new, delete, and destructor) 
//  A Program to allocate contiguous memory for an array using the new operator and the object of the array 
// is destroyed by the delete operator. 

#include<iostream>
using namespace std;
class dynamic{
    int *arr;
    int size=0;
    public:
    
    dynamic(int size)
    {
        this->size=size;
        arr=  new int[size];
    }
    ~dynamic()
    {
        cout<<"destructor is called.";
    }
    void getdata()
    {
        cout<<"enter values:"<<endl;;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        
    }
    void display()
    {
        cout<<"entered values: "<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    
};
int main()
{
    dynamic d1(5);
    d1.getdata();
    d1.display();
    delete &d1;
    d1.display();

}