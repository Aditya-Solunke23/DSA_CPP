#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter a number: "<<endl;
    cin>>a;

    if(a <= 1){
        cout<<a<<" is not a prime number"<<endl;
    }

    for(int i = 2; i <= a/2; i++){
        if(a % i == 0){
            cout<<"The number is not prime"<<endl;
            return 0;
        }
    }

    cout<<"The number is prime"<<endl;

    return 0;
}