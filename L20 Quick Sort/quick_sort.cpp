#include<iostream>
using namespace std;

int  partition(int arr[],int st, int end){
    int pivot = arr[st];

    int count = 0;

    for(int i = st+1; i<=end;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // place pivot at right place

    int pivotIdx = st + count;
    swap(arr[pivotIdx],arr[st]);

    // now manage left and right of pivot

    int i = st, j = end;
    while(i < pivotIdx && j > pivotIdx){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >=  pivot){
            j--;
        }
        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIdx;
}

void QuickSort(int arr[],int st,int end){

    // base case 

    if(st >= end){
        return;
    }

    int p = partition(arr,st,end);

    QuickSort(arr,st,p-1);  // left part
    QuickSort(arr,p+1,end); // right part

}

int main(){

    int arr[6] = {12, 31, 35, 8, 32, 17};
    int size = 6;

    QuickSort(arr,0,size-1);

    for(int i = 0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}
