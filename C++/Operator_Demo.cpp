#include<iostream>
using namespace std;
void arth(){
    cout<<"Arithmetic Operator Demo"<<endl;
    int x,y;
    cout<<"Enter the first value(X): ";
    cin>>x;
    cout<<"Enter the second value(Y): ";
    cin>>y;
    cout<<"X+Y = "<<(x+y)<<endl;
    cout<<"X-Y = "<<(x-y)<<endl;
    cout<<"X*Y = "<<(x*y)<<endl;
    cout<<"X/Y = "<<((float)x/y)<<endl;
    cout<<"X%Y = "<<(x%y)<<endl;
    }
void relational(){
    cout<<"Relational Operator Demo"<<endl;
    int x,y;
    cout<<"Enter the first value(X): ";
    cin>>x;
    cout<<"Enter the second value(Y): ";
    cin>>y;
    cout<<"X<Y = "<<(x<y)<<endl;
    cout<<"X>Y = "<<(x>y)<<endl;
    cout<<"X<=Y = "<<(x<=y)<<endl;
    cout<<"X>=Y = "<<(x>=y)<<endl;
    cout<<"X==Y = "<<(x==y)<<endl;
    cout<<"X!=Y = "<<(x!=y)<<endl;

    }
void bitwise(){
    cout<<"Bitwise Operator Demo"<<endl;
    int x,y;
    cout<<"Enter the first value(X): ";
    cin>>x;
    cout<<"Enter the second value(Y): ";
    cin>>y;
    cout<<"X&Y = "<<(x&y)<<endl;
    cout<<"X|Y = "<<(x|y)<<endl;
    cout<<"X^Y = "<<(x^y)<<endl;
    cout<<"X<<2 = "<<(x<<2)<<endl;
    cout<<"Y>>2 = "<<(y>>2)<<endl;
    cout<<"~X = "<<(~x)<<endl;
    }

int main(){
    int choice;
    do{
        cout<<"1. Arithmetic Operator Demo"<<endl;
        cout<<"2. Relational Operator Demo"<<endl;
        cout<<"3. Bitwise Operator Demo"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        system("cls");
        switch(choice){
        case 1:
            arth();
            break;
        case 2:
            relational();
            break;
        case 3:
            bitwise();
            break;
        case 0:
            cout<<"Thanks for using! Have a great day ahead.";
            break;
        default:
            cout<<"Please enter a valid choice!"<<endl;
            }
    }while(choice!=0);
    }
