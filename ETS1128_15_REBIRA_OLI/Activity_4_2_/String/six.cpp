//Design a program to find the frequency of characters within string and 
//display character with largest and smallest frequency respectively.

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
    char str[100],largest,least;
    int freq[256]={0}, frequency[2]={0};

    cout<<"Please type anything: ";
    cin.getline(str,100);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            continue;
        }
        freq[str[i]]++;
        if (freq[str[i]] > frequency[0]) {
                frequency[0] = freq[str[i]];
                largest=str[i];
            }
            if (freq[str[i]] < frequency[0]) {
                frequency[1] = freq[str[i]];
                least=str[i];
            }
    }
    
    cout<<"The character with largest frequency is: '"<<largest<<setw(18)<<"' with a frequency of: "<<frequency[0]<<endl;
    cout<<"The character with smallest frequency is: '"<<least<<setw(18)<<"' with a frequency of: "<<frequency[1]<<endl;  

return 0;
}







/*
or using

    cout<<"Please type any thing: ";
    cin.getline(str,100);

    for(int i=0; str[i]!='\0'; i++){
        for(int j=0; j<=i; j++){
            if(str[i]==str[j]){
                freq[str[i]]++;
                break;
            }
        }
    }

    cout<<"Charcter"<<setw(15)<<"Frequency"<<endl;
    for(int i=0; i<strlen(str); i++){
        cout<<str[i]<<setw(15)<<freq[str[i]]<<endl;
    }
*/



/*
to print all character


  cout<< "Character" <<setw(15)<< "Frequency" <<endl;
    for (int i=0; i<strlen(str); i++){
        if (freq[str[i]]!=0){
            cout<<str[i]<<setw(18)<<freq[str[i]]<<endl;
            freq[str[i]]=0;
        }
    }
*/