#include<iostream>
using namespace std;
void leftAlignedTriagle(int rows, char c){
            cout<<"Left aligned triangle"<<endl;
            for(int i=1;i<=rows;i++){
                for(int s=i;s>0;s--){
                    cout<<c;
                }
                cout<<endl;
            }
    }
void rightAlignedTraingle(int rows,char c){
    cout<<"Right aligned triangle"<<endl;
    for(int i=1;i<=rows;i++){
        for(int spaces=rows-i;spaces>0;spaces--){
            cout<<" ";
        }
        for(int stars=i;stars>0;stars--){
            cout<<c;
        }
        cout<<endl;

    }
}

void pyramid(int rows, char c){
    cout<<"Pyramid"<<endl;
    for(int i=1;i<=rows;i++){
        for(int spaces=rows-i;spaces>0;spaces--){
        cout<<" ";
    }
    for(int stars=i;stars>0;stars--){
        cout<<c<<" ";
    }
    cout<<endl;
    }
}

void mirroredLeftTriangle(int rows, char c){
     cout<<"Mirrored Left Aligned Triangle"<<endl;

        for(int i=rows;i>0;i--){
            for(int s=i;s>0;s--){
                cout<<c;
            }
            cout<<endl;
        }
    }
void mirroredRightTriangle(int rows, char c){
    cout<<"Mirrored Right Aligned Triangle"<<endl;

            for(int i=rows;i>0;i--){
            for(int spaces=rows-i;spaces>0;spaces--){
                cout<<" ";
            }
            for(int stars=i;stars>0;stars--){
                cout<<c;
            }
            cout<<endl;
            }
    }
void mirroredPyramid(int rows,char c){
     cout<<"Mirrored Pyramid"<<endl;

    for(int i=rows;i>0;i--){
        for(int spaces=rows-i;spaces>0;spaces--){
        cout<<" ";
    }
    for(int stars=i;stars>0;stars--){
        cout<<c<<" ";
    }
    cout<<endl;
    }
}
int main(){
    int cho,rows;
    char ch;
    do{
        cout<<"Pattern Printer"<<endl;
        cout<<"1. Left aligned triangle"<<endl;
        cout<<"2. Right aligned triangle"<<endl;
        cout<<"3. Pyramid"<<endl;
        cout<<"4. Mirrored left aligned triangle"<<endl;
        cout<<"5. Mirrored right aligned triangle"<<endl;
        cout<<"6. Mirrored Pyramid"<<endl;
        cout<<"0. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>cho;
        if(cho!=0){
        cout<<"How many rows do you want to print?: ";
        cin>>rows;
        cout<<"Which character do you want to use?: ";
        cin>>ch;
        }
        switch(cho){
        case 1:
            leftAlignedTriagle(rows,ch);
            break;
        case 2:
            rightAlignedTraingle(rows,ch);
            break;
        case 3:
            pyramid(rows,ch);
            break;
        case 4:
            mirroredLeftTriangle(rows,ch);
            break;
        case 5:
            {
                mirroredRightTriangle(rows,ch);
            }
            break;
        case 6:
            {
                mirroredPyramid(rows,ch);
            }
            break;
        case 0:
            cout<<"Exiting. Have a good day!"<<endl;
        }
    }while(cho!=0);
    }
