///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set<int>st;

    st.insert(34);
    st.insert(10);
    st.insert(5);
    st.insert(50);
    st.insert(34);
    st.insert(34);

    set<int>::iterator it;

    cout<<"Set Elements : ";
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<" <<--- All Elements are Arrange in Ascending Order"<<endl;
    it=st.find(10);
    cout<<"Set Elements after Deleting the Element "<<*it<<" : "<<endl;
    st.erase(it);
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
