#include<iostream>
#include<vector>
using namespace std ;

void merge(int arr[],int st,int mid,int end){
    vector <int> temp; // make temporary storage
    int i = st, j = mid+1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;

        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;

    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx< temp.size(); idx++){
        arr[idx + st] = temp[idx];

    }
}

void mergeSort(int arr[],int st,int end){
   // base case
    if(st >= end){
        return;

    }

    int mid = st + (end-st)/2;

    mergeSort(arr,st,mid); // left part
    mergeSort(arr,mid+1,end); // right part

    merge(arr,st,mid,end);
}

int main(){

    int arr[6] = {12, 31, 35, 8, 32, 17};
    int size = 6;

    mergeSort(arr,0,size-1);

    for(int i = 0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}
