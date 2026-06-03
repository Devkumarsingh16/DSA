#include<iostream>
using namespace std;
 

int firstocc(int arr[],int size,int key){

    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;
     int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
        ans = mid;
         e = mid-1;
        }
        else if(key>arr[mid]){
            s  = mid+1;
        }
        else if(key<arr[mid]){
            s = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int lastocc(int arr[],int size,int key){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
         s = mid+1;
        }
        else if(key>arr[mid]){
            s  = mid+1;
        }
        else if(key<arr[mid]){
            s = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}

int main(){
    int num[8] = {0,0,1,1,2,2,2,2};

    cout<<"first occurance of element at index : "<< firstocc(num,8,2)<<endl;
    
    cout<<"last occurance of element at index : "<< lastocc(num,8,2)<<endl;

}
