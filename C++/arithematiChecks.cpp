#include<iostream>
#include<math.h>
using namespace std;
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
            {


            cout<<"Odd/Even Check"<<endl;
            cout<<"Enter a number: ";
            cin>>no;
            if(no%2==0){
                cout<<"Given number is even"<<endl;
            }else
                cout<<"Given number is odd"<<endl;
            }
            break;
        case 2:
            {
                cout<<"Check positive, negative or zero"<<endl;
                cout<<"Give a number: ";
                cin>>no;
                if(no>0)
                    cout<<"Positive number"<<endl;
                else if(no<0)
                    cout<<"Negative number"<<endl;
                else
                    cout<<"Zero"<<endl;
            }
            break;
        case 3:
            {
                res=0;
                cout<<"Check prime"<<endl;
                cout<<"Give a number: ";
                cin>>no;
                if(no<=1)
                    cout<<"Not prime"<<endl;
                else{
                    for(int i=2;i<(no/2);i++){
                        if(no%i==0){
                            res=1;
                            cout<<"The number is not prime"<<endl;
                            break;
                        }
                    }
                    if(!res)
                        cout<<"The number is prime"<<endl;
                }
            }
            break;
        case 4:
            {
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
                    cout<<"Palindrome"<<endl;
                else
                    cout<<"Not palindrome"<<endl;

            }
            break;
        case 5:
            {
                int len=0,temp,sum=0;
                cout<<"Armstrong number check"<<endl;
                cout<<"Enter your number: ";
                cin>>no;
                temp=no;
                while(temp>0){
                    len++;
                    temp/=10;
                }
                temp=no;
                for(int i=0;i<len;i++){
                    sum+=(pow((temp%10),len));
                    temp/=10;
                }
                if(sum==no)
                    cout<<"Armstrong number"<<endl;
                else
                    cout<<"Not Armstrong number"<<endl;
            }
            break;
        case 0:
            cout<<"Exiting. Have a good day!"<<endl;

        }
    }while(opt!=0);

    }
