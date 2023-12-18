#include<iostream>
using namespace std;
int main()
{
    float gross salary,overtime bonus rate,pension,income tax,bonus payment,overtime payment,net salary;
    int worked hrs;
    float pension rate=0.07;
    cout<<"enter gross salary"<<gross salary<<endl;
    cout<<"enter worked hrs"<<worked hrs<<endl;
    cout<<"enter overtime bonus rate"<<overtime bonus rate<<endl;
    pension=gross salary*pension rate;
    overtime payment=(worked hrs-40)*overtime bonus rate;
    if(gross salary<=200){
        income tax=0;
    }
    else if(gross salary>200&&gross salary<=600){
        income tax=gross salary*0.1;
    }
    else if(gross salary>600&&gross salary<=1200){
        income tax=gross salary*0.15;
    }
    else if(gross salary>1200&&gross salary<=2000){
        income tax=gross salary*0.2;
    }
    else if(gross salary>2000&&gross salary<3500){
        income tax=gross salary*0.25;
    }
    else{
        income tax=gross salary*0.3;
    }
    net salary=(gross salary-pension-income tax)+overtime payment;
    cout<<"net salary= "<<net salary<<endl;
    return 0;
} 
