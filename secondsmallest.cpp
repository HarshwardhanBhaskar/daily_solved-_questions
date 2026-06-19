#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> secondsmallest(vector<int>&nums){
        int n=nums.size();
        int s1=INT_MAX, s2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<s1){
                s2=s1;
                s1=nums[i];
            }if(nums[i]<s2 && nums[i]!=s1){
                s2=nums[i];
            }
        }
        if(s2==INT_MAX){
            return {-1};
        }
        return {s2};
    }
} ;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    auto ans=s.secondsmallest(nums);
    cout<<ans[0]<<endl;
}  