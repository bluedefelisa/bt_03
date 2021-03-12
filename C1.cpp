#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1000], b[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool seen = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                seen == false;
            }
            else
            {
                seen == true;
            }
        }
    }
    if(seen== true){cout <<"Yes";}
    else{cout <<"No";}

    return 0;
}
