#include <iostream>
using namespace std;

int print(int *p){
    cout << *p <<endl;
}

int main(){

    int value = 5;
    int *p = &value;

    print(p);

    return  0;
}

                                   // Topic: updating the value 
#include <iostream>
using namespace std;

int update(int *p){
    *p = *p+1;                 
}

int main(){

    int value = 5;
    int *p = &value;

  cout << "before : " << *p <<endl;
  update(p);
   cout << "after : " << *p <<endl;


    return  0;

    //Note: we can only update value but we can't update address in pointr in function
}
                            
                            // Topic: array in function
#include <iostream>
using namespace std;

int getSum(int arr[],int n){                            // in the place of arr[] we can also use *arr (this is same thing)
    cout<<"size of array : "<<sizeof(arr) <<endl;

    int sum = 0;

    for(int i = 0; i<n ;i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){

    int arr[5] = {1,2,3,4,5};

    cout << "sum is : " << getSum(arr,5);

    return 0;

     //Note: whenever we pass an array in function it is not pass array but it is passs of pointer
}
