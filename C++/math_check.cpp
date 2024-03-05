#include<iostream>
using namespace std;
int odd_even(int n){
    if(n%2==0){
        return 0;
    }else{
        return 1;
    }
}

int pos_neg_zero(int n){
    if(n>0)
        return 1;
    else if(n<0)
        return -1;
    else
        return 0;
    }
int is_prime(int n){
    if(n<=1){
        return 0;
    }else{
        for(int i=2;i<(n/2);i++){
            if(n%i==0){
                return 0;
            }
        }
        }
    return 1;
    }
int main(){
    int choice;
    do{
        int no;
        cout<<"1.Odd/Even Check"<<endl;
        cout<<"2. Positive/Negative/Zero Check"<<endl;
        cout<<"3. Prime number check"<<endl;
        cout<<"4. Palindrome check"<<endl;
        cout<<"5. Armstrong check"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1:{
            cout<<"Odd/Even Check"<<endl;
            cout<<"Enter a number: ";
            cin>>no;
            if(odd_even(no)==1){
                cout<<"Odd number"<<endl;
            }else{
                cout<<"Even number"<<endl;
                }
        }
            break;
        case 2:
            {

            cout<<"Positive/Negative/Zero Check"<<endl;
            cout<<"Enter a number: ";
            cin>>no;
            if(pos_neg_zero(no)==0){
                cout<<"Zero"<<endl;
            }else if(pos_neg_zero(no)==1){
                cout<<"Positive"<<endl;
            }else{
                cout<<"Negative"<<endl;
                }
            break;
            }
        case 3:
            cout<<"Prime number check"<<endl;
            cout<<"Enter a number: ";
            cin>>no;
            if(is_prime(no)==0){
                cout<<"Not prime"<<endl;
            }else{
                cout<<"Is prime"<<endl;
                }
        }
    }while(choice!=0);
    }
