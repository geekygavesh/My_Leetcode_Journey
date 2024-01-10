class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        for(int i =0;i<n;i++){
            sum1 += nums[i];
        }
        int sum2 = 0;
        int ld = 0;
        for(int i =0;i<n;i++){
            while(nums[i]>0){
                ld = nums[i]%10;
                sum2+= ld;
                nums[i]/=10;
            }
            
        }
        int ans = abs(sum1-sum2);
        return ans;
    }
};
