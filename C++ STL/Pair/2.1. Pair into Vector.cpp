///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<vector>
#include<utility>
#include<iterator>

using namespace std;

int main()
{
    vector<pair<string,int>>vp;
    ///vp.first="Md.Firozzaman";// There is no class.
    ///vp.second=130;// There is not class.
    ///cout<<vp.first<<" "<<vp.second<<endl;// There is no class.

    vp.push_back(make_pair("Md.Firozzaman",130));
    vp.push_back(make_pair("Radwan",116));
    vp.push_back(make_pair("Polok",100));

    ///cout<<vp.first<<" "<<vp.second<<endl;// There is no class.

    vector<pair<string,int>>::iterator it;

    cout<<"Pair List : "<<endl<<endl;
    for(it=vp.begin();it!=vp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    return 0;
}
