#include<iostream>
using namespace std;

int main(){
    int arr[5] = {29,12,8,10,15};
    int n = 5;

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j;

        // shifting using for loop
        for(j = i - 1; j >= 0 && arr[j] > temp; j--){
            arr[j + 1] = arr[j];
        }

        // correct position pe temp daal do
        arr[j + 1] = temp;
    }
    cout<<"Sorted: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
