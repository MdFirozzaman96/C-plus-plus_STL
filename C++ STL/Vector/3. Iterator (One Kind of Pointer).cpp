///***~~~ALLAH IS ALMIGHTY~~~****///

#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int>v;
    int x;
    cout<<"Enter integer numbers & zero to end : "<<endl;
    cin>>x;
    while(x!=0)
    {
        v.push_back(x);
        cin>>x;
    }
    vector<int>::iterator it;
    cout<<"Accessing vector's elements using by iterator it : "<<endl;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Accessing another vector's elements using by iterator it1 : "<<endl;
    vector<double>vd(5,2.60);
    vector<double>::iterator it1;
    for(it1=vd.begin();it1!=vd.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
    return 0;
}
