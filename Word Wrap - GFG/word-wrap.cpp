//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {

public:

    // Recursive function to calculate the minimum cost of word wrapping

    int solve(vector<int> &nums, int i, int j, int k, vector<int> &dp) {

        int n = nums.size();

        

        // Base case: If there are no words to process, return 0 (no extra spaces)

        if (i > j) {

            return 0;

        }

        

        // Memoization: If this subproblem has already been solved, return its result

        if (dp[i] != -1) {

            return dp[i];

        }

        

        int ans = INT_MAX; // Initialize the answer to a large value

        int sum = 0; // Initialize the sum of word lengths

        

        // Iterate through words from index i to j

        for (int idx = i; idx <= j; idx++) {

            sum += nums[idx]; // Add the length of the current word to the sum

            

            // Case 1: If the current line is the last line

            if (sum <= k && idx == n - 1) {

                return dp[i] = 0; // No extra spaces in the last line, return 0

            }

            

            // Case 2: If the current word can fit on the current line

            if (sum <= k) {

                // Calculate the extra spaces and the cost (squared extra spaces)

                int cost = (k - sum) * (k - sum);

                

                // Recursively call solve for the remaining words (idx + 1 to j)

                int nextCost = solve(nums, idx + 1, j, k, dp);

                

                // Update the answer with the minimum cost among all possible line breaks

                ans = min(ans, cost + nextCost);

                

                sum++; // Increment to handle space between words

            }

        }

        

        // Memoization: Store the result in the dp table and return it

        return dp[i]= ans;

    }

    

    // Main function to calculate the minimum cost of word wrapping

    int solveWordWrap(vector<int> nums, int k) {

        int n = nums.size();

        vector<int> dp(n,  -1); // Initialize a memoization table

        

        // Call the solve function to calculate the minimum cost

        return solve(nums, 0, n - 1, k, dp);

    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
// } Driver Code Ends