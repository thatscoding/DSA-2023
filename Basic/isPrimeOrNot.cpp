#include<iostream>
using namespace std;

void isPrime(int n){
    int i=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not Prime Number"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<n<<" is Prime Number "<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter the number you what you want to check wheather it is prime or not "<<endl;
    cin>>num;
    isPrime(num);
}