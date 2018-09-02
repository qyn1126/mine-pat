#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double num[1001];
    for (int i=0;i<1001;i++){
        num[i]=0;
    }
    int a=0,c=0;
    double b;
        cin>>a;
        for (int i=0;i<a;i++){
            cin>>c>>b;
            num[c]+=b;
        }
        cin>>a;
        for (int i=0;i<a;i++){
            cin>>c>>b;
            num[c]+=b;
        }
    int e=0;
    for (int i=0;i<1001;i++){
        if (num[i] !=0)
            e++;
        }
        cout<<e;
    for (int i=1000;i>=0;i--){
        if (num[i] !=0) {
            printf(" %d %.1f", i, num[i]);;
        }
    }
return 0;
}