#include <iostream>
using namespace std;

int main()
{
 int temp,
 num,
 count;
cout<<"enter number";
cin>>num;
count= 0;
while (num > 0) {
temp = num % 10;
   num = num / 10;
    count++;
}
cout<<"number of digit = "<<count<<endl;
return 0;
}
