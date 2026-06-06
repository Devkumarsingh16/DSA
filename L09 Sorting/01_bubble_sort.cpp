#include<iostream>
using namespace std;

int main(){

    int arr[5] = {29,72,98,13,87};

    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
