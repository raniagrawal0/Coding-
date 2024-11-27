// Experiment 11 : 
// Create  class name is Integer in this class implement the overloading >> and<< opertor using friend 
// function. 


#include<iostream>
using namespace std;
class Integer{
    int i;
    public:
    Integer()
    {
        
        i=0;
    }
    friend void operator>>(istream &mycin,Integer &i1)
    {
        mycin>>i1.i;
    }
    friend void operator<<(ostream &mycout,Integer &i1)
    {
        mycout<<i1.i;
    }
    
};

int main()
{
    Integer i1;
    cout<<"enter i1 value:";
    cin>>i1;
    cout<<"value of i1: ";
    cout<<i1;
}