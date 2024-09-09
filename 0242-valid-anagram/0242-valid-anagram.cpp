class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqtable[256] = {0}; //step 0 completed
        //step 1 : increase count of string s
        for(int i=0 ; i<s.length(); i++){
            freqtable[s[i]]++;
        }
        //step 2 : subtract the count
        for(int i=0 ; i<t.length();i++){
            freqtable[t[i]]--;
        } 
        //step 3 : check is freqtable count is 0 or not
        for(int i=0;i<256;i++){
            if(freqtable[i]!=0){
                return false;
            }
        } 
        return true;
    }
};