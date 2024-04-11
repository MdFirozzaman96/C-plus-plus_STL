///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v(5,130);
    cout<<"Initial vector's size : "<<v.size()<<endl;
    cout<<"Elements of the vector : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"v["<<i<<"] = "<<v[i]<<endl;
    }
    cout<<endl;

    v.push_back(-3);
    v.push_back(-2);

    cout<<"Vector's size after including two numbers : "<<v.size()<<endl;
    cout<<"Elements of the vector : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"v["<<i<<"] = "<<v[i]<<endl;
    }

    cout<<endl;
    return 0;
}

