#include <iostream>
using namespace std;

// // inverted pyramid code 
// int main()
// {
//     int row;
//     cin>>row;
   
//     for(int r=row ; r>=1 ; r--){
//       for(int c=1; c<=r; c++){
//         cout<<"*";
//       }
           
        
//         cout<<endl;
//     }
//     return 0;
// }


// programme to print inverted pyramid
// int main(){
//     int n;
//     cout<<"enter the value\n";
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for (int j=1; j<=i ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout <<"enter the value\n";
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i;j++){
//             cout<<"*";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


 //programme to print pyramid 

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"enter the value for pyramid\n";
//     int n;
//     cin>>n;
//     for(int i=1; i<=n ;i++){
//         for (int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// // programme to print half pyramid with digits
// int main(){
//     int n ;
//     cout <<"enter the value\n";
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//             cout<<i<<" ";
//         }cout<<endl;
//     }
//     return 0;
    
// }


// // WAP for floyds triangle
// int main (){
//     int n;
//     cout<<"enter value of n";
//     cin>>n;
//     int counting=1;
    
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<counting<<" ";
           
//             counting++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//write a programme that displays buttrefly pattern
//    *      *
//    **    **                                              [rows  : 1 to n         ]       :
//    ***  ***              this pattern is for =>  n=4     [*     : row no._       ]       :  all these are for upper pattern and not for the lower pattern
//    ********                                              [space : 2*n - 2*row no.]       :
//    ********
//    ***  ***
//    **    **              we need to type the same code for lower portion as we did for the above portion but with few changes
//    *      *

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for (int j=1; j<=space; j++){
            cout<<" ";
            
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        
        }
        cout<<endl;
    }
    
    for (int i=n; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for (int j=1; j<=space; j++){
            cout<<" ";
            
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        
        }
        cout<<endl;
    }
}



















