#include<iostream>

using namespace std;

bool check(int n)
{
    int x = n;
    int sum =0;
    while(x != 0)
    {
        sum = sum*10 + n%10;
        x = x/10;
    }
    if(n == sum){return true;}

    return false;
}

int main()
{
    int t, a, b;
    cin >> t;
    int count = 0;
    for(int i = 1; i <= t; i++)
    {
        cin >> a>> b;

        for(int j = a; j <= b; j++)
        {
            bool b = check(j);
            if(b == true)
            {count ++;}
        }
         cout << count << endl;
    }


}
