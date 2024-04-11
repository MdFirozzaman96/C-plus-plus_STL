///***~~~ALLAH IS OMNISCIENT~~~***///

#include<iostream>

using namespace std;

template<typename srt>
void BubbleSort(srt arr[],srt n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<(n-i);j++)
        {
            if(arr[j]<arr[j-1])
            {
                arr[j]+=arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]-=arr[j-1];
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of integer number to input : ";
    cin>>n;
    cout<<"Sorting Operation on Integer Type Numbers : ";
    int arr[n];
    cout<<"Enter "<<n<<" integer numbers : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array before sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    BubbleSort<int>(arr,n);
    cout<<endl<<"Elements of the array after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Sorting Operation on Floating Type Numbers : "<<endl<<endl;
    float arr1[n];
    cout<<"Enter "<<n<<" integer numbers : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    BubbleSort<float>(arr1,n);
    cout<<endl<<"Elements of the array after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;

    /// 6.7 2.0 6.6 1.9 10.0
}
