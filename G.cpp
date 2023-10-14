#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string b;
        cin>>b;
        int l = b.length();
        int run = 0, over = (l/6), ball = (l%6), w = 0;
        for(int i=0;i<l;i++)
        {
            if(b[i]=='W')
                w++;
            else
            {
                run += ((int)b[i] - 48);
            }
        }
        cout<<over<<'.'<<ball;
        if(over>1 or (over==1 and ball>0))
            cout<<" Overs "<<run;
        else
            cout<<" Over "<<run;
        
        if(run<=1)
            cout<<" Run "<<w;
        else
            cout<<" Runs "<<w;
        if(w<=1)
            cout<<" Wicket."<<endl;
        else
            cout<<" Wickets."<<endl;
    }
    return 0;
}