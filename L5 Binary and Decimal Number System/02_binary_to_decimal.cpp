#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = 0, power = 1;

    while(n!=0){

            int data = n%10;

            ans = ans +  data *power;
            power = power*2;
            n = n/10;
                

    }
    cout<<ans<<endl;

}
