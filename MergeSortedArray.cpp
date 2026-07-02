class Solution {
public:
    int nextGap(int gap) {
        if (gap <= 1) return 0;
        return (gap / 2) + (gap % 2);
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Copy nums2 into nums1
        for (int i = 0; i < n; i++)
            nums1[m + i] = nums2[i];

        int len = m + n;

        for (int gap = nextGap(len); gap > 0; gap = nextGap(gap)) {

            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (nums1[left] > nums1[right])
                    swap(nums1[left], nums1[right]);

                left++;
                right++;
            }
        }
    }
};
