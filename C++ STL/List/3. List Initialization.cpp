///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int>mylist(5);
    list<int>::iterator it;
    cout<<"List Element's : "<<endl;

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    list<int>mylist_1(5,130);

    cout<<"After initialize all list's elements with value 130 : "<<endl;
    for(it=mylist_1.begin();it!=mylist_1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
