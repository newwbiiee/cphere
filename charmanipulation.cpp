#include <bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;

int main()
{
    char c;
    cin >> c;
    if(c>=65 && c<=90){
        cout <<(char)(c+32);
    }else{
        cout <<(char)(c-32);
    }
    return 0;
}
