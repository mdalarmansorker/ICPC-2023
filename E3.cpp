#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    for(int j=1; j <= t; j++) 
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) 
            cin >> a[i];
        
        long long bs = 0; 
        long long c = 1; 
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[i-1]) 
            {
                c++;
            } 
            else 
            {
                bs += (c * (c + 1)) / 2;
                c = 1;
            }
        }
        bs += (c * (c + 1)) / 2; 

        long long ts = (n * (n + 1ll)) / 2;
        long long nbs = ts - bs;

        cout << "Case " << j << ": " << nbs << endl;
    }

    return 0;
}