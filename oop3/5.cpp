// Experiment 5:    Assume that a publishing company markets prints books and digital books (electronic 
// form – CD’). Create a class named Publication with data members named title, price, and author’s name. 
// From Publication class, derive two classes named Book and Ebook. The Book class adds a page count data 
// member named pcount while Ebook adds data member playing time name ptime. Each of these classes 
// must have member function getDatd() to read class specific data from keyboard and displayData() to 
// output the class specific data to the computer screen. Write a program to test these classes. 

#include<iostream>
using namespace std;
class publication{
    string title;
    int price;
    string author;
    public:
    void getdata(){
        cout<<"enter book title:";
        cin>>title;
        cout<<"enter price of book:";
        cin>>price;
        cout<<"enter author name:";
        cin>>author; 
    }
    void displaydata(){
        cout<<"book name:"<<title;
        cout<<"\nbook price:"<<price;
        cout<<"\naouthor name:"<<author<<endl;
    }

};
class book:public publication{
    int pcount;
    public:
    void getdata(){
        cout<<"enter page count:";
        cin>>pcount;
    }
    void displaydata(){
         cout<<"page count:"<<pcount<<endl;
    }

};
class ebook:public publication{
    int ptime;
    public:
    void getdata(){
        cout<<"enter playing time:";
        cin>>ptime;
    }
    void displaydata(){
        cout<<"playing time:"<<ptime;
    }
};

int main(){
    book b;
    ebook e;
    b.getdata();
    // b.displaydata();
    e.publication::getdata();
    e.getdata();
    e.displaydata();
}