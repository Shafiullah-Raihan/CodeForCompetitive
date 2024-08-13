///https://atcoder.jp/contests/abc234/tasks/abc234_b

#include<bits/stdc++.h>
using namespace std;
const int mx= 1008;
int x[mx],y[mx];
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>> x[i] >> y[i];
    }
    double len = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x1= x[i],x2 = x[j],y1 = y[i],y2 =y[j];
            double p = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
            if(p>len) len = p;
        }
    }
    cout<<setprecision(15)<<len<<endl;
}


