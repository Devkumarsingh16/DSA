#include<iostream>
using namespace std;

int getMin(int arr[],int n){

    int min = INT32_MAX;

    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;

}

int getMax(int arr[],int n){

    int max = INT32_MIN;

    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;

}

int main(){

int size;
cin>>size;

int num[100];

for(int i=0;i<size;i++){
    cin>>num[i];
}


cout<<"maximum value is : "<<getMax(num,size)<<endl;
cout<<"manimum value is : "<<getMin(num,size)<<endl;

return 0;

}

                           // or same method usig prebuilt function



#include<iostream>
using namespace std;

int getMin(int arr[],int n){

    int mini = INT32_MAX;

    for(int i=0;i<n;i++){

        mini = min(mini,arr[i]);
        // if (arr[i]<min){
        //     min = arr[i];
        // }
    }
    return mini;

}

int getMax(int arr[],int n){

    int maxi = INT32_MIN;
    
    for(int i=0;i<n;i++){
    maxi = max(maxi , arr[i]);

    // for(int i=0;i<n;i++){
    // //     if (arr[i]>max){
    // //         max = arr[i];
    // //     }
    // }
}
    return maxi;

}

int main(){

int size;
cin>>size;

int num[100];

for(int i=0;i<size;i++){
    cin>>num[i];
}

cout<<"maximum value is : "<<getMax(num,size)<<endl;
cout<<"manimum value is : "<<getMin(num,size)<<endl;

return 0;

}
