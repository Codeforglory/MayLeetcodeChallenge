class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        int n = ransomNote.length();
        for(char x: magazine)//count occurences of all characters in magazine
            mp[x]++;
        for(char x: ransomNote){//check if the characters in ransomNote can be made from the magazine
            mp[x]--;
            if(mp[x] < 0)
                return false;
        }
        return true;
    }
};
