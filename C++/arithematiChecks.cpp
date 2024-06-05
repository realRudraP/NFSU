#include<iostream>
#include<math.h>
using namespace std;
int no;
int isEven(){

        cout<<"Odd/Even Check"<<endl;
        cout<<"Enter a number: ";
        cin>>no;
        if(no%2==0){
            return 1;
        }else
            return 0;
        }

int posNegZero(){
        cout<<"Check positive, negative or zero"<<endl;
        cout<<"Give a number: ";
        cin>>no;
        if(no>0)
            return 1;
        else if(no<0)
            return -1;
        else
            return 0;
    }
int isPrime(){
    int res=0;
    cout<<"Check prime"<<endl;
    cout<<"Give a number: ";
    cin>>no;
    if(no<=1)
        cout<<"Not prime"<<endl;
    else{
        for(int i=2;i<(no/2);i++){
            if(no%i==0){
                res=1;
                return 0;
                break;
            }
        }
        return 1;
    }
}

int isPalindrome(){
    int rev=0,temp;
    cout<<"Palindrome check"<<endl;
    cout<<"Enter a number: ";
    cin>>no;
    temp=no;
    while(temp>0){
        rev+=temp%10;
        temp=temp/10;
        if(temp>0)
            rev*=10;
    }
    if(rev==no)
        return 1;
    else
        return 0;
    }

int isArmstrong(){
    {
                int len=0,temp,sum=0;
                cout<<"Armstrong number check"<<endl;
                cout<<"Enter your number: ";
                cin>>no;
                temp=no;
                while(temp!=0){
                    sum+=(pow((temp%10),3));
                    temp/=10;
                }
                if(sum==no)
                    return 1;
                else
                    return 0;
            }
    }

int main(){
    int no,res,opt;
    do{
        cout<<"1. Check odd/even"<<endl;
        cout<<"2. Check positive/negative/zero"<<endl;
        cout<<"3. Check Prime"<<endl;
        cout<<"4. Check Palindrome"<<endl;
        cout<<"5. Check Armstrong"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>opt;
        system("cls");
        switch(opt){
        case 1:
            if(isEven()){
                cout<<"Number is even";
            }
            break;
        case 2:
            {
                int r=posNegZero();
                if(r==1){
                    cout<<"Positive"<<endl;
                }else if(r==-1){
                    cout<<"Negative"<<endl;
                }else{
                    cout<<"Zero"<<endl;
                    }
            }
            break;
        case 3:
            {
                if(isPrime()){
                    cout<<"Number is Prime"<<endl;
                }else{
                    cout<<"Number is not prime"<<endl;
                    }
            }
            break;
        case 4:
            {
                if(isPalindrome()){
                    cout<<"The given number is Palindrome"<<endl;
                }else{
                    cout<<"The given number is not a Palindrome"<<endl;
                    }
            }
            break;
        case 5:
            if(isArmstrong())
                cout<<"Is Armstrong"<<endl;
            else
                cout<<"Not Armstrong"<<endl;
            break;
        case 0:
            cout<<"Exiting. Have a good day!"<<endl;

        }
    }while(opt!=0);

    }
