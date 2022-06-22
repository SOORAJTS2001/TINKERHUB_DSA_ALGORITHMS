#include<iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main() {
    auto start = high_resolution_clock::now();
    int arr[6] = {12,45,23,51,19,8};
    for (int i =0;i<6;i++)
    {
        for(int j = i+1;j<6;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
   for (auto elem:arr)
    {
        cout<<elem<<" ";
    }
    cout<<"\n";









    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by selection sort: "
         << duration.count() << " microseconds" << endl;
return 0;
}
