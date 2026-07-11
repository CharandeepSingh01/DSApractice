class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> us;
        int s1 = s.size();
        int s2 = t.size();
        if (s1 != s2) return false;
        for (auto n: s) us[n]++;
        for (int i = 0 ; i< s1; i++){
            if(us.find(t[i]) != us.end()){
                us[t[i]]--;
                if (us[t[i]] == 0) us.erase(t[i]);
            }
            else return false;
        }
        return us.size()==0;
    }
};
// 2nd way
// class Solution {               
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length()){
//             return false;
//         }
//         int arr[26] = {0};
//         for(int i=0; i<s.length(); i++){
//             arr[s[i]-'a']++;
//             arr[t[i]-'a']--;
//         }
//         for(int i=0; i<26; i++){
//             if(arr[i] != 0){
//                 return false;
//             }
//         }
//         return true;
//     }
};
