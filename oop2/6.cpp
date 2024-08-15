//Experiment 6:  WAP that displays the name of topper in a class. 
#include<iostream>
#include <string>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    int marks;
    public:
    int t;
    
    int studentcount=0;
    void set_data();
    int calc();
    void display();
};
student stu[10];
void student:: set_data(){
    cout<<"\nSTUDENT:"<<studentcount+1<<endl;
        cout<<"enter name:";
        cin>>stu[studentcount].name;
        cout<<"enter roll no.:";
        cin>>stu[studentcount].rollno;
        cout<<"enter marks:";
        cin>>stu[studentcount].marks;
        studentcount++;
    }
     int student:: calc(){
        int t=0;
        for(int i=0;i<studentcount;i++){
        if(t<stu[i].marks)
            t=stu[i].marks;
        }
        for(int i=0;i<studentcount;i++){
            if(t==stu[i].marks)
            return i;
        }
        }

     void student::display(){
        int i=calc();
        cout<<"topper name:"<<stu[i].name<<endl;
        cout<<"topper marks:"<<stu[i].marks<<endl;
    }
int main(){
    student s;
    cout<<"enter no. of students:";
    int n;
    cin>>n;
    cout<<"enter details of "<<n<<" students:"<<endl;
    for(int i=1;i<=n;i++)
    s.set_data();
   s.display();
    
       
}
