class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Create adjacency list
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        
        for (auto& pair : prerequisites) {
            int u = pair[1], v = pair[0]; // u → v
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (indegree[i] == 0)
                q.push(i);
        }

        int count = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;

            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0)
                    q.push(neighbor);
            }
        }

        return count == numCourses;
    }
};
