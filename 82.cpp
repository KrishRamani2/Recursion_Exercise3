#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution
{
    public:
    void solve(int a[], map<int,string>&mp, int i,int N, string output, vector<string>&ans){
        if(i>=N){
            ans.push_back(output);
            return ;
        }
        
        for(int j = 0; j<mp[a[i]].size(); j++){
            output.push_back(mp[a[i]][j]);
            solve(a,mp,i+1,N,output,ans);
            output.pop_back();
        }
        return ;
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        map<int,string>mp;
        mp[0] = "";
        mp[1] = "";
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        
        string output = "";
        vector<string>ans;
        int i = 0;
        
        solve(a,mp,i,N,output,ans);
        
        return ans;
    }
};
int main()
{
    cout<<"Enter your input"<<endl;
	int N;
	cin >> N; 
    cout<<"Enter letters in that number"<<endl;
	int a[N]; 
	for(int i =0;i<N;i++)
    {
	    cin >> a[i]; 
	}
	Solution obj; 
	vector <string> res = obj.possibleWords(a,N);
	for (string i : res) cout << i << " ";
	cout << endl;
	return 0;
}