///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

bool Descending(int a,int b)
{
    return a>b;
}

int main()
{
    vector<int>vec;

    vec.push_back(25);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(5);
    vec.push_back(3);

    vector<int>::iterator it;

    cout<<"Vector's elements before sorting : ";
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    int low,up;
    cout<<"Enter lower bound & upper bound to sort: ";
    cin>>low>>up;
    sort(vec.begin()+low,vec.begin()+up);
    cout<<"Vector's elements after sorting in ascending order : ";
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>arr_vec(arr,arr+n);

    int l,u;
    cout<<"Enter lower bound & upper bound to sort in descending order of the array elements : ";
    cin>>l>>u;
    sort(arr_vec.begin()+l,arr_vec.begin()+u,Descending);

    cout<<"The array elements of vector after sorting in descending order : ";
    for(it=arr_vec.begin();it!=arr_vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
