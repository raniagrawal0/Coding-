#include<iostream>
using namespace std;
class letters{
    private:
    int weight;
    float rate;
    public:
    void input(){
        cout<<"enter weight of letters in gms"<<endl;
        cin>>weight;
    }
    void calc(){
        if(weight <=50)
        rate=.05*weight;
        else if(weight>50&&weight<=150)
        rate=.05*50+.04*(weight-50);
        else if(weight>150&&weight<=400)
        rate=.05*50+.04*100+.025*(weight-150);
        else
        rate=.025*weight;
    }
    void display(){
        cout<<"total postage rate:"<<rate;
    }

};
int main(){
    letters l;
    int weight;
    l.input();
    l.calc();
    l.display();
}