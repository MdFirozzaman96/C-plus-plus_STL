///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<utility>
#include<iterator>
using namespace std;
int main()
{
    pair<string,int>p("Md.Firozzaman",130);
    p=make_pair("Radwan Ahmed",116);
    p=make_pair("Polok",100);
    cout<<p.first<<" "<<p.second<<endl;
    pair<string,int>::iterator it;// Iterator is not a member of std::pair<std::__cxxll::basic_string<char>,int>
    for(it=p.begin();it!=p.end();it++)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}
