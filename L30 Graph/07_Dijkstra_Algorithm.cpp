
//                                           // Suitable for sparse graph    here we use priority graph or min heap
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Adjacency list
        vector<vector<pair<int,int>>> adj(V);
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];
            adj[u].push_back({v, weight});
            adj[v].push_back({u, weight});
        }

        vector<int> dist(V, INT_MAX);
        vector<int> explored(V, 0);

        // {distance, node}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;  // here i use priority queue for min heap because it will give min distance node
        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty()) {
            int distance = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(explored[node] == 1) {
                continue;
            }
            explored[node] = 1;

            // Current node ke saare neighbours check karo
            for(int j = 0; j < adj[node].size(); j++) {
                int neighbour = adj[node][j].first;
                int weight = adj[node][j].second;

                if(!explored[neighbour] && dist[node] + weight < dist[neighbour]) {
                    dist[neighbour] = dist[node] + weight;
                    pq.push({dist[neighbour], neighbour});
                }
            }
        }
        return dist;
    }
};
// Time complexity: ElogE

                                       // suitable for dense graph  here we use array or matrix multiplication
#include<iostream>
#include<bits/stdc++.h>
using namespace std;  

class Solution { 
public: 
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) { 
 
        // Adjacency list 
        vector<vector<pair<int,int>>> adj(V); 
 
        for(int i = 0; i < edges.size(); i++) { 
 
            int u = edges[i][0]; 
            int v = edges[i][1]; 
            int weight = edges[i][2]; 
 
            adj[u].push_back({v, weight}); 
            adj[v].push_back({u, weight}); 
        } 
 
        vector<int> explore(V, 0); 
        vector<int> dist(V, INT_MAX); 
 
        dist[src] = 0; 
 
        int count = V; 
 
        while(count--) { 
 
            // Find node having minimum distance 
            int node = -1; 
            int value = INT_MAX; 
 
            for(int i = 0; i < V; i++) { 
 
                if(!explore[i] && value > dist[i]) { 
                    node = i; 
                    value = dist[i]; 
                } 
            } 
 
            // No reachable node left 
            if(node == -1) 
                break; 
 
            explore[node] = 1; 
 
            // Relax the node 
            for(int j = 0; j < adj[node].size(); j++) { 
 
                int neighbour = adj[node][j].first; 
                int weight = adj[node][j].second; 
 
                if(!explore[neighbour] && 
                   dist[node] + weight < dist[neighbour]) { 
 
                    dist[neighbour] = dist[node] + weight; 
                } 
            } 
        } 
 
        return dist; 
    } 
};   
    // Time complexity : V*V = v square
