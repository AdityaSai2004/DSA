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
    if(t>=sit){
    cout<<sit<<" "<<bal;
    }
    else{
        cout<<t<<" "<<0;
    }

    return 0;
}