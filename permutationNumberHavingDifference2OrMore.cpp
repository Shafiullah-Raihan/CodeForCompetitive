///https://atcoder.jp/contests/abc234/tasks/abc234_b

#include<bits/stdc++.h>
#define nl "\n";
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1) {cout<< "1"<< nl;}
    else if(n ==2 || n == 3) {cout<< "No Solution"<< nl;}
    else{
        for(int i = 2;i<=n;i+=2) cout<< i<< " ";
        for(int i=1;i<=n;i+=2) cout<< i << " ";
    }
    cout<<nl;
}
