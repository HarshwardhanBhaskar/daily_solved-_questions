// reversing the bits of a number
// example: 00000010100101000001111010011100 is the binary representation of 43261596, return 964176192 which is 00111001011110000010100101000000 in binary
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int reverseBits(int n){
        unsigned int result=0;
        for(int i=0;i<32;i++){
            result=result*2+(n%2);
            n/=2;
        }
        return result;
    }
    };
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.reverseBits(n)<<endl;
    return 0;
}