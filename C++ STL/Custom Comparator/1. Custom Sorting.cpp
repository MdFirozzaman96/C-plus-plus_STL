///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int a,int b)
{
    if(a<b)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of array elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>vec(arr,arr+n);
    cout<<"Array elements after performing custom sort : ";
    sort(vec.begin(),vec.end(),cmp);
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
