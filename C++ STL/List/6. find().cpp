///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5]={3,4,6,2,9};

    list<int>mylist(arr,arr+5);

    list<int>::iterator it;

    cout<<"mylist : ";
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter an integer number whether it is in or not into the list & inter -1 to end : ";
    cin>>x;
    while(x!=-1)
    {
        it=find(mylist.begin(),mylist.end(),x);
        if(it==mylist.end())
        {
            cout<<x<<" is not found into the list"<<endl;
        }
        else
        {
            cout<<x<<" is found into the list"<<endl;
        }
        cout<<"Enter an integer number whether it is in or not into the list & inter -1 to end : ";
        cin>>x;
    }

    return 0;
}
