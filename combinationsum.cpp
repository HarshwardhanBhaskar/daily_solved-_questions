// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& temp, int index){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        if(candidates[i]>target)break;
        temp.push_back(candidates[i]);
        solve(candidates, target-candidates[i], ans, temp, i);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    solve(candidates, target, ans, temp, 0);
    return ans;
}
};
int main(){
    Solution s;
    int n, target;
    cin>>n>>target;
    vector<int> candidates(n);
    for(int i=0;i<n;i++){
        cin>>candidates[i];
    }
    vector<vector<int>> ans = s.combinationSum(candidates, target);
    for(auto it: ans){
        for(auto i: it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

