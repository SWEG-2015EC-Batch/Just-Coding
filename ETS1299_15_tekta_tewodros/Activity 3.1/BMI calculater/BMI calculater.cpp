// This Program Calculates Body Mass Index(BMI)
#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    float weight,
                       height,
                       BMI;
    char gender;
    for(int i=1; i>0; i++)
    {
    cout<<"please enter your weight ";
    cin>>weight;
    cout<<"please enter your height ";
    cin>>height;
    cout<<"please enter gender(M/F) ";
    cin>>gender;
    BMI=weight/(height*height);
    cout<<"Body Mass Index(BMI) of user is ";
    cout<<BMI<<gender;

    if (BMI>30)
    {
            cout<<" obesity"<<endl;
        }
   else if (gender=='F' && BMI<18.5)
    {
      cout<<" under weight"<<endl;
  }
  else if (gender=='F'&&BMI>=18.5&&BMI<24)
  {
          cout<<" normal weight"<<endl;
  }
  else if (gender=='F'&&BMI>=24&&BMI<30)
  {
          cout<<" over weight"<<endl;
  }
  else if (gender=='M'&&BMI<20.5)
  {
          cout<<" under weight"<<endl;
  }
  else if (gender=='M'&&BMI>=20.5&&BMI<25)
  {
          cout<<" normal weight"<<endl;
  }
  else if (gender=='M'&&BMI>=25&&BMI<30)
  {
          cout<<" over weight"<<endl;
  }
  else
  {
          cout<<" obesity"<<endl;
                }
        }

        return 0;
}