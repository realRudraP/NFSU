#include<iostream>
#include<iomanip>
using namespace std;
int score=0,wkt=0,ball=0,a=5;

class Player{
    public:
    string name;
    int runs,balls,four,six;
    float sr;
    }in[11];
void printhead(){
    cout<<"India 2nd inn"<<right<<setw(32)<<score<<"- "<<wkt<<" ("<<ball/6<<"."<<ball%6<<")"<<endl;
    cout<<"======================================================"<<endl;
    }
int main(){
    cout<<fixed<<setprecision(2);
   for(int i=0;i<1;i++){
        printhead();
        cout<<"Enter the name of the player "<<i+1<<": ";
        cin>>in[i].name;
        cout<<"Enter the runs scored by player "<<i+1<<": ";
        cin>>in[i].runs;
        score+=in[i].runs;
        cout<<"Enter the number of balls played by the player "<<i+1<<": ";
        cin>>in[i].balls;
        ball+=in[i].balls;
        in[i].sr=((float)in[i].runs/in[i].balls)*100;
        cout<<"Enter the number of fours: ";
        cin>>in[i].four;
        cout<<"Enter the number of sixes: ";
        cin>>in[i].six;
        char o;
        cout<<"Did the player get out? (y/n): ";
        cin>>o;
        if(o=='Y'||o=='y'){
            wkt++;
            cout<<endl;
        }
        system("cls");
    }
    printhead();
    cout<<left<<setw(26)<<"Batter"<<setw(a)<<right<<"R"<<setw(a)<<"B"<<setw(a)<<"4s"<<setw(a)<<"6s"<<right<<setw(a+3)<<"SR"<<endl;
    cout<<"======================================================"<<endl;
    for(int i=0;i<11;i++){
        cout<<left<<setw(26)<<in[i].name<<setw(a)<<right<<in[i].runs<<setw(a)<<in[i].balls<<setw(a)<<in[i].four<<setw(a)<<in[i].six<<right<<setw(a+3)<<in[i].sr<<endl;
        cout<<"------------------------------------------------------"<<endl;
    }
    cout<<setw(36)<<"Made by Rudra Ponkshe";
    }
