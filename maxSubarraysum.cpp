// uisng kadarne algorithm
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxSubarraySum(vector<int>& arr){
        int n=arr.size();
        int count=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            count+=arr[i];
            maxSum=max(maxSum,count);
            if(count<0){
                count=0;
            }
        }
        return maxSum;
    }
};
int main(){
    int n;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.maxSubarraySum(arr)<<endl;
    return 0;
}