#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
int hea[101][1001],df[1001]={};
int m,n,s;
int nm(int a){
    int zf=0;
    for (int k=1;k<=s;k++){
        int k1,k2,z;
        k1=k*2;k2=k*2+1;
        if (k2>n)k2=k1;
        if(hea[a][k]<=hea[a][k1]&&hea[a][k]<=hea[a][k2])z=0;
        else if (hea[a][k]>=hea[a][k1]&&hea[a][k]>=hea[a][k2])z=1;
        else z=2;
        if (k==1)zf=z;
        if (z!=zf){
            zf=2;
            break;
            }
    }
    return zf;
}
int num=0;
void dfs(int a){
    if (a>n)return;
    dfs(a*2);
    dfs(a*2+1);
    num++;
    df[num]=a;
    return;
}
int main(){
    string zt[3]={"Min Heap","Max Heap","Not Heap"};
    cin>>m>>n;
    s=n/2;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            cin>>hea[i][j];
        }
    }
    dfs(1);
    int z=m;
    for (int i=1;i<=m;i++){
        int t=nm(i);
        cout<<zt[t]<<endl;
        for (int j=1;j<=n;j++){
            if (j==n)cout<<hea[i][df[j]]<<endl;
            else cout<<hea[i][df[j]]<<" ";
        }
    }
    return 0;
}