#include<iostream>
using namespace std;

int main(){
    int cho,rows;
    do{
        cout<<"Pattern Printer"<<endl;
        cout<<"1. Left aligned triangle"<<endl;
        cout<<"2. Right aligned triangle"<<endl;
        cout<<"3. Pyramid"<<endl;
        cout<<"4. Mirrored left aligned triangle"<<endl;
        cout<<"5. Mirrored right aligned triangle"<<endl;
        cout<<"6. Mirrored Pyramid"<<endl;
        cout<<"7. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>cho;
        switch(cho){
        case 1:{
            cout<<"Left aligned triangle"<<endl;
            cout<<"How many rows do you want to print: ";
            cin>>rows;
            for(int i=1;i<=rows;i++){
                for(int s=i;s>0;s--){
                    cout<<"*";
                }
                cout<<endl;
            }
            }
            break;
        case 2:
            {

            cout<<"Right aligned triangle"<<endl;
            cout<<"How many rows do you want to print: ";
            cin>>rows;
            for(int i=1;i<=rows;i++){
                for(int spaces=rows-i;spaces>0;spaces--){
                    cout<<" ";
                }
                for(int stars=i;stars>0;stars--){
                    cout<<"*";
                }
                cout<<endl;

            }
            }
            break;
        case 3:
            {
                cout<<"Pyramid"<<endl;
                cout<<"How many rows do you want to print: ";
                cin>>rows;
                for(int i=1;i<=rows;i++){
                    for(int spaces=rows-i;spaces>0;spaces--){
                    cout<<" ";
                }
                for(int stars=i;stars>0;stars--){
                    cout<<"* ";
                }
                cout<<endl;
                }
            }
            break;
        case 4:
            {
                cout<<"Mirrored Left Aligned Triangle"<<endl;
                cout<<"How many rows do you want to print: ";
                cin>>rows;
                for(int i=rows;i>0;i--){
                for(int s=i;s>0;s--){
                    cout<<"*";
                }
                cout<<endl;
            }
            }
            break;
        case 5:
            {
                cout<<"Mirrored Right Aligned Triangle"<<endl;
                cout<<"How many rows do you want to print: ";
                cin>>rows;
                for(int i=rows;i>0;i--){
                for(int spaces=rows-i;spaces>0;spaces--){
                    cout<<" ";
                }
                for(int stars=i;stars>0;stars--){
                    cout<<"*";
                }
                cout<<endl;
                }
            }
            break;
        case 6:
            {
                cout<<"Mirrored Pyramid"<<endl;
                cout<<"How many rows do you want to print: ";
                cin>>rows;
                for(int i=rows;i>0;i--){
                    for(int spaces=rows-i;spaces>0;spaces--){
                    cout<<" ";
                }
                for(int stars=i;stars>0;stars--){
                    cout<<"* ";
                }
                cout<<endl;
                }

            }
            break;
        case 0:
            cout<<"Exiting. Have a good day!"<<endl;
        }
    }while(cho!=0);
    }
