#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isIsomorphic(string s,string t){
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else{
                mp[s[i]]=t[i];
            }
        }
        return true;    
    }
};
int main(){ 
    string s,t;
    cin>>s>>t;
    Solution sol;
    cout<<sol.isIsomorphic(s,t)<<endl;
    return 0;
}