#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ansstart = -1; 
        int ansend = -1;
        int sum = nums[0];
        int maxi = nums[0];
        int start = 0;
        for (int i = 1; i < nums.size(); i++) {
            if(sum == 0)  start = i;
            sum = max(nums[i], sum + nums[i]);
            maxi = max(maxi, sum);
            ansstart = start ; ansend = i;
            for (int j = ansstart; j <= ansend; j++)
            {
                cout << nums[j] << " ";
            }
            
        }
        return maxi;
    }
};


