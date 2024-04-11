///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    int x;
    cout<<"Enter integer numbers otherwise 0 : "<<endl;
    cin>>x;
    while(x!=0)
    {
        v.push_back(x);
        cin>>x;
    }
    cout<<"Numbers into vector : "<<endl;
    v[0]=1000;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of the vector : "<<v.size()<<endl;
    return 0;
}
