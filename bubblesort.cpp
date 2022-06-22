#include<iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main() {
    auto start = high_resolution_clock::now();
    int arr[6] = {12,45,23,51,19,8};
    for (int i =1;i<6;i++)
    {
        for(int j = 0;j<6-i;j++)
        {
            if(arr[j+1]<arr[j]) swap(arr[j+1],arr[j]);
        }
    }
//    for (auto elem:arr)
//     {
//         cout<<elem<<" ";
//     }
//     cout<<"\n";









    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by bubble sort: "
         << duration.count() << " microseconds" << endl;
}
