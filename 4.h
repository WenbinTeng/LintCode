#include <vector>

class Solution {
public:
    /**
     * @param n: An integer
     * @return: return a  integer as description.
     */
    int nthUglyNumber(int n) {
        std::vector<long long> res(n, {1});
        int p2 = 0;
        int p3 = 0;
        int p5 = 0;

        for (int i = 1; i < n; ++i)
        {
            res[i] = std::min(res[p2] * 2, std::min(res[p3] * 3, res[p5] * 5));
            if (res[i] == res[p2] * 2) p2++;
            if (res[i] == res[p3] * 3) p3++;
            if (res[i] == res[p5] * 5) p5++;
        }

        return res[n - 1];
    }
};