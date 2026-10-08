//                                                 // check bipartite graph by BFS
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isBipartite(int V, vector<int> adj[]){

    vector<int> color(V,-1);

    queue<int> q;

    for(int i =  0 ; i < V ; i++){

        if(color[i] == -1){

            q.push(i);
            color[i] = 0;

            while(!q.empty()){

                int node = q.front();
                q.pop();

                for(int j = 0; j<adj[node].size();i++){

                    // case 1:color not assign to them

                    if(color[adj[node][j]] == -1){

                        color[adj[node][j]] = (color[node] + 1)%2;
                        q.push(adj[node][j]);
                    }
                    // case 2: color assign them

                    if(color[adj[node][j]] == color[node]){
                        return  0;

                    }

                }
            }
            
        }
    }
    return 1; // means graph bipartite hai
}

//Time complexity: v+E;
//space complexity:V;
                                          
 
                                                // check bipartite graph by DFS
#include <bits/stdc++.h>
using namespace std;

bool checkBipartite(int node, vector<int> adj[], vector<int>& color) {

    // Look at neighbours
    for (int j = 0; j < adj[node].size(); j++) {

        int neighbour = adj[node][j];

        // Colour not assigned
        if (color[neighbour] == -1) {

            // Assign opposite colour
            color[neighbour] = (color[node] + 1) % 2;

            if (checkBipartite(neighbour, adj, color) == 0) {
                return 0;
            }
        }

        // Colour already assigned
        else {
            if (color[neighbour] == color[node]) {
                return 0;
            }
        }
    }

    return 1;
}

bool isBipartite(int V, vector<int> adj[]) {

    vector<int> color(V, -1);

    for (int i = 0; i < V; i++) {

        if (color[i] == -1) {

            color[i] = 0;

            if (checkBipartite(i, adj, color) == 0) {
                return false;
            }
        }
    }

    return true;
}
