class Solution {

    int f(int num1, int num2){

        if( num1==num2)return 1;
int n1=max(num1,num2);
int n2= min(num1,num2);
        string s1=to_string(n1);
        // string s2=to_string(num2);

        for( int i=0;i<s1.size();i++){
            for( int j=i+1;j<s1.size();j++){
                swap(s1[i],s1[j]);
                if( stoi(s1)==n2)return 1;
                 swap(s1[i],s1[j]);
            }
        }

return 0;

    }
public:
    int countPairs(vector<int>& nums) {
        int c=0;

int n= nums.size();
        for ( int i=0;i<n;i++){
            for( int j=i+1;j<n;j++){
if (f(nums[i],nums[j])){cout<<nums[i]<<" "<<nums[j]<<endl;c++;}

            }
        }
        return c;
        
    }
};