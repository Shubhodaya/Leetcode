class Solution {

public:

void  func(int i,vector<int>& candidates, int target,vector<vector<int>>&ds,vector<int>&temp){

// if(target==0){
//     ds.push_back(temp);
//     // while(temp.size()!=0)temp.pop_back();
//     return;
// }

// if(i<0)return;

// if(candidates[i]<=target){
//     temp.push_back(candidates[i]);
//     return func(i,candidates,target-candidates[i],ds,temp);
//     temp.pop_back();


// }

// return func(i-1,candidates,target,ds,temp);




       if (target == 0) {
            ds.push_back(temp);
            return;
        }

        if (i < 0 ) {
            // if (target == 0) 
            // ds.push_back(temp);
            return;
        // No need to proceed with this branch
        }

       if(target>=candidates[i]){

 temp.push_back(candidates[i]);
        func(i, candidates, target - candidates[i], ds, temp);
        temp.pop_back();  
       } // Include the current candidate
       

        // Exclude the current candidate
        func(i - 1, candidates, target, ds, temp);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ds;
        vector<int>temp;
        func(candidates.size()-1,candidates,target,ds,temp);

        return ds;
    }
};