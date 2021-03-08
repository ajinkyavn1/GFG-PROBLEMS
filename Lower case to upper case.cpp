// { Driver Code Starts
#include <iostream>
using namespace std;

int getSum(int a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << getSum(a, n) << endl;
    }

    return 0;
}// } Driver Code Ends




int getSum(int a[], int n) {
    // Your code goes here
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}   