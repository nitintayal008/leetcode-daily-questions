class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        vector<vector<int>> graph(n);
        for(auto v : pairs)
        {
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n,false);
        queue<int> q;
        string ans=s;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
            vector<char> connectedChars;
            vector<int> connectedIndexes;
            while(!q.empty())
            {
                int index = q.front();
                q.pop();
                connectedChars.push_back(s[index]);
                connectedIndexes.push_back(index);
                for(auto v : graph[index])
                {
                    if(!visited[v])
                    {
                        q.push(v);
                        visited[v]=true;
                    }
                }
            }
            sort(connectedChars.begin(),connectedChars.end());
            sort(connectedIndexes.begin(),connectedIndexes.end());
            for(int j=0;j<connectedIndexes.size();j++)
                ans[connectedIndexes[j]]=connectedChars[j];
        }
        return ans;
    }
};