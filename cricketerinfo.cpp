#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<left<<setw(6)<<"No."<<setw(16)<<"Name"<<right<<setw(5)<<"I1"<<setw(5)<<"I2"<<setw(5)<<"I3"<<endl;
    cout<<"====================================="<<endl;
    cout<<left<<setw(6)<<"1."<<setw(16)<<"Sachin Tendulkar"<<right<<setw(5)<<"78"<<setw(5)<<"88"<<setw(5)<<"43"<<endl;
    cout<<left<<setw(6)<<"1346."<<setw(16)<<"Rohit"<<right<<setw(5)<<"143"<<setw(5)<<"264"<<setw(5)<<"1"<<endl;
    cout<<left<<setw(6)<<"3."<<setw(16)<<"Virat Kohli"<<right<<setw(5)<<"66"<<setw(5)<<"192"<<setw(5)<<"75"<<endl;
    return 0;
    }
