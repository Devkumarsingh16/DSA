                                                                // By DFS
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 void DFS(int node, vector<vector<int>>& adj,
             vector<bool>& visited, stack<int>& s) {

        visited[node] = 1;

        // look at neighbours
        for(int j = 0; j < adj[node].size(); j++) {

            int neighbour = adj[node][j];

            if(!visited[neighbour]) {
                DFS(neighbour, adj, visited, s);
            }
        }

        // node ko stack me push karo
        s.push(node);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        // adjacency list
        vector<vector<int>> adj(V);

        for(int i = 0; i < edges.size(); i++) {

            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
        }

        vector<bool> visited(V, 0);
        stack<int> s;

        // DFS for every vertex
        for(int i = 0; i < V; i++) {

            if(!visited[i]) {
                DFS(i, adj, visited, s);
            }
        }

        // stack se answer nikalo
        vector<int> ans;

        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
                                                               // By BFS(using Kahn's Algorithm)

#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<vector<int>>& edges) {

    // 1. Adjacency List
    vector<vector<int>> adj(V);

    for(int i = 0; i < edges.size(); i++) {

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // 2. Indegree calculate karo
    vector<int> InDegree(V, 0);

    for(int i = 0; i < V; i++) {

        for(int j = 0; j < adj[i].size(); j++) {

            InDegree[adj[i][j]]++;
        }
    }

    // 3. Jinka indegree 0 hai unko queue mein daalo
    queue<int> q;

    for(int i = 0; i < V; i++) {

        if(InDegree[i] == 0) {
            q.push(i);
        }
    }

    // 4. BFS
    vector<int> ans;

    while(!q.empty()) {

        int node = q.front();
        q.pop();

        ans.push_back(node);

        // node ke neighbours
        for(int j = 0; j < adj[node].size(); j++) {

            int neighbour = adj[node][j];

            InDegree[neighbour]--;

            // indegree 0 ho gaya
            if(InDegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    return ans;
}
