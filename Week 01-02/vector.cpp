#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.insert(a.begin()+i,x);
    }

    for(int d:a)
        cout<<d<<" ";

    cout<<endl;
    cin>>x;
    a.push_back(x);

    for(int d:a)
        cout<<d<<" ";

    a.clear();
}