#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("taktakin.txt","r",stdin);
    freopen("taktakout.txt","w",stdout);
    int n;
    cin>>n;
    int f=0,r=(n-1)%11;
    while(r!=0){
        n=n*2;
        f++;
    }
    cout<<f<<" "<<n;
}
