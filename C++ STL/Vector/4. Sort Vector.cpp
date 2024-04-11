///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

bool Descending(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>v;
    v.push_back(100);
    v.push_back(7);
    v.push_back(54);
    v.push_back(32);
    v.push_back(476);
    v.push_back(1);
    cout<<"Vector's elements : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it;

    cout<<"Before sorting the vector elements : ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Sorting in ascending order : ";
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Sorting in descending order : ";
    sort(v.begin(),v.end(),Descending);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
