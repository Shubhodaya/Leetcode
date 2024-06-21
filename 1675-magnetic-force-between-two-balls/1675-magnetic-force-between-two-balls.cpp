class Solution {

public:
    int f(int d, vector<int>& p, int m) {

        int c = 1;
        int b = p[0];
        for (int i = 1; i < p.size(); i++) {
            while (i < p.size() && (p[i] - b) < d) {
                i++;
            }
            if (i > p.size())
                break;
            ;

            if (i < p.size() && p[i] - b >= d) {
                b = p[i];
                c++;
            }
        }

        if (c >= m)
            return 1;
        else
            return 0;
    }

    int maxDistance(vector<int>& p, int m) {

        sort(p.begin(), p.end());
        int n = p.size();

        int r = (p[n - 1] - p[0]) / (m - 1);
        int l = 1;
        int ans = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (f(mid, p, m)) {
                ans = max(ans, mid);
                l = mid + 1;

            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};