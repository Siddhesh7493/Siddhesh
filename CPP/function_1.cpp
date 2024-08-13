#include<iostream>
using namespace std;

void display(int a,float b,char c)
{ 
    cout<<"HELLO WORLD!!"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}


int main()
{ 
    cout<<"I am at the start of the main"<<endl;
    display(11,2.5,'a');
    cout<<"I am at the end of the main"<<endl;
    return 0;
}