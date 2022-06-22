#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[] = {8,10,12,27,34,42};
    // array<int,6> arr{8,10,12,27,34,42};
    int st = 0;
    int en = 6;
    int num = 13;
    bool found = false;
    int mid =0;
    // cout<<arr.size();
    while(st<=en)
    {
        mid = (st+en)/2;
        if(arr[mid]==num)
        {
            found = true;
            break;
        }
        else if (arr[mid]>num)
        {
            en = mid-1;
        }
        else if (arr[mid]<num)
        {
            st = mid+1;
        }
    }
    if (found==true){
      cout<<"Found at Position :"<<mid;
    }
    else{
        cout<<"Not found";
    }

return 0;}