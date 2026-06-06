/*Q1*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<"*";
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }

// }

/*Q2*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<i;
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }
// }

/*Q3*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j<<" ";
//             j = j+1;
//         } 
//         cout<<endl;
//         i = i+1;
//     }

// }
                              //reverse of abvove question//

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){              
//             cout<<n-j+1<<" ";        /*here using n-j+1*/
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }

// }

// /*Q4*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count;
            count = count+1;
            j = j+1;
        }
        cout<< endl;
        i = i+1;
    }
}


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     int count = n;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<count;
//             count = count-1;
//             j = j+1;
//         }
//         cout<< endl;
//         i = i+1;
//     }
// }



