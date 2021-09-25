class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        int res = 0;

        for (int i = 0; i <= n; ++i)
        {
            if (i % 10 == k) ++res;
            
            for (int j = i / 10; j != 0; j /= 10)
            {
                if (j % 10 == k) ++res;
            }
        }

        return res;
    }
};