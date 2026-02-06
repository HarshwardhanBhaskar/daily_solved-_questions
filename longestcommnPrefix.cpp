// longest common prefix will done in O(nlogn)
#include<bits/stdc++.h>

using namespace std;
class Solution{
    public:
    string longestPrefix(vector<string>& strs){
        sort(strs.begin(),strs.end());
        string a=strs[0],b=strs[strs.size()-1],count="";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                count+=a[i];
                }else{
                break;
            }
        }
        return count;   
    }
};
int main(){
    int n;
    cout<<"Enter the number of strings:";
    cin>>n;
    vector<string>strs(n);
    cout<<"Enter the strings:"<<endl;
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    Solution s;
    string result=s.longestPrefix(strs);
    cout<<"The longest common prefix is:"<<result;
    return 0;
}