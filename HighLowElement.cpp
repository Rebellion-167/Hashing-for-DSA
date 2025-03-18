//Given an array of size N. Find the highest and lowest frequency element.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//to store the number of elements
    cout << "Enter the number of elements : ";
    cin >> n;

    int arr[n];//declaring the array to store elements

    //Taking inputs in the array
    int i;//loop variable
    for(i=0;i<n;i++)
        cin >> arr[i];

    //Creating an unordered map to store the frequency
    unordered_map<int,int> mpp;

    for(i=0;i<n;i++)
        mpp[arr[i]]++;

    //Creating variables to find the highest and lowest elements
    int maxEle = arr[0], minEle = arr[0];
    int maxFreq = 0, minFreq = n;

    for(auto it : mpp)
    {
        int element = it.first;
        int count = it.second;

        if(count > maxFreq)
        {
            maxFreq = count;
            maxEle = element;
        }
        if(count < minFreq)
        {
            minFreq = count;
            minEle = element;
        }
    }

    cout << "The highest frequency element is : " << maxEle << endl;
    cout << "The lowest frequency element is : " << minEle << endl;

    return 0;
}