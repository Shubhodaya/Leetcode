class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int n = hand.size();

        if (n % g)
            return false;

        int ng = n / g;

        sort(hand.begin(), hand.end());

        vector<vector<int>>v(ng);

        for (int i = 0; i < n; i++) {
            int ele = hand[i];

            int f = 0;
            for (int j = 0; j < ng; j++) {

                if (v[j].size() >= g)
                    continue;

                if (v[j].size()) {
                    if ((v[j].back() + 1) == ele) {
                        v[j].push_back(ele);
                        f = 1;
                        break;
                    }

                } else {
                    v[j].push_back(ele);
                    f = 1;
                    break;
                }
            }

            if(f==0)return false;
        }

        return true;
    }
};