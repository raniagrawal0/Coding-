#include<iostream>
using namespace std;
class Data{
    private:
    int date,month,year;

    public:
    Data(){
        date=12;
        month=3;
        year=1993;
    }
    Data(int date,int month=10,int year=2000){
        this->date=date;
        this->month=month;
        this->year=year;
    }
    void print(){
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        
    }

};

int main(){
    Data d,d2;
    d.print();
   Data d1(10,10,2000); 
    d1.print();
    d2=d;
    d2.print();

}