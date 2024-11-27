// Experiment 2.       The monthly telephone bill is to be computed as follows: 
//           Minimum Rs. 200 for upto 100 calls 
//           Plus Rs. 0.60 per call for next 50 calls 
//           Plus Rs. 0.50 per call for next 50 calls 
//           Plus Rs. 0.40 per call for any call beyond 200 calls. 
// The input contains name of the customer and number of calls made and the desired output is the name 
// and telephone bill to be paid by the customer. 
// Create a class to represent an employee. It should include the following: 
//          Data Members: 
//                    Name  
//                    Number of calls 
//                    Bill amount 
//         Member Functions: 
//                        To input data 
//                        To compute bill 
//                        To output the desired information 
// Using this class, write a program to accomplish the intended task.

#include<iostream>
using namespace std;
class employee{
    string name;
    float callcount;
    float billamount=0.0;
    public:
    void get(){
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your callcount:"<<endl;
        cin>>callcount;
    }
    void compute(){
        if(callcount<=100){
            billamount=200;
        }
        else if(callcount<=150){
            billamount=200+0.6*(callcount-100);
        }
        else if(callcount<=200){
            billamount=200+0.6*(50)+0.5*(callcount-150);
        }
        else{
            billamount=200+0.6*(50)+0.5*(50)+0.4*(callcount-200);
        }

    }
    void print(){
        compute();
        cout<<"person details:"<<endl;
        cout<<"\nname: "<<name;
        cout<<"\n callcount: "<<callcount<<endl;
        cout<<"billamount paid: "<<billamount;
    }
};
int main(){
    employee emp;
    emp.get();
    emp.print();
}