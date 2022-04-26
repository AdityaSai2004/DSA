#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("sitin.txt","r",stdin);
    freopen("sitout.txt","w",stdout);
    int r,s,t;
    cin>>r>>s;
    t=r*s;
    int b;
    cin>>b;
    cout<<t<<b-t;
    return 0;
}