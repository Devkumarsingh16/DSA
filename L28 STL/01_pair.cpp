#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

                                       // When two parameter pass
    pair<string,int> p;

    // Two method to put value in pair
    // 1st method
    p = make_pair("Dev",30);

    // 2nd method
    p.first = "Dev";
    p.second = 30;

    cout<<p.first <<" " << p.second << endl;

                                       // When three parameter pass
        pair<string, pair<int,int>> p;

        // // Two method to put value in pair
        // // 1st method
        p = make_pair("Dev",make_pair(30,80));

        // // 2nd method
        p.first = "Dev";
        p.second.first = 30;
        p.second.second = 80;

        cout<< p.first <<" " << p.second.first << " " << p.second.second << endl;

        return 0;
}
