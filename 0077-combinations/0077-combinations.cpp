class Solution {
public:
     vector<vector<int>>result;
    void solveCombinations(int start , int n , int k , vector<int>&temp){
        //base case
        if(k==0){
            result.push_back(temp);
            return;
        }
        if(start>n)
            return ;
        //pick case
        temp.push_back(start);
        solveCombinations(start+1 , n , k-1 , temp);

        //not pick case
        temp.pop_back();
        solveCombinations(start+1 , n , k ,temp);
    }

    vector<vector<int>> combine(int n, int k) {
       
        vector<int>temp;
        solveCombinations(1,n,k,temp);
        return result;
    }
};