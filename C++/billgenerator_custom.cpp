#include<iostream>
#include<iomanip>
using namespace std;
class Obj{
    public:
    string name;
    float unit_price,qty;
}o[100];
int main(){
    int bill_no,prods=0,choice=1;
    cout << "Enter Bill Number : ";
    cin>>bill_no;
    float total=0;
    for(int i=0;i<100;i++){
        char chk;
        cout<<"Enter the name of the product "<<i+1<<": ";
        cin>>o[i].name;
        cout<<"Enter the unit price of the product: ";
        cin>>o[i].unit_price;
        cout<<"Enter the quantity of the product: ";
        cin>>o[i].qty;
        total+=o[i].qty*o[i].unit_price;
        prods++;
        check:
        cout<<"Do you wish to add another product?(y/n)";
        cin>>chk;
        if(chk=='n'||chk=='N'){
            choice=0;
            break;
        }else if(chk=='Y'||chk=='y'){
            1;
            }
            else{
                cout<<"Please enter y/n!"<<endl;
                goto check;
            }
        system("cls");
    }
    system("cls");
    cout<<fixed<<setprecision(2);
    cout<<setw(35)<<"XYZ Mart Pvt Ltd"<<endl;
    cout<<setw(38)<<"3\\top, PQR Shopping Mall"<<endl;
    cout<<setw(31)<<"Gandhinagar"<<endl;
    cout<<"===================================================="<<endl;
    cout<<"Bill no:"<<bill_no<<setw(41)<<"17 Feb 2024"<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(4)<<"No."<<left<<setw(20)<<"Item Name"<<right<<setw(9)<<"Unit Price"<<setw(5)<<"Qty"<<setw(13)<<"Total"<<endl;
    cout<<"===================================================="<<endl;
    for(int i=0;i<prods;i++){
        cout<<setw(4)<<i+1<<"."<<left<<setw(20)<<o[i].name<<right<<setw(9)<<o[i].unit_price<<setw(5)<<o[i].qty<<setw(13)<<o[i].unit_price*o[i].qty<<endl;
    }

    cout<<"===================================================="<<endl;
    cout<<setw(40)<<"Total Amount: "<<right<<setw(12)<<total<<endl;
    cout<<setw(40)<<"Discount: "<<right<<setw(12)<<total*0.1<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(40)<<"Total Amount to be paid: "<<setw(12)<<total*0.9<<endl;
    cout<<"===================================================="<<endl;
    cout<<setw(39   )<<"Done by: Rudra, Btech NFSU";
    return 0;
    }
