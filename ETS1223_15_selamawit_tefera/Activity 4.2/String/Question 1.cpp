#include <iostream>
using namespace std;
int main(){

    char text[300];
    int vowels = 0, consonants = 0;

    cout<<"Please enter a string: ";
    cin.getline (text,300);

    for (int i = 0; text[i] != '\0' ; i++){

        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'  
		|| text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U'){
            vowels++;
        }else if((text[i] >= 'a' && text[i] <= 'z')|| (text[i] >= 'A' && text[i] <= 'Z' )){
            ++consonants;
        }
    }
    

    cout<< "The number of vowels in the string is: "<<vowels<<endl;
    cout<< "The number of consonants in the string is: "<<consonants<<endl;
    
    return 0;
}
