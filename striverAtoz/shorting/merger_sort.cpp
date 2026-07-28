#include <bits/stdc++.h>

using namespace std;


void mergeSort(vector<int>& nums, int low, int mid, int high){
     int left = low;
     int right = mid+1;
     vector<int>arr;

     while(left<=mid && right<=high){
          if(nums[left]<=nums[right]){
               arr.push_back(nums[left++]);
          }else{
               arr.push_back(nums[right++]);
          }
     }

     while(left<=mid){
          arr.push_back(nums[left++]);
     }

     while(right<=high){
          arr.push_back(nums[right++]);
     }


     for(int i = low; i <= high; i++){
           nums[i] = arr[i - low];
}
}

void divideSort(vector<int>& nums, int low, int high){
     if(low>=high){return ;}
     int mid = (low+high)/2;
     divideSort(nums, low, mid);
     divideSort(nums, mid+1, high);
     mergeSort(nums, low, mid, high);

}


int main(){
     int n;
     cout<<"eneter the size of array: ";
     cin>>n;

     vector<int>nums(n);

     for(int i = 0; i<n; i++){
          cin>>nums[i];
     }
     int low = 0;
     int high = n-1;

     divideSort(nums, low, high);

     cout<<"Sorted array";

     for(int i = 0;i<n;i++){
          cout<<nums[i]<<" ";
     }
     return 0;
}
