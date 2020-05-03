class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> mp;
        int ans = 0;
        for(char x: J)//put all the characters in hashmap
            mp[x]++;
        for(char x: S)
            if(mp[x])//check if the character in the string S is a jewel,increment ans.
                ans++;
        return ans;
    }
};
