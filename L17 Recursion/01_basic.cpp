                                // Topic:find factorial

#include<iostream>
using namespace std;

 int factorial(int n){

        if(n == 0){     //  -> base case
        return 1;
        }

        // recursive relation
        int smallproblem = factorial(n-1);
        int biggerproblem = n*smallproblem;

                         // or
        // return n * factorial(n-1);   // -> recursive function
        return biggerproblem;

    }
int main(){
 
    cout <<" Enter any number : ";

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of number is : "<<ans << endl;

    return 0;


}

                           // Topic:Find two the power n;


#include<iostream>
using namespace std;

 int power(int n){

        if(n == 0){     //  -> base case
        return 1;
        }
        // recursive relation
        int smallproblem = power(n-1);
        int biggerproblem = 2*smallproblem;

                         // or
        // return n * factorial(n-1);   // -> recursive function
        return biggerproblem;

    }
int main(){
 
    cout <<" Enter any number : ";

    int n;
    cin >> n;

    int ans = power(n);

    cout << "power of number is : "<<ans << endl;

    return 0;
}

                                // Topic : print counting

#include<iostream>
using namespace std;

 void print(int n){

        if(n == 0) {   //  -> base case
        return ;
        }
           
        cout<< n <<" "<<endl;

        // recursive relation
       print(n-1);

    }
int main(){
 
    cout <<" Enter any number : ";

    int n;
    cin >> n;

    cout<<endl;

  print(n);

    return 0;

}
