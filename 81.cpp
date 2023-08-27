#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ans(int n,int i){
        if(n<i){
            return 1;
        }
        if((n)%i==0){
            return 0;
        }
        ans(n-(n/i),i+1);
    }
    bool isLucky(int n) {
        // code here
        return ans(n,2);
    }
};
signed main()
{
    cout<<"Enter your number"<<endl;
    int n;
    cin>>n;
    Solution obj;
    if(obj.isLucky(n))
        cout<<"1\n";
    else
        cout<<"0\n";
        
}