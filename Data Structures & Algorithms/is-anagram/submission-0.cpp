class Solution {
public:
    bool isAnagram(string s, string t) {
        bool x=false;
        map<char, int> hash1;
        map<char, int> hash2;
        for(char c: s){
            hash1[c]++;

        }
        for(char c: t){
            hash2[c]++;
        }
        if(hash1==hash2){
            x=true;
        }
        return x;
        
    }
};
