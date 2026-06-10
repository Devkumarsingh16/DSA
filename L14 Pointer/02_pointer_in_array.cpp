#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,4,6,7};

    cout << "address of the first location is " << arr <<endl;        // adddres find in normal way
    cout << "address of the first location is " << arr[0] <<endl;

    cout << "address of the first location is " << &arr[0] <<endl;    /// address find using pointer

    cout  << *arr <<endl;                                            // it give value of that first array location
    cout  << *arr+1 <<endl; 
    cout  << *(arr+1) <<endl; 
    cout  << (*arr)+1 <<endl;
    cout  << arr[2] <<endl;
    cout  << *(arr+2) <<endl;

    return 0;
}

                                    // Another example
#include<iostream>
using namespace std;

int main(){

    int temp[10] = {1,2,3};
    cout << "size of temp : " << sizeof(temp) << endl;
    cout <<"size of *tem :" << sizeof(*temp) <<endl;
    cout << "size of &temp : " <<sizeof(&temp) <<endl;

    int *ptr = &temp[0];
    cout << "size of ptr " << sizeof(ptr) <<endl;
    cout <<"size of *ptr :" << sizeof(*ptr) <<endl;
    cout << "size of &ptr : " <<sizeof(&ptr) <<endl;

                                                     // New concept
    int arr[20] = {2,3,4,5};

    cout << "-> " << &arr[0] << endl;

    int *p = &arr[0];

    cout <<" -> " << &p << endl;
                                                   // New concept
    int arr[10] = {1,2,3};

    // arr = arr+1;      // it gives error because u can't change array address

    int *ptr = &arr[0];
    cout << ptr <<endl; 
    ptr = ptr+1;            // in pointer case it will run (it increase 4 bit as integer case)
    cout << ptr <<endl;             


    return 0;
}
