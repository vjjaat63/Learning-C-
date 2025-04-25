#include <bits/stdc++.h>
using namespace std;

int shortestPath(vector<vector<int>> &graph, int start, int target) {
  
    queue<int> q;
    vector<int> distances(graph.size(), -1);
    vector<bool> visited(graph.size(), 0);
    
    q.push(start);
    visited[start] = true;
    distances[start] = 0;

    while (!q.empty()) {
        int current_node = q.front();
        q.pop();

        if (current_node == target) {
            return distances[current_node];
        }

        for (int neighbor : graph[current_node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                distances[neighbor] = distances[current_node] + 1;
                q.push(neighbor);
            }
        }
    }

    return -1;
}

int main() {
    int vertex,edge;
    cout<<"Enter the number of vertices : ";
    cin>>vertex;
    cout<<"Enter the number of edges : ";
    cin>>edge;
    
    vector<vector<int>> graph(vertex); 
    
    int u,v;
    for(int i = 0;i<edge;i++){
     cin>>u>>v;
     graph[u].push_back(v);
     graph[v].push_back(u); 
    }
    
    int start,target;
    cout<<"Enter starting Node : ";
    cin>>start;
    cout<<"Enter destination Node : ";
    cin>>target;
    
    int path = shortestPath(graph, start, target);
    
    if (path != -1) {
        cout << "The shortest path from node " << start << " to node " << target << " is " << path<< " edges." << endl;
    } else {
        cout << "No path exists between node " << start << " and node " << target << "." << endl;
    }

    return 0;
}

