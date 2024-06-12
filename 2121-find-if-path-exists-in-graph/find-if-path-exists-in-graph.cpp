class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>ump;
        for(auto x: edges)
        {
            // extracting first vector from edges vector
            vector<int>temp= x;
            int u = temp[0];
            int v = temp[1];

            ump[u].push_back(v);
            ump[v].push_back(u);
        }

        vector<bool>visited(n+1,false);
        queue<int>q;
        q.push(source);
        visited[source]=true;

        while(!q.empty())
        {
            int v=q.front();
            q.pop();

            vector<int>temp= ump[v];

            for(int i=0; i<temp.size();i++)
            {
                int vertax = temp[i];
                
                if(visited[vertax]==false)
                {
                    visited[vertax]=true;
                    q.push(vertax);
                }
            }
        }

        return visited[destination];
    }
};