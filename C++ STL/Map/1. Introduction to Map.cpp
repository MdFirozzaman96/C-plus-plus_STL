///***~~~ALLAH IS ALMIGHTY~~~***//

#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<string,int>mp;
    mp["Radwan"]=116;
    mp["Polok"]=100;
    mp["Ratul"]=131;
    mp["Sakib"]=82;

    mp.insert(make_pair("Firoz",130));/// insert(make_pair(key,value));

    cout<<mp["Ratul"]<<endl;
    cout<<mp["Firoz"]<<endl;

    map<string,int>::iterator it;

    it=mp.begin();
    cout<<"Print first element of the map mp : "<<it->first<<endl;
    cout<<"Print second element of the map mp : "<<it->second<<endl;

    cout<<endl;
    cout<<"Printing keyes & values of map using by iterator : "<<endl;

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }
    return 0;

}
