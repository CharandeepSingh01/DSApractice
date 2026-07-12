class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for( auto n: magazine) mp[n]++;
        for(int i = 0; i< ransomNote.size(); i++){
            if(mp.find(ransomNote[i]) != mp.end()){
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]] < 0) return false;
            } else return false;
        } return true;
    }
};