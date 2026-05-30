#include<iostream>
using namespace std;

int main(){

    int n ,i;
    cout<<" Enter a value : ";
    cin>>n;
 
     if(n==1 || n<=0){
        cout<<n<<" "<<" is not a prime";
        }
    for( i = 2;i<n;i++){
        
         if(n%i==0){
            cout<<n <<" "<<" is not a prime number";
            break;
        }
        else{
            cout<<n<<" "<<" is prime number";
            break;
        }
    }

}
              
                //another way to do this

#include<iostream>
using namespace std;

int main(){

    int n ,i;
    cout<<" Enter a value : ";
    cin>>n;

  bool isPrime = 1;

  for(i = 2;i<n;i++){

    if(n%i==0){

    
    isPrime = 0;
    break;
    }
  }
  
   if(isPrime == 0){
    cout<<"Not a prime";

   } 
   else{
    cout<<"is a prime number";
   }

}
