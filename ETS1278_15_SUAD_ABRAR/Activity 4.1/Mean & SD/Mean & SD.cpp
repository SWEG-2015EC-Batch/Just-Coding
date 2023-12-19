 //mean and standard deviation calculator
#include<iostream>
#include<math.h>
using namespace std;

int main(){

                int count;

        cout<<"how many numbers do you want to add: "<<endl;
                cin>>count;

        float number, sum,mean,standard_Deviation, variance,sum_Squared;

                for(int i=0; i<count; i++){

                cout<<"enter number"<<i+1<<":";

                cin>>number;

                sum=sum+number;

                sum_Squared+=number*number;
                }

                cout<<"sum= "<<sum<<endl;

                mean=sum/count;

                variance=(sum_Squared/count)-(mean*mean);

                standard_Deviation=sqrt(variance);

                cout<<"the mean is:"<<mean<<endl;

                cout<<"the standard deviation is: "<<standard_Deviation<<endl;                        

                return 0;
        }