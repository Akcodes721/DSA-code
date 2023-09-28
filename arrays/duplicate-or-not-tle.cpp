class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {           int a = nums[i];
        for(int j = i+1;j<n;j++){
            if(a == nums[j]){
                return true;
            }
            
        }
        }
        return false;
}
    
};
*/This method is the brute force approach and produces a tle error*/