int firstUniqChar(string s){
        int i,n = s.length(),idx = -1;
        unordered_map<char,int> mp;
        for(char x: s)//count occurences of each character in the string
            mp[x]++;
        for(i = 0;i < n;i++)//check for the first unique character
            if(mp[s[i]] == 1)
                return i;
        return -1;
    }
