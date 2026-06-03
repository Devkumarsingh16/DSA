                //  only integer part means 37 = 6.27 then we only return 6
#include<iostream>
using namespace std;
    int binarysearch(int x){
       
    int s = 0;
    int e = x;
    int mid = s + (e-s)/2;

  int ans = -1;

    while(s<=e){

        int square = mid*mid;
        if(square == x){
            return mid;
        }
        else if(square<x){
            ans = mid;
            s = mid+1;
        }
        else if(square>x){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
    }

    int main(){
        int x;
        cout <<" Enter value of x: ";
        cin>>x;

        int res = binarysearch(x);
        cout<<res;

    };



                   //  means 37 = 6.27 then we only return 6.27
#include<iostream>
using namespace std;
    int binarysearch(int x){
       
    int s = 0;
    int e = x;
    int mid = s + (e-s)/2;

  int ans = -1;

    while(s<=e){

        int square = mid*mid;
        if(square == x){
            return mid;
        }
        else if(square<x){
            ans = mid;
            s = mid+1;
        }
        else if(square>x){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
double moreprecision(int x,int size,int res){
        double factor = 1;
        double ans = res;

        for(int i = 0;i<size;i++){
            factor = factor/10;

            for(double j = ans;j*j<x;j = j+factor){
                ans = j;
            }
        }
        return ans;
}

    int main(){
        int x;
        cout <<" Enter value of x: ";
        cin>>x;

        int res = binarysearch(x);
        cout<<"ans"<<moreprecision(x,3,res);     // 3 indicate kitna digit tak chahiye
    return 0;
    
    };
