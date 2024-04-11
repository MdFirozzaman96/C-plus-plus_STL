///***~~~ALLAH IS ALMIGHTY~~~***///

#include<iostream>
#include<utility>
using namespace std;

int main()
{
    ///Pair Initialization :
    pair<string,int>p1;
    p1.first="Md.Firozzaman";
    p1.second=130;
    cout<<p1.first<<" "<<p1.second<<endl;

    ///Pair Initialization :
    pair<string,int>p2("Radwan Ahmed",116);
    cout<<p2.first<<" "<<p2.second<<endl;

    /// Pair Initialization & Assignment(into pair variable) :
    p1=make_pair("Polok",130);
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}
