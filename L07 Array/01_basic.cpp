                     // Example:1
#include<iostream>
using namespace std;

int main(){

int arr[5] = {9,8,7,6,4};

cout<<arr[3];


}

                    // Example:2
#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,7};
    
    int n = 10;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
}

                       // Example:3
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

   int arr[9] = {0,2,2,1,0,1,1,0,2};

   int n = 9;

      sort(arr, arr + n);

      for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
      }
      return 0;

}
