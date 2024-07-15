class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>hash(n,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int duplicate=-1;
        for(int i=1;i<n;i++){
            if(hash[i]>=2){
                duplicate = i;
                break;
            }
        }
        return duplicate;
    }
};