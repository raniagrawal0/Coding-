// Experiment 3.            Income tax for individuals is computed on slab rates as follows: 
// Income Tax Payable 
// Upto Rs. 1,00,000/- Nill 
// From Rs. 1,00,001/- to Rs. 1,50,000/- 10% of the excess over Rs. 1,00,000/- 
// From Rs. 1,51,001/- to Rs. 200,000/- 20% of the excess over Rs. 1,50,000/- 
// Above Rs. 2,00,000/- 30% of the excess over Rs. 2,00,000/- 
 
// The input contains name of the individual and income and the desired output is the name of the 
// individual and amount of tax to be paid by the individual. 
// Create a class to represent an employee. It include the following: 
//             Data Members: 
//                        Name 
//                        Income 
//                       Tax due 
//          Member Functions: 
//                     To input data 
//                     To compute tax 
//                     To output the desired information

#include<iostream>
using namespace std;
class employee{
    string name;
    float income;
    float taxdue=0.0;
    public:
    void get(){
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your income:"<<endl;
        cin>>income;
    }
    void compute(){
        if(income<=100000){
            taxdue=0;
        }
        else if(income<=150000){
            taxdue=(income-100000)/10;
        }
        else if(income<=200000){
            taxdue=2*(income-150000)/10;
        }
        else{
            taxdue=3*(income-200000)/10;
        }

    }
    void print(){
        compute();
        cout<<"person details:"<<endl;
        cout<<"\nname: "<<name;
        cout<<"\nincome: "<<income<<endl;
        cout<<"tax due: "<<taxdue;
    }
};
int main(){
    employee emp;
    emp.get();
    emp.print();
}