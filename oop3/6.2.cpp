
// Experiment 6: Write a C++ Program to implement the arithmetic operations multiplication on complex 
// numbers using the concept of this pointer, inline functions and scope resolution operator. 

#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    
    complex(){
        real=0;
        img=0;
    }
    void getdata(){
        cout<<"enter real value:";
        cin>> real;
        cout<<"enter img value:";
        cin>>img;
    }
    
    void display(){
        cout<<real<<" + i("<<img<<")"<<endl;
    }
    
    friend int calreal(complex,complex);
    friend int calimg(complex,complex);
   
};

int  calreal(complex c1,complex c2){
        return (c1.real*c2.real) - (c1.img*c2.img);
        
    }
int calimg(complex c1,complex c2){
        
        return (c1.real*c2.img)+(c1.img*c2.real);
    }
int main()
{
    complex c1,c2;
    c1.getdata();
    c2.getdata();
    cout<<"COMPLEX 1:";
    c1.display();
    cout<<"COMPLEX 2:";
    c2.display();
    int realres=calreal(c1,c2);
    int imgres=calimg(c1,c2);
    cout<<realres<<" + i("<<imgres<<")"<<endl;
    // c1.display1();
}