///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    list<int>List_Array(arr+1,arr+6);

    list<int>::iterator it;
    cout<<"List's Elements : ";
    for(it=List_Array.begin();it!=List_Array.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
    it=List_Array.begin();
    cout<<*it<<endl;
    it++;
    List_Array.insert(it,130);
    cout<<"Added 130 before "<<*it<<" : "<<endl;
    cout<<*it<<endl;
    cout<<"The List after Inserting Before "<<*it<<" : "<<endl;
    for(it=List_Array.begin();it!=List_Array.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    it=find(List_Array.begin(),List_Array.end(),4);/// Needed algorithm header file.
    List_Array.insert(it,134);
    cout<<"Inserting 134 into List before "<<*it<<" : "<<endl;
    for(it=List_Array.begin();it!=List_Array.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
