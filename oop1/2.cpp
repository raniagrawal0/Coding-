#include<iostream>
using namespace std;
class store{
    private:
    int n,m,p,t1,t2,t3;
    float amount;
    public:
    void input(){
        cout<<"enter number of miners"<<endl;
        cin>>n;
        cout<<"enter number of toasters"<<endl;
        cin>>m;
        cout<<"enter number of fans"<<endl;
        cin>>p;
    }
    void calc(){
        t1=n*1500;
        t1=t1-.05*t1;
        t2=m*200;
        t2=t2-.1*t2;
        t3=p*450;
        t3=t3-.15*t3;
        amount=(t1+t2+t3)+.1*(t1+t2+t3);
    }
    void display(){
        cout<<"miners price:"<<t1<<endl;
        cout<<"toasters price:"<<t2<<endl;
        cout<<"fans price:"<<t3<<endl;
        cout<<"total amount:"<<amount;
    }

};
int main(){
    store l;
    l.input();
    l.calc();
    l.display();
}
