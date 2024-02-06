#include<iostream>
#include<iomanip>
using namespace std;
struct sub{
    int th,pr;
    }cb[5];
int main(){
    char name[20],m_name[20],f_name[20],dob[12];
    cout<<setw(75)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
    cout<<setw(63)<<"MARKS STATMENT"<<endl;
    cout<<setw(77)<<"ALL INDIA SECONDARY SCHOOL EXAMINATION,2023"<<endl<<endl;
    cout<<left<<setw(15)<<"Name of Student: "<<name<<endl;
    cout<<setw(15)<<"Mother's name: "<<name<<endl;
    cout<<setw(15)<<"Father's/Guardians name: "<<name<<endl;
    cout<<setw(15)<<"Date of Birth: "<<name<<endl<<endl;
    cout<<"Scholastic Achievements"<<endl<<endl;
    cout<<"| 101 |"<<left<<setw(25)<<"   English"<<setw(4)<<"| "<<setw(5)<<cb[1].th<<setw(4)<<" |"<<setw(5)<<cb[1].pr<<setw(4)<<" |"<<setw(5)<<cb[1].th+cb[1].pr<<setw(4)<<" |";


    }
