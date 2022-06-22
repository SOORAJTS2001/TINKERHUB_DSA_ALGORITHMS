#include<iostream>
#include<array>
#include<vector>//to include the vectors
#include<algorithm>//to import the algorithmic functionalities like sort and find
using namespace std;
int main()
{
    // vector<int> ans = {1,5,2,4};
    vector<int>ans(5,0);
    // array<int,5>arr
    int elem = 2;
    ans.begin();//it is to get the starting address

    ans.end();//it is to get the ending address

    ans.size();//to find the size of the vector

    sort(ans.begin(),ans.end());//it is to store the array

    find(ans.begin(),ans.end(),elem);//it is to find an element in the array

    return 0;
}