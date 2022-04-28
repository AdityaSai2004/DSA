#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("bendin.txt","r",stdin);
    freopen("bendout.txt","w",stdout);
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    int a_width=x2-x1;
    int a_height=y2-y1;
    int b_width=x4-x3;
    int b_height=y4-y3;
    int a_area=a_width*a_height;
    int b_area=b_width*b_height;
    int total_area=a_area+b_area;
    if(x3<x2 || x1<x4 || y3<y2 || y1<y4){
        int left=max(x1,x3);
        int right=min(x2,x4);
        int bottom=max(y1,y3);
        int top=min(y2,y4);
        int a_intersection=0;
        if((left<right) && (bottom<top)){
            a_intersection=(right-left)*(top-bottom);
        }
        total_area-=a_intersection;
    }
    cout<<total_area<<endl;
    return 0;
}