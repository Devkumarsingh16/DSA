#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"the value of n is :"<<n<<endl;
    if(n>0){
        cout<<" n is postive";
    }
    else{
        cout<<"n is negative";
    }
}

/*H.W */
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<< ch <<" "<<" is lowercase";

    }
   else if(ch>='A'&& ch<='Z')
   {
    cout<< ch <<" "<< "is uppercase";
   }
   else if(ch>='0' && ch<='9')
   {
    cout<<ch <<" "<<"is digit";
   }
   else{
    cout<<"wrong choise";
   }

 
}
                                /* while concept*/
                    // Example
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<i <<" ";
        i = i+1;
    }
}
              // Example
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0; int i = 1;
    while(i<=n){
        sum = sum+i;
        i = i+1;
    
    }
    cout<<sum;
}
 
            // Example
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"prime" <<endl;
            break;
        }
        i = i+1;
    }
    return 0;
}
