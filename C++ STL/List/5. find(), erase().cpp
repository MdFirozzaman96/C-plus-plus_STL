///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    list<int>mylist(arr,arr+6);
    cout<<"mylist : ";
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"The list after erasing the first element : ";
    it=mylist.begin();
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    it=find(mylist.begin(),mylist.end(),5);
    mylist.erase(it);
    cout<<"The list after erasing element "<<*it<<" :   ";
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
