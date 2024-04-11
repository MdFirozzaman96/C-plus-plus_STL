///***~~~ALLAH IS OMNISCIENT~~~***///

#include<iostream>
using namespace std;

template <typename mx>
mx Max(mx a,mx b)
{
    return a>b? a : b;
}
template <typename mn>

mn Min(mn a,mn b)
{
    return a<b? a:b;
}

int main()
{
    cout<<endl<<"Using template we can pass the data type as a parameter so that we don’t need to write the same code for different data types."<<endl<<endl;

    cout<<"Maximum Element : ";
    cout<<Max(10,20)<<" ";
    cout<<Max('a','b');

    cout<<endl<<"Minimum Element : ";
    cout<<Min(10,20)<<" ";
    cout<<Min('a','b')<<endl;
    return 0;
}
