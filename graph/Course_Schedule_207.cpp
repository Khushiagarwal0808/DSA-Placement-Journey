// LeetCode 207 - Course Schedule
// Approach: Topological Sort (Kahn's Algorithm - BFS)
// Time: O(V + E)
// Space: O(V + E)
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        // Step 1: Build graph
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]); // b -> a
            indegree[p[0]]++;
        }

        // Step 2: Push nodes with indegree 0
        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 3: BFS
        int count = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;

            for (auto neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Step 4: Check
        return count == numCourses;
    }
};
