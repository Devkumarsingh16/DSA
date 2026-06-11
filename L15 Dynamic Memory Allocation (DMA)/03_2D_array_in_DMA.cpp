#include <iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter number of row : ";
    cin >> n ;

    // creation 2D array

    int** arr = new int*[n];   // we create array int* type of
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
      }

        // taking input in 2D
    cout <<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
          //taking output

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

                          // Topic: 3row and 4 column

#include <iostream>
using namespace std;

int main(){

    cout<<" Enter number of row : ";
  int row;
  cin >> row;

  
    cout<<" Enter number of col : ";
  int col;
  cin >> col;

    // creation 2D array

    int** arr = new int*[row];   // we create array int* type of
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

        // taking input in 2D
    cout <<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }
          //taking output

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
        
    }

    // release the memory

     for(int i = 0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;

    return 0;
}
