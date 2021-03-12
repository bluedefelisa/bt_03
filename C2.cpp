#include<bits/stdc++.h>

using namespace std;

bool checkdx(string s)
{
    for(int i = 0; i < s.length()/2; i++)
    {
        if(s[i]!= s[s.length()- i - 1]) return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if(checkdx(s) == true ){cout <<"Yes";}
    else{cout <<"No";}

    return 0;
}
