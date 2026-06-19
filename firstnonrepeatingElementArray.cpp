//we gonna find the first non repeating element in the array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int firstnonnrepeating(vector<int>&nums){
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }

};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
int ans=s.firstnonnrepeating(nums);
    cout<<ans<<endl;
}