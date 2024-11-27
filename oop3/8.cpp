// Experiment 8: (friend function with inline function, friend function with another class) 
// Implement Two Class name is class_2,class_1 define one function name is exchange this function work in 
// both class properties. friend function can be called by reference inthis case copies of the object are not 
// made.  Instead a pointer to the address of the object is passed  


#include<iostream>
using namespace std;
class class_2;
class class_1{
    int a=5;
    public:
    void display(){
        cout<<"value of a: "<<a<<endl;
    }
    friend void exchange(class_1 &obj1,class_2 &obj2);
};
class class_2{
    int b=50;
    public:
    void display(){
        cout<<"value of b: "<<b<<endl;
    }
    friend void exchange(class_1 &obj1,class_2 &obj2);
};
void exchange(class_1 &obj1,class_2 &obj2){
    int t=obj1.a;
    obj1.a=obj2.b;
    obj2.b=t;

}

int main(){
    class_1 obj1;
    class_2 obj2;
    obj1.display();
    obj2.display();
    exchange(obj1,obj2);
    
    obj1.display();
    obj2.display();
}