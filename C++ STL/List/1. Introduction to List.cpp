///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<long long int>mylist;
    list<string>mylist_1;

    mylist.push_back(180201130);
    mylist.push_back(180201131);
    mylist.push_back(180201133);
    mylist_1.push_back("Md.Firozzaman");
    mylist_1.push_back("Ratul Roy");
    mylist_1.push_back("Noushin Tabassum");

    list<long long int>::iterator it;
    list<string>::iterator it1;

    it=mylist.begin();
    it1=mylist_1.begin();

    while(it!=mylist.end())
    {
        cout<<"Id : "<<*it<<endl;
        cout<<"Name : "<<*it1<<endl<<endl;
        it++;
        it1++;
    }
    cout<<"After inserting value in front of the list : "<<endl<<endl;

    mylist.push_front(180201129);
    mylist_1.push_front("Md. Zubayer");

    it=mylist.begin();
    it1=mylist_1.begin();

    while(it!=mylist.end())
    {
        cout<<"Id : "<<*it<<endl;
        cout<<"Name : "<<*it1<<endl<<endl;
        it++;
        it1++;
    }
    return 0;
}
