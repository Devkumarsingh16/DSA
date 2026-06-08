                               // Topic: add row wise

#include<iostream>
using namespace std;

void PrintSum(int arr[][3],int i,int j){
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        cout<< sum <<" ";
    }
    cout<<endl;

}

int main(){

    int arr[3][3];

    cout<<"Enter array element"<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Sum of array in row wise"<<endl;
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    PrintSum(arr,3,3);
}

                                    // Topic: Largest row sum

#include<iostream>
using namespace std;

void PrintSum(int arr[][3],int i,int j){
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        cout<< sum <<" ";
    }
    cout<<endl;

}

 int largestRowSum(int arr[][3],int i,int j){

    int maxi = INT16_MIN;
    int rowIndex = -1;

     for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum >maxi){
            maxi = sum;
            rowIndex = i;
        }
    }

     cout<<"the maximum sum is : "<< maxi<<endl;
     return rowIndex;

}

int main(){

    int arr[3][3];

    cout<<"Enter array element"<<endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Sum of array in row wise"<<endl;
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

     int ansIndex = largestRowSum(arr,3,3);
     cout<<"Max row is at index : "<<ansIndex;

    return 0;
}
