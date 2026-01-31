#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
char nextGreatestLetter(vector<char>& letters,char target){
    int l=0,r=letters.size()-1;
    int ans=letters[0];
    while(l<=r){    
        int mid=l+(r-l)/2;
        if(letters[mid]>target){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }   
    return ans;
}
};
int main(){
    int n;
    cin>>n;
    vector<char>letters(n);
    for(int i=0;i<n;i++){
        cin>>letters[i];
    }
    char target;
    cin>>target;
    Solution s;
    char ans=s.nextGreatestLetter(letters,target);
    cout<<ans<<endl;
    return 0;
}