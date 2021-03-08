// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    // Code here
	    int x;
	    long sum=0;
	    for( x=1;x<=n;x++)
	    {
	        int z=n/x;
	        sum+=z*x;  
	    }
	    return sum;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.sumofproduct(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends