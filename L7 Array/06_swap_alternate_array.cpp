#include<iostream>
using namespace std;

int main(){
    int arr[6] = {5,3,8,4,1,8};
    int n = 6;

    for(int i = 0;i<n;i = i+2){
        if(i+1<n){
           swap(arr[i],arr[i+1]);
        }
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
   

    return 0;

}
