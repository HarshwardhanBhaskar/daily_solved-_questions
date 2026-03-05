#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1  && nums[j]==nums[j-1])continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int sum=nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        result.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r && nums[l]==nums[l+1])l++;
                        while(l<r && nums[r]==nums[r-1])r--;
                        l++;
                        r--;
                    }else if(sum<target){
                        l++;    
                }else{
                        r--;
                    }
                }
            }
        }
        return result;
    }
};
int main(){
    int n,target;
    cout<<"size of array: ";
    cin>>n;
    cout<<"target: ";
    cin>>target;
    vector<int> arr(n);
    cout<<"array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    auto ans=s.fourSum(arr,target);
    for(auto &quadruplet:ans){
        cout<<quadruplet[0]<<" "<<quadruplet[1]<<" "<<quadruplet[2]<<" "<<quadruplet[3]<<endl;
    }
}