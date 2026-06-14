#include<iostream>
using namespace std;

void print(int arr[],int start,int end){
    for(int i = start; i<=end; i++){
        cout<<arr[i] << " " ;
    }
    cout<<endl;
}

bool binarySearch(int arr[],int start,int end,int key){
    cout << endl;
    print(arr,start,end);


    // Base case
    if(start > end){
        return false;
    }

    int mid = start + (end-start)/2;

    if(arr[mid] == key){
        return true;
    }


    if(arr[mid] < key){
        binarySearch(arr,mid+1,end,key);
    }
    else{
        binarySearch(arr,start,mid-1,key);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 10;

    cout << "Present or not : " << binarySearch(arr,0,5,key) << endl;

    return 0;
}
