#include<iostream>
using namespace std;
                                     // condition it only one step at a time or two step
int nthstair(int n){

      // Base case

       if(n < 0){
        return 0;
       }

       if(n == 0){
        return 1;
       }

       //  Recursive case 

     return  nthstair(n-1) + nthstair(n-2);
}

int main(){

    int n;
    cout <<" Enter Nth stairs : ";
    cin>>n;

   int ans =  nthstair(n);
   cout << "Number of way to climb on stair is :"<< ans << endl;
}
