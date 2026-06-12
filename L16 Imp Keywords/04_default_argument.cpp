#include<iostream>
using namespace std;

void print(int arr[],int n,int start = 0){ // if start is not given then by default array start from zero index

    for(int i = start;i<n;i++){
        cout<<arr[i] <<endl;
    }
}

int main(){

    int arr[5] = {2,3,4,5,6};

    int size = 5;

    print(arr,size);   // case 1  here start is not given

    cout<< endl;

    print(arr,size,3);    // case 2  here start is given;
}
