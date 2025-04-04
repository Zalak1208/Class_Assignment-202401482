class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26 , 0);
        
        for(char a : s){
            int num = a - 'a';
            freq[num]++;
        }
        for(int i = 0 ; i < s.length() ; i++){
            if(freq[s[i] - 'a'] == 1){
                 return i;
            }
        }
        return -1;
    }
};
