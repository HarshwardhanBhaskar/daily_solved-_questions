// Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int eraseOverlapIntervals(vector<vector<int>>&intervals){
        int n=intervals.size();
        if(intervals.empty())return 0;
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int count=0;
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<end){
                count++;
            }else{
                end=intervals[i][1];
            }
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>>intervals(n,vector<int>(2)); // 2D vector to store intervals
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    Solution s;
    cout<<s.eraseOverlapIntervals(intervals)<<endl;
    return 0;
}