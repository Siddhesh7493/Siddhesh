#include<iostream>
using namespace std;
class Addition
{
   private:
      int a,b,ans;
   public:
      void set_data()
      {
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
      }
      void calculate()
      {
        ans=a+b;
      }
      void display()
      {
        cout<<"First Number:"<<a<<endl;
        cout<<"Second Number:"<<b<<endl;
        cout<<"Addiion:"<<ans<<endl;
      }
};

int main()
{ 
    Addition ob1;
    ob1.set_data();
    ob1.calculate();
    ob1.display();

    Addition ob2;
    ob2.set_data();
    ob2.calculate();
    ob2.display();
    return 0;
}