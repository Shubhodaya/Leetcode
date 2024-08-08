class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(tasks.size()==0)return 0;

        unordered_map<char,int>mp;
        for(auto it: tasks)mp[it]++;
priority_queue<int>pq;
        for(auto it: mp)pq.push(it.second);
        int ans=0;
int t;
        while(!pq.empty()){

            vector<int>temp;
 t=0;
            for( int i=1;i<=n+1;i++){
                 
                 if(!pq.empty()){
                 int f= pq.top();
                 f--;
                 t++;
                 pq.pop();
                 if(f>0)temp.push_back(f);
                 }
            }

            for(int i=0;i<temp.size();i++)pq.push(temp[i]);

            if(pq.empty())ans+=t;
            else ans += n+1;

        }

        return ans;
        
    }
};