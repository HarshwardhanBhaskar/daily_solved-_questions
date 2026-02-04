#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int maxProduct(vector<int>nums){
    int n=nums.size();
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxproduct=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]<0)
            swap(maxi,mini);
        maxi=max(nums[i],maxi*nums[i]);
        mini=min(nums[i],mini*nums[i]);
        maxproduct=max(maxproduct,maxi);
    }
    return maxproduct;
}
};
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    Solution s;
    int result=s.maxProduct(nums);
    cout<<"The maximum product subarray is:"<<result;
    return 0;
}   