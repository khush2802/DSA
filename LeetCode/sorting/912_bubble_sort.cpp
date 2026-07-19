#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& nums){
     for(int i = nums.size()-1; i>=1; i--){
          int swapCount = 0;
          for(int j = 0; j<=i-1; j++){
               if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    swapCount++;
               }
          }
          if(swapCount==0){
                cout<<"break already sorted."<<endl;
               break;
              
          }
     }
}
int main(){
     int n;
     cout<<"enter the size of array"<<endl;
     cin>>n;

     vector<int>nums(n);

     cout<<"entere the elements of array "<<endl;

     for(int i = 0; i<n;i++){
          cout<<"the element at index "<<i+1<<" ";
          cin>>nums[i];
     }

     bubbleSort(nums);

     cout<<"the sorted array: ";
     for(int i = 0; i<nums.size(); i++){
          cout<<nums[i]<<" ";
     }
     return 0;
}