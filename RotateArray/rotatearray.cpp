class Solution {
public:
    void reversep(int i,int j,vector<int>& nums){
       
        while(i<=j){
            swap(nums[i],nums[j]);
             i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
         
        reversep(0,n-k-1,nums);
        reversep(n-k,n-1,nums);
        reversep(0,n-1,nums);     // we can simply call reverse function either
        
    }
};
