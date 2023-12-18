// This program that calculates the Body Mass Index of a person
#include<iostream>
using namespace std;

int main() {
    string G, M, F;  // G: is Gender of the person, N: is number of people
    double H, W, BMI,i,N;  // H: is the height of a person, W: is the weight of a person, BMI: is the Body Mass Index of a person.
    int count=1;

        cout<<"For how many peoples do you want to calculate?: ";
        cin>>N;

        //Making the Program to calculate the BMI for 'N' number of peoples
    for (int i=1;i<N;i++){
    
        cout<<"User:"<<i<<endl;
        cout<<"Please, enter your gender"<<endl<<"  Please, enter 'M' for Male or 'F' for Female: ";
        cin>>G;
        cout<<"  Please, enter your Weight(in kg): ";
        cin>>W;
        cout<<"  Please, enter your Height(in meters): ";
        cin>>H; 
 
        //Calculating the BMI
        BMI = W/(H*H);
         cout<<"Your gender is " <<G<< " and your Body-Mass-Index is "<< BMI<<endl;

//Calculating the BMI of female, if the user wanted to calculate for female
    if (G=="F") {
        if (BMI<18.5){
        cout<<"This shows that you are Under Weight"<<endl;
        }
        else if(BMI<=24.9) {
            cout<<"This shows that you are Normal Weight"<<endl;
        }
        else if(BMI <= 29.9){
            cout<<"This shows that you are Over Weight"<<endl;
        }else{
        cout<< "This shows that you are Obese "<<endl;
        }
    }
    //Calculating the BMI of Male, if the user wanted to calculate for male
    if (G == "M"){
        if (BMI<20.5){
            cout<<"This shows that you are Under Weight"<<endl;
        }
        else if (BMI<=25.9){
            cout<<"This shows that you are Normal Weight"<<endl;
        }
        else if(BMI <= 29.9){
            cout<<"This shows that you are over weight"<<endl;  
        }else{
        cout<< "This shows that you are Obese"<<endl;
        }
    }
    }
    return 0;
}