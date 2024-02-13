#include<iomanip>
#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int sem;
    float per;
    int enrno;
    }s[100];




void disp_record(int i){
cout<<left<<setw(12)<<s[i].enrno<<setw(20)<<s[i].name<<right<<setw(4)<<s[i].sem<<setw(12)<<s[i].per<<endl;
}
void disp_header(){
    cout<<left<<setw(12)<<"Enr. no"<<setw(20)<<"Name"<<right<<setw(4)<<"Semester"<<setw(12)<<"Percentage"<<endl;
    cout<<"===================================================="<<endl;
}
int main(){
    cout<<fixed<<setprecision(2);
    int ch,curr=0,n,want,found=0;
    do{

        cout<<"1. Add record"<<endl;
        cout<<"2. Display all records"<<endl;
        cout<<"3. Search for a record"<<endl;
        cout<<"0. Exit the application"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"How many records do you want to add? ";
            cin>>n;
            for(int i=curr;i<curr+n;i++){
                cout<<"Enter the enrollment number of the student: ";
                cin>>s[i].enrno;
                cout<<"Enter the name of the student: ";
                cin>>s[i].name;
                cout<<"Enter the semester of the student: ";
                cin>>s[i].sem;
                cout<<"Enter the percentage of the student: ";
                cin>>s[i].per;
                }
                curr+=n;
            break;
        case 2:
            disp_header();
            for(int i=0;i<curr;i++){
                disp_record(i);
            }
            break;
        case 3:
            found=0;
            cout<<"Which enrollment number do you want to search for? ";
            cin>>want;
            for(int i=0;i<curr;i++){
                if(s[i].enrno==want){
                    disp_header();
                    disp_record(i);
                    found=1;
                }
            }
            if(!found){
                cout<<"Record not found!"<<endl;
            }
            break;
        case 0:
            cout<<"See you soon! Have a good day"<<endl;
            break;
        default:
            cout<<"Please enter a valid choice!"<<endl;

            }
        cout<<endl;
    }while(ch!=0);
    }

