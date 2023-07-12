class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> ans;
        vector<vector<int>> v(n);
        vector<int> outdegree(n), safe(n);
        queue<int> q;

        for (int i=0; i<n; i++)
        {
            for (auto it : graph[i]) v[it].push_back(i);
            outdegree[i] = graph[i].size();
            if (outdegree[i] == 0) q.push(i);
        }

        while(q.size())
        {
            int u = q.front();
            q.pop();
            safe[u] = 1;
            for (auto it : v[u]) if (--outdegree[it] == 0) q.push(it);
        }

        for (int i=0; i<n; ++i) if (safe[i]) ans.push_back(i);
        return ans;
 }
};
