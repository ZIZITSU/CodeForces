class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;

        for(int x: nums1) c.push_back(x);
        for(int x: nums2) c.push_back(x);

        sort(c.begin(), c.end());

        int n = c.size();
        int medi = n/2;

        if (n%2 == 1){
            return static_cast<double>(c[medi]);
        }
        else{
            return static_cast<double>((c[medi - 1] + c[medi]) / 2.0);
        }
    }
};