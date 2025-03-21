// The frequency of an element is the number of times it occurs in an array.

//You are given an integer array nums and an integer k. 
//In one operation, you can choose an index of nums and 
//increment the element at that index by 1.

//Return the maximum possible frequency of an element after 
//performing at most k operations.

#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int> &nums, int k) {

    sort(nums.begin(), nums.end()); //Sorting the given array to make operations easy

    int l=0;
    int r=0;
    int res=0;
    int total=0;
    int n=nums.size();

    while(r<n) {
        total += nums[r];

        //invalid window
        while(nums[r] * (r-l+1) > total+k){
            total -= nums[l];
            l += 1;
        }

        res = max(res, r-l+1);
        r += 1;
    }
    
    return res;
}

int main() {
    
    int n;//size of array
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];//array to store elements

    cout << "Enter the values in the array : ";
    int i;//loop variable
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }

    vector<int> v;
    int k;//number of operations

    v.insert(v.end(), arr, arr+n);//transferring from array to vector

    cout << "Enter the value of k : ";
    cin >> k;

    int res = maxFrequency(v,k);

    cout << res;

    return 0;
}