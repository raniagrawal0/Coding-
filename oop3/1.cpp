// //Experiment 1: 
// An employer plane to pay a bonus to employees. A bonus of 10% is to be paid to employees with earning 
// at least Rs. 2000/- of the earning to others. The input contains name and earning of an employee and the 
// desired output is name and bonus to be paid to the employee. 
// Create a class to represent an employee. It should incluse the following: 
//         Data Members: 
//                    Name 
//                     Earning 
//                     Bonus 
//        Member Functions: 
//                  To input data 
//                  To compute bonus 
//                  To output the desired information 
// Using this class, write a program to accomplish the intended task. 

#include<iostream>
using namespace std;
class employee{
    string name;
    float earning;
    float bonus=0.0;
    public:
    void get(){
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your earning:"<<endl;
        cin>>earning;
    }
    void calc(){
        if(earning>=2000){
            bonus=earning/10;
        }

    }
    void print(){
        calc();
        cout<<"person details:"<<endl;
        cout<<"\nname: "<<name;
        cout<<"\nearning: "<<earning<<endl;
        if(bonus==0){
            cout<<"no bonus paid."<<endl;
        }else
        cout<<"bonus paid: "<<bonus;
    }
};
int main(){
    employee emp;
    emp.get();
    emp.print();
}