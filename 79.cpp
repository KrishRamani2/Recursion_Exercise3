#include <iostream>
using namespace std;
class Solution
{
  public:
    int digitalRoot(int n)
    {
       if(n%9==0 && n!=0)
        return 9;
        else
           return  n%9;
    }
    
};
int main() 
{
	cout<<"Enter your number"<<endl;
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	return 0;
}