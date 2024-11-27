// Experiment 7: Write C++ program to calculate area of a cuboid. Convert the cuboid into a cube using a 
// friend class. 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class cube;
class cuboid{
    float l;
    float b;
    float h;
    // float area;
    public:
    float area;
    void getdata(){
        cout<<"cuboid details:"<<endl;
        cout<<"enter length: ";
        cin>>l;
        cout<<"enter breadth: ";
        cin>>b;
        cout<<"enter height: ";
        cin>>h;
    }
    int calcarea(){
         area=2*(l*b+b*h+h*l);
        return area;
    }
    void display(){
        calcarea();
        cout<<"area of cuboid:"<<area<<endl;
    }
     friend class cube;
};
class cube{
     float s;
    public:
    //  cuboid c2;
    //  void calcs()
    //  {
        
    //     cout<<sqrt(c2.calcarea()/6)<<endl;
    //  }
    void calcs(cuboid &c2){     //& is optional
       
        s=sqrt(c2.area/6);

    }
    void display(){
        
        cout<<"\ncube length:"<<s<<endl;
    }
};
int main(){
    cuboid obj;
    cube obj1;
    obj.getdata();
    obj.display();
    // obj1.calcs();
     obj1.calcs(obj);
    obj1.display();

    // cout<<sqrt(obj.area/6);
}