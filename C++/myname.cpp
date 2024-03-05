#include<iostream>
using namespace std;

int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            if(col==1||row==1||(col==5&&row<=3)||row==3||(row==4&&col==3)||(row==5&&col==5)){
                cout<<"* ";
            }else{
                cout<<"  ";
                }
        }
        cout<<" ";
        for(int col=1;col<=5;col++){
            if(col==1||col==5||row==5){
                cout<<"* ";
            }else
                cout<<"  ";
        }
        cout<<" ";
        for(int col=1;col<=5;col++){
            if(col==1||(col==5&&row==3)||(row==2&&col==4)||(row==4&&col==4)||((row==1||row==5)&&col<4)){
                cout<<"* ";
            }else
                cout<<"  ";
        }
        cout<<" ";
        for(int col=1;col<=5;col++){
            if(col==1||row==1||(col==5&&row<=3)||row==3||(row==4&&col==3)||(row==5&&col==5)){
                cout<<"* ";
            }else{
                cout<<"  ";
                }
        }
        cout<<" ";
        for(int col=1;col<=5;col++){
            if(col==1||col==5||row==1||row==3){
               cout<<"* ";
            }else{
                cout<<"  ";
                }
            }

        cout<<endl;
    }

    }
