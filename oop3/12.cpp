// Experiment 12: 
// Create  class name is Integer in this class implement the operator over loading using Compare to String. 

#include<iostream>
#include<string.h>
using namespace std;
class Integer{
     char a[10];
    public:
    Integer (char a[10])
    {
        strcpy(this->a,a);
    }
    friend int operator==(Integer d1,Integer d2)
    {
        if(strcmp(d1.a,d2.a)==0)
        return 1;
        else
         return 0;
    }
    friend int operator>=(Integer d1,Integer d2)
    {
        if(strcmp(d1.a,d2.a)>0)
        return 1;
        else
         return 0;
    }
    friend int operator<=(Integer d1,Integer d2)
    {
        if(strcmp(d1.a,d2.a)<0)
        return 1;
        else
         return 0;
    }
    friend void compare(Integer d1,Integer d2);
};
void compare(Integer d1,Integer d2){
    if(d1==d2)
    {cout<<d1.a<<" is equal to "<<d2.a<<endl;}
    else if(d1>=d2)
    {cout<<d1.a<<" is greater than "<<d2.a<<endl;}
    else
    {cout<<d1.a<<" is smaller than "<<d2.a<<endl;}
}


int main(){
    Integer d1("rani"),d2("ayushi"),d3("ayushi");
    compare(d1,d2);
    compare(d3,d2);
    compare(d3,d1);
}