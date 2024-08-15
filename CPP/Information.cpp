#include<iostream>
using namespace std;
class Information
{ 
    private:
      string name,edu,vil,busi;
    public:
      void accept() 
      {
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Education:"<<endl;
        cin>>edu;
        cout<<"Native place:"<<endl;
        cin>>vil;
        cout<<"Business:"<<endl;
        cin>>busi;
      }
      void display()
      {
        cout<<"Name:"<<name<<endl;
        cout<<"Education:"<<edu<<endl;
        cout<<"Native place:"<<vil<<endl;
        cout<<"Business:"<<busi<<endl;
      }    
};
int main()
{
  int i; 
  for(i=0;i<6;i++)
  {
    Information obi;
    obi.accept();
    obi.display();
  }
}