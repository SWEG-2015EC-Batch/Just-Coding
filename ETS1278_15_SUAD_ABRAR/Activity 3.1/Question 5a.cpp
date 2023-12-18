#include <iostream>
using namespace std;

int main()
{
 int temp,
 num,
 reverse;
cout<<"enter number";
cin>>num;
reverse = 0;
while (num > 0) {
temp = num % 10;
    reverse = (reverse * 10) + temp;
    num = num / 10;
}
cout<<reverse;
return 0;
} 
