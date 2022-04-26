#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("sitin.txt","r",stdin);
    freopen("sitout.txt","w",stdout);
    int r,s,t;
    cin>>r>>s;
    cin>>t;
    int sit=(r*s);
    int bal=t-sit;
    cout<<sit<<" "<<bal;
    return 0;
}