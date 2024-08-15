#include<iostream>
using namespace std;
class student{
    private:
    int admno;
    char name[20];
    float markseng;
    float marksmaths;
    float markssci;
    float total;
    float compute(){
        total=markseng+markssci+marksmaths;
        return total;
    }
    public:
    inline void readdata(int admnum,float eng,float maths,float sci=50) {  //default argument
        markseng=eng;
        marksmaths=maths;
        markssci=sci;
        admno=admnum;
        // name[]=names;
        compute();
    }
    void showdata() const{   //const function
        // total=56;
        cout<<"NAME:"<<endl<<"ADM NO.:"<<admno<<endl<<"ENGLISH MARKS:"<<markseng<<endl<<"MATHS MARKS:"<<marksmaths<<endl<<"SCIENCE MARKS:"<<markssci<<endl<<"TOTAL MARKS:"<<total<<endl;
    }
    static void data(){
        cout<<"students data:"<<endl;
    }
};
int main(){
    student::data();  //scope resolution
    student s;
    s.readdata(131,90,70);
    s.showdata();
}
