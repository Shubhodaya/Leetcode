class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;

vector<int>adj[V];

for(auto it: prerequisites){
adj[it[1]].push_back(it[0]);
}

queue<int>q;

int cnt=0;

int in[2000]={0};

for(int i=0;i<V;i++){
    for(auto it: adj[i])
    in[it]++;
}

for(int i=0;i<V;i++)
if(!in[i])q.push(i);

while(!q.empty()){

    int curr=q.front();
    q.pop();
    cnt++;

    for(int i=0;i<adj[curr].size();i++){
        int node=adj[curr][i];
        in[node]--;
        if(!in[node])q.push(node);
    }
}
     if(cnt==V)return 1;
     return 0;  
        
    }
};