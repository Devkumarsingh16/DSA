#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {

        vector<int> dist(V, 1e8);
        dist[src] = 0;

        for(int i = 0; i < V - 1; i++) {

            // Relax all edges
            int flag = 0;

            for(int j = 0; j < edges.size(); j++) {

                int u = edges[j][0];
                int v = edges[j][1];
                int w = edges[j][2];

                if(dist[u] == 1e8) {
                    continue;
                }

                if(dist[u] + w < dist[v]) {

                    dist[v] = dist[u] + w;
                    flag = 1;
                }
            }

            if(flag == 0) {
                return dist;
            }
        }

        // Negative cycle detect
        for(int j = 0; j < edges.size(); j++) {

            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(dist[u] == 1e8) {
                continue;
            }

            if(dist[u] + w < dist[v]) {

                vector<int> ans;
                ans.push_back(-1);
                return ans;
            }
        }

        return dist;
    }
};
