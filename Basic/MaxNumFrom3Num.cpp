#include<iostream>
using namespace std;

void MaxNum(int a,int b, int c){
    if(a>b){
        if(a>c){
            cout<<"Largest Number is "<<a<<endl;
        }
        else{
            cout<<"Largest Number is "<<c<<endl;
        }
    }else{
        if(b>c){
            cout<<"Largest Number is "<<b<<endl;
        }else{
            cout<<"Largest Number is "<<c<<endl;
        }
    }
}

int main(){
    int a,b,c;
    cout<<"Entter the 3 numbers "<<endl;
    cin>>a>>b>>c;
    MaxNum(a,b,c);
}