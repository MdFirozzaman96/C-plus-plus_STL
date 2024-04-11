///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<long long int>id;
    list<string>name;

    id.push_back(180201131);
    name.push_back("Ratul Roy");
    id.push_back(180201133);
    name.push_back("Noushin Tabassum");
    id.push_back(180201134);
    name.push_back("Ahsun Ullah");
    id.push_front(180201130);
    name.push_front("Md.Firozzaman");

    cout<<"Size of the lists : "<<endl;
    cout<<"List-1(id) : "<<id.size()<<endl;
    cout<<"List-2(name) : "<<name.size()<<endl<<endl;;

    list<long long int>::iterator it;
    list<string>::iterator it1;

    it=id.begin();
    it1=name.begin();

    while(it!=id.end())
    {
        cout<<"Name : "<<*it1<<endl;
        cout<<"Id : "<<*it<<endl<<endl;
        it++;
        it1++;
    }
    cout<<"After reversing the lists : "<<endl<<endl;

    id.reverse();
    name.reverse();

    it=id.begin();
    it1=name.begin();

    ///id.reverse();/// Check Here !
    ///name.reverse();

    while(it!=id.end())
    {
        cout<<"Name : "<<*it1<<endl;
        cout<<"Id : "<<*it<<endl<<endl;
        it++;
        it1++;
    }
    cout<<"the lists size after clear the first list : "<<endl;
    id.clear();
    cout<<"id list's size : "<<id.size()<<endl;
    cout<<"name list's size : "<<name.size()<<endl;

    return 0;
}

