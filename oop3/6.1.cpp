// Experiment 6: Write a program to find mean of two numbers belonging to two different classes using 
// friend function. 

#include<iostream>
using namespace std;
class B;
class A{
    float a;
    public:
    void getA(){
        cout<<"enter value of a:";
        cin>>a;
    }
    friend float mean(A,B);
};
class B{
    float b;
    public:
    void getB(){
        cout<<"enter value of b:";
        cin>>b;
    }
    friend float mean(A,B);
};
float mean(A aobj,B bobj){
    float meanval=(aobj.a+bobj.b)/2;
    return meanval;
    
}
int main(){
    A aobj;
    B bobj;
    aobj.getA();
    bobj.getB();
   
    cout<<"mean value:"<< mean(aobj,bobj);
}
