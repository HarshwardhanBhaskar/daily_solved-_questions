#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int>> minAbsoluteDiff(vector<int>&arr){
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count=INT_MAX;
        for(int i=1;i<n;i++){
            count=min(count,(arr[i]-arr[i-1]));
        }
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==count){
                ans.push_back({arr[i-1],arr[i]});
            }
        }

        return ans;
    }
};
int main(){
    int n;
    cout<<"size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    vector<vector<int>>res=s.minAbsoluteDiff(arr);
    cout<<"pairs with minimum absolute difference are:\n";
    for(auto &v:res){
        cout<<v[0]<<" "<<v[1]<<"\n";
    }
    return 0;
}