///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l,u;
    cout<<"Enter the range of lower & upper bound : ";
    cin>>l>>u;
    cout<<"Array elements after sorting in range between "<<l<<" to "<<u<<" : ";
    sort(arr+l,arr+u);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
