#include <iostream>
using namespace std;
int main(){

    char text[200];
    int vowels = 0, consonants = 0, digits = 0, specialChar(0);

    cout<<"Enter your text: ";
    cin.getline (text,200);

    for (int i = 0; text[i] != '\0' ; i++){

        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' 
        || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U'){
            vowels++;
        }else if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z' ) ){
            ++consonants;
        }else if(text[i] >= '0' && text[i] <= '9'){
            ++digits;
        }else{
            ++specialChar;
        }
        
    }

    cout<< "The number of vowels is: "<<vowels<<endl;
    cout<< "The number of consonants is: "<<consonants<<endl;
    cout<< "The number of digits is: "<<digits<<endl;
    cout<< "The number of special Characters is: "<<specialChar<<endl;
    
    return 0;
}
