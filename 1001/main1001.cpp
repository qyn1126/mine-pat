#include <iostream>
#include <string>
using namespace std;
int main(){
    //1111111ss
    //1q
int a=0,b=0;
cin>>a>>b;
a=a+b;
string num=to_string(a);
b=num.length();
for (int i=0;i<b;i++){
    cout<<num[i];
    if (num[i]=='-') continue;
    if ((i+1)%3==b%3 && i!=b-1) cout<<",";

}
cout<<endl;
return 0;

}
