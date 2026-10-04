                          // Topic : Graph representation
                          //1. Adjacency Matrix
                          //1(a) undirected unweighted graph

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<bool> >Adjmat(vertex, vector<bool>(vertex,0));

   int u,v;
   for(int i = 0; i< edges;i++){
    cin>>u>>v;
    Adjmat[u][v] = 1;
    Adjmat[v][u] = 1;
   }

   for(int i = 0; i< vertex;i++){
    for(int j = 0; j<vertex;j++){
        cout<<Adjmat[i][j]<<" ";
        
    }
    cout<<endl;
   }
}

                         //1(b) undirected weighted graph

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int> >Adjmat(vertex, vector<int>(vertex,0));

   int u,v,weight;
   for(int i = 0; i< edges;i++){
    cin>>u>>v>>weight;
    Adjmat[u][v] = weight;
    Adjmat[v][u] = weight;
   }

   for(int i = 0; i< vertex;i++){
    for(int j = 0; j<vertex;j++){
        cout<<Adjmat[i][j]<<" ";
        
    }
    cout<<endl;
   }
}

                          //1(c) directed graph

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<bool> >Adjmat(vertex, vector<bool>(vertex,0));

   int u,v;
   for(int i = 0; i< edges;i++){
    cin>>u>>v;
    Adjmat[u][v] = 1;
   }

   for(int i = 0; i< vertex;i++){
    for(int j = 0; j<vertex;j++){
        cout<<Adjmat[i][j]<<" ";
        
    }
    cout<<endl;
   }
}

                                  //      2. Adjacency List
                                  //    2(a). undirected unweight graph
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<int>Adjlist[vertex];

   int u,v;
   for(int i = 0; i< edges;i++){
    cin>>u>>v;
    Adjlist[u].push_back(v);
    Adjlist[v].push_back(u); 
   }

   // print the list
   for(int i = 0; i< vertex;i++){

    cout<<i<< " ->";
    for(int j = 0; j < Adjlist[i].size();j++){
        cout<<Adjlist[i][j]<<" ";
        
    }
    cout<<endl;
   }
}

                                      //  2(a). undirected weight graph

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<pair<int,int>>Adjlist[vertex];

   int u,v,weight;
   for(int i = 0; i< edges;i++){
    cin>>u>>v>>weight;
    Adjlist[u].push_back(make_pair(v,weight));
    Adjlist[v].push_back(make_pair(u,weight)); 
   }

   // print the list
   for(int i = 0; i< vertex;i++){

    cout<<i<< " ->";
    for(int j = 0; j < Adjlist[i].size();j++){
        cout<<Adjlist[i][j].first<<" "<<Adjlist[i][j].second<<" ";
        
    }
    cout<<endl;
   }
}
