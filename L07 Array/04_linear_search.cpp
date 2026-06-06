                        //check key is present or absent

#include<iostream>
using namespace std;

bool search(int num[],int size,int key){

    for(int i=0;i<size;i++){

    if(num[i]==key){
        return 1;

    }
}
return 0;
}

int main(){

    int arr[10] = {7,8,9,6,5,4,1,2,3,55};

    int key;
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    return 0;
}


                    // key present at index

// #include<iostream>
// using namespace std;

// int search(int num[],int size,int key){

//     for(int i=0;i<size;i++){

//     if(num[i]==key){
//         return i;

//     }
// }
// return -1;
// }

// int main(){

//     int arr[10] = {7,8,9,6,5,4,1,2,3,55};

//     cout<<"Enter the key to be search : ";
//     int key;
//     cin>>key;

//     int index = search(arr,10,key);
//     if(index !=-1){
//         cout<<"key is present at index : "<<index<<endl;
//     }
//     else{
//         cout<<"key is absent"<<endl;
//     }
//     return 0;
// }
