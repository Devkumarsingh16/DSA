#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[9] = {29,72,98,13,87,66,52,51,36};
    int n = 9;
    for(int i = 0;i<n-1;i++){
        int minidx = i;             // here i is index of minidx
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
       swap(arr[minidx],arr[i]);
    }
    cout<<"Sorted";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
