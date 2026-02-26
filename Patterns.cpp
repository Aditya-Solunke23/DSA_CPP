#include<iostream>
using namespace std;

int main(){

// *
// **
// ***
// ****
// *****
//     for(int i = 1; i <= 5; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// *****
// ****
// ***
// **
// *
        // for(int i = 1; i <= 5; i++){
        //     for(int j = 5; j >= i; j--){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }

// 1
// 12
// 123
// 1234
// 12345
        // for(int i = 1; i <= 5; i++){
        //     for(int j = 1; j <= i; j++){
        //         cout<<j;
        //     }
        //     cout<<endl;
        // }

// 1
// 22
// 333
// 4444
// 55555
        // for(int i = 1; i <= 5; i++){
        //     for(int j = 1; j <= i; j++){
        //         cout<<i;
        //     }
        //     cout<<endl;
        // }

//     *
//    **
//   ***
//  ****
// *****
        // for(int i = 1; i <= 5; i++){
        //     for(int k = 1; k <= 5-i; k++){
        //         cout<<" ";
        //     }
        //     for(int j = 1; j <= i; j++){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }

//     *    
//    ***
//   *****
//  *******
// *********
        // for(int i = 1; i <= 5; i++){
        //     for(int k = 1; k <= (5-i); k++){
        //         cout<<" ";
        //     }
        //     for(int j = 1; j <= (2*i)-1; j++){
        //         cout<<"*";
        //     }
        //     for(int l = 1; l <= (5-i); l++){
        //         cout<<" ";
        //     }
        //     cout<<endl;
        // }

//  ********* 
//   *******
//    *****
//     ***
//      *
        // for(int i = 1; i <= 5; i++){
        //     for(int k = (i-1); k >= 0; k--){
        //         cout<<" ";
        //     }
        //     for(int j = ((5-i)*2)+1; j > 0; j--){
        //         cout<<"*";
        //     }
        //     for(int l = (i-1); l >= 0; l--){
        //         cout<<" ";
        //     }
        //     cout<<endl;
        // }

//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
        // int count = 1;

        // for(int i = 1; i <= 5; i++){
        //     for(int j = 1; j <= i; j++){
        //         cout<<" "<<count;
        //         count++;
        //     }
        //     cout<<endl;
        // }

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

1
01
101
0101
10101

*****
*   *
*   *
*   *
*****
        int i;
        if(i == 1 || i == 5){
            for(int j = 1; j <= 5; j++){
                cout<<"*"
            }
        }





    return 0;
}