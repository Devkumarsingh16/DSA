
#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start<end){
       swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int num[],int n){
    for(int i = 0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;    
}

int main(){

int arr[6] = {3,4,5,67,8,7};
int brr[5] = {9,8,7,6,5};

reverse(arr,6);
reverse(brr,5);

printarray(arr,6);
printarray(brr,5);
return 0;

}
