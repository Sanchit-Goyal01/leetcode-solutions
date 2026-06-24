class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int j=-1;
        for(int i=0;i<l;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return;
        }
        for(int i=j+1;i<l;i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};
