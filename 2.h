class Solution {
public:
    /**
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        long long res = 0;
        long long cmp = 5;
        while (cmp <= n)
        {
            res += n / cmp;
            cmp *= 5;
        }

        return res;
    }
};