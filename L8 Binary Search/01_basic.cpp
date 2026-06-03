#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){


    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = (start+end)/2;
       
    }
    return -1;
}

int main(){

    int even[6] = {4,2,7,5,9,6};
    int odd[5] = {2,6,4,1,9};

    int index = binarysearch(even,6,9);
    cout<<"index of 9 is : "<<index<<endl;

    int oddindex = binarysearch(odd,5,2);
    cout<<"index of 2 is : "<<oddindex;

}
