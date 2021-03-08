#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
void MyStack :: push(int x)
{
    int max=sizeof(arr)/sizeof(arr[0]);
    
    if(top>=max - 1)
    {
        
    }
    else{
        arr[++top]=x;
        
    }
        // Your Code
}

int MyStack :: pop()
{
    if(top==-1)
    {
        return -1;
    }else{
       int x=arr[top--];
       return x;
    }
           
}
