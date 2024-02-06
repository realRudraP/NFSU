#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float p[4],total=0;
    int q[4];
    cout<<"Enter the Unit Price of Computer: ";
    cin>>p[0];
    cout<<"Enter the quantity of computer: ";
    cin>>q[0];
    cout<<"Enter the Unit Price of Mobile: ";
    cin>>p[1];
    cout<<"Enter the quantity of mobile: ";
    cin>>q[1];
    cout<<"Enter the Unit Price of Calculator: ";
    cin>>p[2];
    cout<<"Enter the quantity of calculator: ";
    cin>>q[2];
    cout<<"Enter the Unit Price of Pencil: ";
    cin>>p[3];
    cout<<"Enter the quantity of pencil: ";
    cin>>q[3];
    for(int i=0;i<4;i++){
        total+=p[i]*q[i];
    }
    system("cls");
    cout<<fixed<<setprecision(2);
    cout<<setw(35)<<"XYZ Mart Pvt Ltd"<<endl;
    cout<<setw(38)<<"3\\top, PQR Shopping Mall"<<endl;
    cout<<setw(31)<<"Gandhinagar"<<endl;
    cout<<"===================================================="<<endl;
    cout<<"Bill no:101"<<setw(41)<<"6 Feb 2024"<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(4)<<"No."<<left<<setw(20)<<"Item Name"<<right<<setw(9)<<"Unit Price"<<setw(5)<<"Qty"<<setw(13)<<"Total"<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(4)<<"1."<<left<<setw(20)<<"Computer"<<right<<setw(9)<<p[0]<<setw(5)<<q[0]<<setw(14)<<p[0]*q[0]<<endl;
    cout<<setw(4)<<"2."<<left<<setw(20)<<"Mobile"<<right<<setw(9)<<p[1]<<setw(5)<<q[1]<<setw(14)<<p[1]*q[1]<<endl;
    cout<<setw(4)<<"3."<<left<<setw(20)<<"Calculator"<<right<<setw(9)<<p[2]<<setw(5)<<q[2]<<setw(14)<<p[2]*q[2]<<endl;
    cout<<setw(4)<<"4."<<left<<setw(20)<<"Pencil"<<right<<setw(9)<<p[3]<<setw(5)<<q[3]<<setw(14)<<p[3]*q[3]<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(40)<<"Total Amount: "<<right<<setw(12)<<total<<endl;
    cout<<setw(40)<<"Discount: "<<right<<setw(12)<<total*0.1<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(40)<<"Total Amount to be paid: "<<setw(12)<<total*0.9<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(39   )<<"Done by: Rudra, Btech NFSU";
    return 0;
    }
