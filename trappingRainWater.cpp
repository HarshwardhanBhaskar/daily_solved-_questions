#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int trap(vector<int>&height){
        int ans=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int maxHeight=min(height[l],height[r]);
            ans=max(ans,maxHeight*(r-l));
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    Solution s;
    cout<<s.trap(height)<<endl;
    return 0;
}