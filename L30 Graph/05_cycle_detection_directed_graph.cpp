                                 // cycle detection in directed graph using DFS
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


bool checkcycle(int node, vector<vector<int>> &adj,vector<bool>&visited, vector<bool>&path){

    visited[node] = 1;
    path[node] = 1;

    // neighbour
  for(int j = 0 ; j < adj[node].size();j++){

    if(path[adj[node][j]]){
        return 1;
    }

    else{

       if(visited[adj[node][j]]){
        continue;
       }

       if(checkcycle(adj[node][j],adj,visited,path)){
        return 1;
       }
    }
  }
  path[node] = 0;
  return 0;
}
bool detectcycle(int V, vector<vector<int>>&edges){
      vector<vector<int>> adj(V);

      for(int i = 0; i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
      }

       vector<bool> visited(V, 0); // check is node visited or not
       vector<bool> path(V,0);  // here path check node it come before or not

      for(int i = 0; i<V;i++){

        if(!visited[i] && checkcycle(i,adj,path,visited)){
            return 1;
        }
        }
        return 0;
      }

                                        // cycle detection in directed graph using BFS

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool detectcycle(int V, vector<vector<int>> &edges){

    vector<vector<int>> adj(V);

    for(int i = 0; i<edges.size();i++){

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);

    }

    vector<int>indegree(V,0);

    for(int i = 0;i<V;i++){

        for(int j = 0;j<adj[i].size();i++){

            indegree[adj[i][j]]++;
        }
    }

    queue<int>q;
    for(int i = 0;i<V;i++){

        if(indegree[i]== 0){
            q.push(i);

        }
    }

    vector<int> ans;
    while(!q.empty()){

        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(int j = 0; j<adj[node].size();j++){
            
            indegree[adj[node][j]]--;

            if( indegree[adj[node][j]] == 0){
                q.push(adj[node][j]);
            }
        }
    }
   
    int count = ans.size();
    return count != V;        // means in ans not all node present means cycle is present that's why ans. size not equal to all vertices(node)

}
