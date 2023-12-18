#include<iostream>
using namespace std;

int main(){
    float Test, Quiz, Project, Assignment, Final_Exam,Total_mark,Mark;

    cout<<"Enter your Test mark(15%): ";
    cin>>Test;
    if(Test<0 || Test>15){
        cout<<"Invalid mark"<<endl<<"  Please enter a valid mark: ";
        cin>>Test; 
    }

    cout<<"Enter your Quiz mark(5%): ";
    cin>>Quiz;
    if(Quiz<0 || Quiz>5){
        cout<<"Invalid mark"<<endl<<"  Please enter a valid mark: ";
        cin>>Quiz; 
    }

    cout<<"Enter your Project mark(20%): ";
    cin>>Project;
    if(Project<0 || Project>20){
        cout<<"Invalid mark"<<endl<<"  Please enter a valid mark: ";
        cin>>Project; 
    }

    cout<<"Enter your Assignment mark(10%): ";
    cin>>Assignment;
    if(Assignment<0 || Assignment>10){
        cout<<"Invalid mark"<<endl<<"  Please enter a valid mark: ";
        cin>>Assignment;
    }

    cout<<"Enter your Final Exam mark(50%): ";
    cin>>Final_Exam;
    if(Final_Exam<0 || Final_Exam>50){
        cout<<"Invalid mark"<<endl<<"  Please enter a valid mark: ";
        cin>>Final_Exam;
    }

    Total_mark=Test+Quiz+Project+Assignment+Final_Exam;
    cout<<"Your Total Mark is(100%): "<<Total_mark<<endl;

    if (Total_mark>=90){
        cout<<"Your corresponding grade is: A+";
        }else if(Total_mark>=80){
            cout<<"Your corresponding grade is: A";
        }else if(Total_mark>=75){
            cout<<"Your corresponding grade is: B+";
        }else if(Total_mark>=60){
            cout<<"Your corresponding grade is: B";
        }else if(Total_mark>=55){
            cout<<"Your corresponding grade is: C+";
        }else if(Total_mark>=45){
            cout<<"Your corresponding grade is: C";
        }else if(Total_mark>=30){
            cout<<"Your corresponding grade is: D";
        }else{
            cout<<"Your corresponding grade is: F";
        } 
        
    return 0;
}
    
    
    
    /*switch (Total_mark){
        case (>=90):
        cout<<"A+";
        break; 
        
        default:
cout<<"Incvalid";
    }
    */
 
