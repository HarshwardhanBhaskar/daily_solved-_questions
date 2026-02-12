// longest balanced substring 1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestbalancedSubstring(string s){
        int n=s.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                auto k=mp.begin();
                int l=k->second;
                k++;
                int r=k->second;
                if(l==r){
                    maxlen=max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;  

    }
};