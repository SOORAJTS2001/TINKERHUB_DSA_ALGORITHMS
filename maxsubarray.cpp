class Solution {
public:
    /* contigous means 1 ->1,2-> 1,2,3-> 1,2,3,4 for [1,2,3,4] not 2,3->2,3,4 etc*/
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
        }
        return max;
    }
};