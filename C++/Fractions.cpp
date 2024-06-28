
#include<iostream>
using namespace std;

int gcd(int a,int b){
    a=abs(a),b=abs(b);
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

class fraction{
    int numerator;
    int denominator;
public:
    fraction(){
        numerator=0;
        denominator=1;
        }
    fraction(int numerator,int denominator){
        if(denominator==0){
            cout<<"Fraction can't be initialized with denominator as 0"<<endl;
        }
        else{
            this->numerator=numerator;
            this->denominator=denominator;
        }
        }
    void setNumerator(int numerator){
        this->numerator=numerator;
        }
    void setDenominator(int denominator){
        if(denominator==0){
            cout<<"Can't set denominator as 0!"<<endl;
            return;
        }else{
            this->denominator=denominator;
            }
    }
    int getNumerator(){
        return numerator;
        }
    int getDenominator(){
        return denominator;
        }
    fraction operator +(fraction b){
        int newNumerator=((numerator*b.getDenominator())+(denominator*b.getNumerator()));
        int newDenominator=(denominator*b.denominator);
        int div=gcd(newNumerator,newDenominator);
        fraction temp(newNumerator/div,newDenominator/div);
        return temp;
        }
    fraction operator -(fraction b){
        int newNumerator=((numerator*b.denominator)-(denominator*b.numerator));
        int newDenominator=(denominator*b.denominator);
        int div=gcd(newNumerator,newDenominator);
        fraction temp(newNumerator/div,newDenominator/div);
        return temp;
        }
    fraction operator *(fraction b){
        int newNumerator=numerator*b.numerator;
        int newDenominator=(denominator*b.denominator);
        int div=gcd(newNumerator,newDenominator);
        fraction temp(newNumerator/div,newDenominator/div);
        return temp;
        }
    fraction operator /(fraction b){
        int newNumerator=numerator*b.denominator;
        int newDenominator=(denominator*b.numerator);
        int div=gcd(newNumerator,newDenominator);
        fraction temp(newNumerator/div,newDenominator/div);
        return temp;
        }
    string toString(){
        return to_string(numerator)+"/"+to_string(denominator);
        }
    };
int main(){
    int n1,n2,d1,d2;
    cout<<"Enter the numerator and denominator of the first fraction: ";
    cin>>n1>>d1;
    cout<<"Enter the numerator and denominator of the second fraction: ";
    cin>>n2>>d2;
    fraction frac1(n1,d1),frac2(n2,d2);
    fraction sum= frac1+frac2,diff=frac1-frac2,product=frac1*frac2,quotient=frac1/frac2;
    cout<<"Sum: "<<sum.toString()<<endl;
    cout<<"Difference: "<<diff.toString()<<endl;
    cout<<"Product: "<<product.toString()<<endl;
    cout<<"Quotient: "<<quotient.toString()<<endl;

    return 0;
    }
