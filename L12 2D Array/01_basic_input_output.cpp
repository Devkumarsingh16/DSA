                               // Method 1 to take input and output

#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    // taking input row wise
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // taking input column wise
    
    //  for(int i = 0;i<4;i++){
    //     for(int j = 0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    // taking output
     for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
}

                                // Method 2 taking input and ouput
#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {2,3,4,5,6,7,8,9,1,2,3,4};

    // taking output
     for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
}

                             //Method 3 if you want to put value according to me in row

#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {{2,3,4,5} , {4,5,6,7} , {8,7,6,5}};

    // taking output
     for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
