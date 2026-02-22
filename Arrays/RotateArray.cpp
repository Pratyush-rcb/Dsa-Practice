// Problem: Rotate Array
// Platform: LeetCode
// Difficulty: Medium
// Topic: Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>brr(n,0);
        for(int i=0;i<nums.size();i++){
            if((i+k)<n){
            brr[i+k]=nums[i];
        }
        else {
            brr[(i+k)%n]=nums[i];
        }
    }
    swap(brr,nums);
    return;
    }
};