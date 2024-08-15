#include<iostream>
using namespace std;
class Area
{ 
    private:
      float r,area,circumference;
      const float pi=3.14;
    public:
      void set_data()
      {
        cout<<"Enter radius of circle:";
        cin>>r;
      }
      void calculate()
      {
        area=pi*r*r;
        circumference=2*pi*r;
      }
      void display()
      {
        cout<<"Area of circle:"<<area<<endl;
        cout<<"Circumference of circle:"<<circumference<<endl;
      }
};
int main()
{ 
    Area ob1;
    ob1.set_data();
    ob1.calculate();
    ob1.display();
    Area ob2;
    ob2.set_data();
    ob2.calculate();
    ob2.display();
    return 0;
}
