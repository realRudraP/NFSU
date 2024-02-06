#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct sub{
    int th,pr;
    char gr[3];
    }cb[5];
char subs[5][20]={"English","Hindi Course-A","Mathematics","Science","Social Science"};
char codes[5][4]={"101","002","041","086","087"};
int main(){
    char name[20],m_name[20],f_name[20],dob[12];
    cout<<"Enter the name of the student: ";
    cin>>name;
    fflush(stdin);
    cout<<"Enter the name of the mother: ";
    cin>>m_name;
    cout<<"Enter the father's/guardian's name: ";
    cin>>f_name;
    cout<<"Enter the date of birth of the student: ";
    cin>>dob;
    cout<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter the theory marks of "<<subs[i]<<": ";
        cin>>cb[i].th;
        cout<<"Enter the practicals marks of "<<subs[i]<<": ";
        cin>>cb[i].pr;

    }
    system("cls");
    cout<<setw(50)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
    cout<<setw(38)<<"MARKS STATMENT"<<endl;
    cout<<setw(52)<<"ALL INDIA SECONDARY SCHOOL EXAMINATION,2023"<<endl<<endl;
    cout<<"=================================================================="<<endl;
    cout<<left<<setw(15)<<"Name of Student: "<<name<<endl;
    cout<<setw(15)<<"Mother's name: "<<m_name<<endl;
    cout<<setw(15)<<"Father's/Guardians name: "<<f_name<<endl;
    cout<<setw(15)<<"Date of Birth: "<<dob<<endl<<endl;
    cout<<"Scholastic Achievements"<<endl<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|S.code|"<<left<<setw(25)<<"   Subject"<<setw(2)<<"| "<<setw(4)<<"Theory "<<setw(3)<<" |"<<setw(5)<<"LA/Pr"<<setw(4)<<"  |"<<setw(5)<<"Total"<<setw(4)<<"  |"<<setw(5)<<"Grade"<<setw(4)<<"  |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    for(int i=0;i<5;i++){
        char gra[5];
        int tot= cb[i].pr+cb[i].th;
        if(tot>90&&tot<=100){
            strcpy(gra,"A1");
        }else if(tot>80&&tot<=90){
            strcpy(gra,"A2");
        }else if(tot>70&&tot<=80){
            strcpy(gra,"B1");
        }else if(tot>60&&tot<=70){
            strcpy(gra,"B2");
        }else if(tot>50&&tot<=60){
            strcpy(gra,"C1");
        }else if(tot>40&&tot<=50){
            strcpy(gra,"C2");
        }else if(tot>30&&tot<=40){
            strcpy(gra,"D");
        }else if(tot>=0&&tot<=30){
            strcpy(gra,"F");
            }
        cout<<"| "<<codes[i]<<"  |"<<left<<setw(3)<<"   "<<setw(22)<<subs[i]<<setw(4)<<"| "<<setw(5)<<cb[i].th<<setw(4)<<" |"<<setw(5)<<cb[i].pr<<setw(4)<<" |"<<setw(5)<<cb[i].th+cb[i].pr<<setw(4)<<" |"<<setw(5)<<gra<<setw(4)<<" |"<<endl;
    }
    cout<<"----------------------------------------------------------------------"<<endl;
    }
