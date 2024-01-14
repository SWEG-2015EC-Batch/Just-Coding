#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char correct[10]={'A','B','C','D','E','A','B','C','D','E'};
    char trytest[10];
    int counter = 0;
    for(int i=0;i<10;i++){
        cout<<"Answer for "<<i+1<<": ";
        cin>>trytest[i];
    }
    for(int i=0;i<10;i++){
        if (toupper(trytest[i])==correct[i]){
            counter++;
        }
    }

    cout<<"Your score for this test is: "<<counter;
}