///***~~~`ALLAH IS ALMIGHTY`~~~***///

#include<iostream>
#include<algorithm>

using namespace std;

bool Desceding(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    cout<<"Enter the number of array's elements : ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int low,up;
    cout<<"Enter lower bound & upper bound to sort : ";
    cin>>low>>up;

    cout<<"After sorting in descending order in range between "<<low<<" & "<<up<<" : ";
    sort(arr+low,arr+up,Desceding);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}
