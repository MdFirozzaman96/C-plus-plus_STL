///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};

    ///list<int>mylist;
    list<int>mylist(arr,arr+5);

    if(mylist.empty())
    {
        cout<<"The List is Empty"<<endl;
    }
    else
    {
        cout<<"The List is Filled"<<endl;
        cout<<"All Elements of mylist : ";
        list<int>::iterator it;
        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"Front Element of mylist : "<<mylist.front()<<endl;
        cout<<"Back Element of mylist : "<<mylist.back()<<endl;

        cout<<"The List after Removing Front Element : ";
        mylist.pop_front();

        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

        cout<<"The List after Removing Back Element : ";
        mylist.pop_back();

        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}

