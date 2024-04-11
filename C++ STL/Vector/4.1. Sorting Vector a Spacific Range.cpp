///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

bool Dsnd(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>v,v1;
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
    sort(v.begin(),v.begin()+4);
    vector<int>::iterator it;
    cout<<"After sort elements between index 1 to index 4 inclusive in ascending order : ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(16);
    v1.push_back(32);
    v1.push_back(64);
    cout<<"Elements in v1 vector : ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"After sort elements between index 1 to index 4 inclusive in descending order : ";
    sort(v1.begin(),v1.begin()+4,Dsnd);
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
