// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longest(string names[], int n)
    {
        int length=0,i;
        string str;
        for(i=0;i<n;i++)
        {
            int len=names[i].length();
           
            if(len>length){
                 length=len;
                 str=names[i];
            }
           
        }
        return str;
        
    }
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}