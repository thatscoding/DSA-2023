#include<iostream>
using namespace std;

void printPrimeRange(int a,int b){
    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<" ";
        }    
    }
}

int main(){
    int a,b;
    cout<<"Enter the number a & b"<<endl;
    cin>>a>>b;
    printPrimeRange(a,b);
}