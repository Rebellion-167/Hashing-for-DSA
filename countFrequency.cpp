//Given an array, find the number of occurrences of each element in the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//to store the number of elements
    cout << "Enter the number of elements : ";
    cin >> n;
    
    int arr[n];//Declaring the array to store the elements

    //Taking input in the array
    cout << "Enter elements in the array : ";
    int i;//loop variable
    for(i=0;i<n;i++)
        cin >> arr[i];

    //Declaring Map
    map<int,int> mpp;

    for(i=0;i<n;i++)
        mpp[arr[i]]++;

    //Traversing through the map and displaying the frequency
    cout << "The frequency of the numbers are : \n";
    for(auto x: mpp)
        cout << x.first << "->" << x.second << endl;

    return 0;
}