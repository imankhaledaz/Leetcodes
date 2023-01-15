class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map <char,int> m; //using hash map to keep track the frequency of a character
        for (auto x: magazine){
            m[x]++;
        }

        for (auto x: ransomNote){
            if (m[x]-- == 0)
            return false;
        }
        return true;
    }
};