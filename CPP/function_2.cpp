#include<iostream>
using namespace std;

void display(int a)
{ 
    cout<<"HELLO WORLD!!"<<endl;
    cout<<a<<endl;

    cout<<"--------------"<<endl;
}


int main()
{ 
    int x=11;
    cout<<"I am at the start of the main"<<endl;
    display(x);
    cout<<"I am at the end of the main"<<endl;
    return 0;
}