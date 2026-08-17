#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of book codes: ";
    cin >>n;

    int arr[n];

    cout<<"Enter sorted book codes: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target book code: ";
    cin>>target;

    int low = 0, high = n - 1;
    while(low<=high)
    {
        int mid=(low + high) / 2;

        if(arr[mid]==target)
        {
            cout << "Book code found at position " << mid;
            return 0;
        }
        else if(target > arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout << "Book code not found.";

    return 0;
}
