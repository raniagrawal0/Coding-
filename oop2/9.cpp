//  Use OOP’s concept based program to display the cheapest book available on a subject. 
#include<iostream>
#include <string>
using namespace std;
class book{
    private:
    string bookname;
    int price;
    public:
    int t;
    
    int cheapprice=0;
    void set_data();
    int calc();
    void display();
};
book stu[10];
void book:: set_data(){
    cout<<"\nBOOK:"<<cheapprice+1<<endl;
        cout<<"enter bookname:";
        cin>>stu[cheapprice].bookname;
        cout<<"enter book price:";
        cin>>stu[cheapprice].price;
        cheapprice++;
    }
     int book:: calc(){
        int t=stu[0].price;
        for(int i=0;i<cheapprice;i++){
        if(t>stu[i].price)
            t=stu[i].price;
        }
        for(int i=0;i<cheapprice;i++){
            if(t==stu[i].price)
            return i;
        }
        }

     void book::display(){
        int i=calc();
        cout<<"\ncheapest bookname:"<<stu[i].bookname<<endl;
        cout<<"cheapest price:"<<stu[i].price<<endl;
    }
int main(){
    book s;
    cout<<"enter no. of book:";
    int n;
    cin>>n;
    cout<<"enter details of "<<n<<" book:"<<endl;
    for(int i=1;i<=n;i++)
    s.set_data();
   s.display();
    
       
}
