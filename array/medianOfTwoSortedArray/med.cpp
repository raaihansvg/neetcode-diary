#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // bikinn array
        vector<int> gabung;

        for(int i = 0; i < nums1.size(); i ++){
            gabung.push_back(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i ++){
            gabung.push_back(nums2[i]);
        }

        sort(gabung.begin(),gabung.end());

        int n = gabung.size();

        if(n % 2 == 1){
            return gabung[n / 2];
        }else{
            return (gabung[n/2]  + gabung[n / 2 - 1])  / 2.0;
        }
    }
};