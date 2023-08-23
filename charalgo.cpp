#include <bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;

int main()
{
    int a , b , c;
    char c1 ,c2;
    cin>>a >> c1>>b>> c2>>c;
    if(c1++ =='+'){
        if(a+b==c)cout<<"yes";
        else cout<<a+b;
    }else if(c1 =='-'){
        if(a-b==c)cout<<"yes";
        else cout<<a-b;
    }else if(c1=='*'){
        if(a*b==c)cout<<"yes";
        else cout<<a*b;
    }
    return 0;
}
