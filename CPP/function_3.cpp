#include<iostream>
using namespace std;

void display(int &a)
{ 
    cout<<"HELLO WORLD!!"<<endl;
    cout<<a<<endl;

    cout<<"--------------"<<endl;
}


int main()
{ 
    int a=11;
    cout<<"I am at the start of the main:"<<a<<endl;
    display(a);
    a=100;
    cout<<"I am at the end of the main:"<<a<<endl;
    return 0;
}