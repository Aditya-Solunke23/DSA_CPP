#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter the year to be checked: ";
    cin>>year;

    if(year % 100 == 0){
        if(year % 400 == 0){
            cout<<year<<" is a century and is a leap year"<<endl;
            return 0;
        }
    }
    
    else if(year % 4 == 0){
        cout<<year<<" is a leap year"<<endl;
        return 0;
    }

    else{
        cout<<year<<" is not a leap year"<<endl;
    }
    
    return 0;
}