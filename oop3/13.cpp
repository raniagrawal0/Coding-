// Experiment 13: 
// Create  class name is Integer in this class implement the operator over loading using friend 
// function Binary(+) operator. 

#include<iostream>
using namespace std;
class Integer{
    int a;
    public:
    Integer (int a)
    {
        this->a=a;
    }
    Integer()
    {
        a=0;
    }
    // Integer operator+(Integer d2)
    // {
    //     Integer d3;
    //     d3.a=a+d2.a;
    //     return d3;
    // }
    friend Integer operator+(Integer d1,Integer d2)
    {
        // Integer d3;
        // d3.a=d1.a+d2.a;
        // return d3;
        return d1.a+d2.a;       //shortcut
    }
    void display()
    {
        cout<<"sum= "<<a;
    }
};

int main()
{
    Integer d1(10),d2(20),d3;
    d3=d1+d2;
    
    d3.display();
}