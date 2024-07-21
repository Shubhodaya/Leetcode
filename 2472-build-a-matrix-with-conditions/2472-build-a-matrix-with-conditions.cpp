class Solution {
public:
void dfs(int nd, vector<vector<int>>&adj,vector<int>&v,vector<int>&ind,vector<int>&vis){

if(vis[nd])return;
vis[nd]=1;
    v.push_back(nd);

    for( int i=0;i<adj[nd].size();i++){
        ind[adj[nd][i]]--;
        if(ind[adj[nd][i]]==0)dfs(adj[nd][i],adj,v,ind,vis);
    }
return;

}
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& row, vector<vector<int>>& col) {

        vector<int>r;
        vector<int>c;
        vector<int>ir(k+1,0),ic(k+1,0);
        // vector<int>vr,vc;
        vector<vector<int>>v(k,vector<int>(k,0));
        vector<vector<int>>emp;


        vector<vector<int>>adjr(k+1),adjc(k+1);

        for( int i=0;i<row.size();i++){
            adjr[row[i][0]].push_back(row[i][1]);
            ir[row[i][1]]++;
        }

          for( int i=0;i<col.size();i++){
            adjc[col[i][0]].push_back(col[i][1]);
            ic[col[i][1]]++;
        }

        vector<int>vc(k+1,0),vr(k+1,0);

        for(int i=1;i<=k;i++){
            if(ir[i]==0)dfs(i,adjr,r,ir,vr);
        }
        for(int i=1;i<=k;i++){
            if(ic[i]==0)dfs(i,adjc,c,ic,vc);
        }
        //          for( int i=0;i<r.size();i++){
        //     cout<<r[i]<<" ";
        // }
        // cout<<endl;
        // for( int i=0;i<c.size();i++)cout<<c[i]<<" ";
        // cout<<endl;

        if(r.size()!=k || c.size()!=k)return emp;

unordered_map<int,int>mp;
    for( int i=0;i<c.size();i++)mp[c[i]]=i;
        for( int i=0;i<r.size();i++){
            v[i][mp[r[i]]]=r[i];
        }



    return v;
    }
};