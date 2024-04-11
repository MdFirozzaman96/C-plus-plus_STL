///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<algorithm>

using namespace std;

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
    sort(arr,arr+n);
    cout<<"Array elements after sorting : ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
