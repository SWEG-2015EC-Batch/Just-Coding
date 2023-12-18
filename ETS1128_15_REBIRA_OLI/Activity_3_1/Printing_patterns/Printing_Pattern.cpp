#include<iostream>
using namespace std;

int main() {
    char choice,Chara;
    int n,m,width,length;
    
    cout<<"Please choose which pattern you want: "<<endl;
    cout<<"\t Type the letter that contains the pattern you want to get: "<<endl;
    cout<<"\t  'A' for numbers in recatangle pattern"<<endl;
    cout<<"\t  'B' for stars in rectangle pattern"<<endl;
    cout<<"\t  'C' for hollow rectangular star pattern"<<endl;
    cout<<"\t  'D' for half pymarid pattern"<<endl;
    cout<<"\t  'E' for inverted half pyramid pattern"<<endl;
    cout<<"\t  'F' for hollow inverted half pyramid pattern"<<endl;
    cout<<"\t  'G' for full pyramid pattern"<<endl;
    cout<<"\t  'H' for inverted full pyramid pattern"<<endl;
    cout<<"\t  'I' for hollow full pyramid pattern"<<endl;
    cout<<"\t  'J' for other patterns"<<endl;
    cin>>choice;

    switch (choice){
        case 'A':
        case 'a':
        cout<<"Enter the initial number: "<<endl;
        cin>>n;
        cout<<"Enter the final number: "<<endl;
        cin>>m;
        cout<<"How much width should it be: "<<endl;
        cin>>width;
        cout<<"How much length should it be: "<<endl;
        cin>>length;
        for (int i = n; i <= m; ++i) {
        cout << i << " ";
        if (i == (n+width)) {
            cout << endl;
        }if (i == (n+(2*width))) {
            cout << endl;
        }if (i == (n+(3*width))) {
            cout << endl;
        }
    }
    cout << endl;
        break;
        case 'B':
        case 'b':
        cout<<"Please enter the length of the pattern you want to have: ";
            cin>>n;
            cout<<"Please enter the width of the pattern you want to have: ";
            cin>>m;
            for(int j=0; j<m; ++j){
                for (int i=0 ; i<n ; ++i){
                     cout<<" * ";
                     }cout<<endl;
            }
        break;
        case 'C':
        case 'c':
         cout << "Enter the number of rows: ";
         cin >> n;
         cout << "Enter the number of columns: ";
         cin >> m; 
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (i == 1 || i == n || j == 1 || j == m) {
                    cout << "* ";
                } else {
                    cout << "  ";  
                }
        }}
        cout << endl;
        break;
        case 'D':
        case 'd':
        cout<<"Please enter the length of the pattern you want to have: ";
            cin>>n;
            for(int j=0; j<n; ++j){
        for (int i=0 ; i<=j ; ++i){
            cout<<" * ";
            }
            cout<<endl;
            cout<<" "<<endl;
            }

        break;
        case 'E':
        case 'e':
         cout << "Enter the number of rows: ";
         cin >> n;
        for (int i = n; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
        }
        cout << endl;
        }
        break;
        case 'F':
        case 'f':
        cout << "Enter the number of rows: ";
        cin >> n;
        for (int i = n; i >= 1; --i) {
            for (int j = 1; j <= n; ++j) {
                if (j == 1 || j == i || i == n) {
                    cout << "* ";
                    } else {
                        cout << "  ";  
                    }
            }cout << endl;
        }
        break;
        case 'G':
        case 'g':
        cout << "Enter the number of rows: ";
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n - i; ++j) {
                cout << "  ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k) {
                cout << "* ";
            }cout << endl;
        }
        break;
        case 'H':
        case 'h':
        cout << "Enter the number of rows: ";
        cin >> n;
        for (int i = n; i >= 1; --i) {
            for (int j = 1; j <= n - i; ++j) {
                cout << "  ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k) {
                cout << "* ";
            }cout << endl;
        }
        break;
        case 'I':
        case 'i':
        cout << "Enter the number of rows: ";
        cin >> n;
        for (int i = n; i >= 1; --i) {
            for (int j = 1; j <= n - i; ++j) {
                cout << "  ";
             }
             for (int k = 1; k <= 2 * i - 1; ++k) {
                if (k == 1 || k == 2 * i - 1 || i == n) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }cout << endl;
        }
        break;
        case 'J':
        case 'j':
        for (int i = 1; i <= 5; ++i) {
            for (int j = 1; j <= 5; ++j) {
                cout << j << "  ";
            }cout << endl;
        }
        cout<<endl;
        
        for (int i = 1; i <= 5; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << j << "  ";
            }cout << endl;
        }
        cout<<endl;

        for (int i = 1; i <= 5; ++i) {
            for (int k = 1; k <= (5 - i) * 4; ++k) {
                cout << " ";
            }
            for (int j = i; j >= 1; --j) {
                cout << j << "   ";
            }cout << endl;
        }
        cout<<endl;

        for (int i = 1; i <= 5; ++i) {
            for (int j = 1; j <= 5; ++j) {
            cout << char('a' + j - 1) << "   ";
            }cout << endl;
        }
        cout<<endl;

        Chara = 'A';
        for (int i = 1; i <= 5; ++i) {
            for (int j = 1; j <= 5; ++j) {
                cout << char(Chara + j - 1) << "   ";
            }
            Chara += n;
            cout << endl;
        }
        cout<<endl;

        for (int i = 1; i <= 5; ++i) {
        char Char = 'A';
        for (int j = 1; j <= i; ++j) {
            cout << Char << "   ";
            Char++;
            }cout << endl;
        }
        cout<<endl;
        break;
    
    default:
    cout<<"Please enter a valid letter of your choice(A-J): ";
    cin>>choice;
        break;
    }

return 0;
}