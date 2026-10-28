class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
           return false;
        vector<int> box(26,0);
        for(int i = 0; i < s.length();i++) 
        {
            box[s[i]-'a']++;
            box[t[i]-'a']--;

        }  
        for(int i = 0; i < 26;i++){
             if(box[i]!=0)
              return false;
            
        }return true;
    } 
};