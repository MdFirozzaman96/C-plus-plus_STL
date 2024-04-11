///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set<string>s;

    s.insert("Md.Firozzaman");
    s.insert("Radwan Ahmed");
    s.insert("Ratul Roy");
    s.insert("Rageeb Intesar Polok");
    s.insert("Atik Aziz");

    set<string>::iterator it;

    cout<<"The set elements are arranged in ascending order : "<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;

    cout<<"~~~The insert() in set is returns a pair. The first element of that pair is an iterator and second is a boolean value~~~"<<endl;
    pair<set<string>::iterator,bool> pr;

    pr=s.insert("Md.Firozzaman");

    if(pr.second==true)
    {
        cout<<"Inserted"<<endl;
    }
    else
    {
        cout<<"Can't Inserted"<<endl;
    }
    return 0;

}
