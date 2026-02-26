#include<iostream>
using namespace std;

int main(){
    int n, fact = 1;

    cout<<"Enter the number: ";
    cin>>n;

    if(n < 0){
        cout<<"Enter a positive number"<<endl;
    }

    else if(n == 0){
        cout<<"The factorial of "<<n<<" is 1"<<endl;
    }

    else{
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        cout<<"The factorial of the number is: "<<fact<<endl;
    }

    return 0;
}