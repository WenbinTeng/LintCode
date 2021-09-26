#include <vector>

class Solution {
public:
    /**
     * @param k: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    int kthLargestElement(int k, std::vector<int> &nums) {
        return partition(nums, 0, nums.size() - 1, nums.size() - k);
    }

private:
    int partition(std::vector<int> &nums, int s, int e, int k)
    {
        int l = s;
        int r = e;
        int pivot = nums[s];

        while (l <= r)
        {
            while (l <= r && nums[l] < pivot)
            {
                l++;
            }
            while (l <= r && nums[r] > pivot)
            {
                r--;
            }
            if (l <= r)
            {
                std::swap(nums[l], nums[r]);
                l++;
                r--;
            }
        }

        if (k <= r) return partition(nums, s, r, k);
        if (k >= l) return partition(nums, l, e, k);

        return nums[k];
    }
};