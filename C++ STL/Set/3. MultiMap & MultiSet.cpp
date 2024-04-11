///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<map>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    cout<<endl<<"~~~ MULTI MAP AND MULTI SET CAN HOLD DUPLICATE VALUES ~~~"<<endl<<endl;

    ///MAP :

    map<string,int>Map;

    Map.insert(make_pair("Md.Firozzaman",130));
    Map.insert(make_pair("Md.Firozzaman",1996));
    Map.insert(make_pair("Md.Firozzaman",27));
    Map.insert(make_pair("Borshon Shaha",143));

    map<string,int>::iterator it1;

    cout<<"MAP : "<<endl<<endl;
    for(it1=Map.begin();it1!=Map.end();it1++)
    {
        cout<<it1->first<<" --->> "<<it1->second<<endl;
    }
    cout<<endl;

    ///MULTI MAP :

    multimap<string,int>Multi_Map;

    ///multimap<string,int>::iterator it2;

    Multi_Map.insert(make_pair("Md.Firozzaman",130));
    Multi_Map.insert(make_pair("Md.Firozzaman",1996));
    Multi_Map.insert(make_pair("Md.Firozzaman",27));
    Multi_Map.insert(make_pair("Borshon Shaha",143));

    cout<<endl<<"MULTI MAP : "<<endl<<endl;
    for(it1=Multi_Map.begin();it1!=Multi_Map.end();it1++)
    {
        cout<<it1->first<<" --->> "<<it1->second<<endl;
    }
    cout<<endl;

    /// SET :

    set<float>Set;

    Set.insert(2.63);
    Set.insert(2.63);
    Set.insert(2.63);
    Set.insert(3.26);
    Set.insert(3.06);
    Set.insert(2.50);

    cout<<"SET : "<<endl<<endl;

    set<float>::iterator it3;

    for(it3=Set.begin();it3!=Set.end();it3++)
    {
        cout<<*it3<<"\t";
    }
    cout<<endl<<endl;

    /// MULTI SET :

    multiset<float>Multi_Set;

    Multi_Set.insert(2.63);
    Multi_Set.insert(2.63);
    Multi_Set.insert(2.63);
    Multi_Set.insert(3.26);
    Multi_Set.insert(3.06);
    Multi_Set.insert(2.50);

    cout<<"MULTI SET : "<<endl<<endl;

    ///multiset<float>::iterator it4;

    for(it3=Multi_Set.begin();it3!=Multi_Set.end();it3++)
    {
        cout<<*it3<<"\t";
    }
    cout<<endl;

    return 0;
}
