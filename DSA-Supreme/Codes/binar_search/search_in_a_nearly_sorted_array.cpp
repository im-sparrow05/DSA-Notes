#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr , int target){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end-start)/2;
  while(start<=end){
    if(arr[mid]==target){                         // comparing mid with target value
      return mid;
    }
    if(mid-1>=start && arr[mid-1]==target){           // comparing mid-1 value with target
      return mid-1;
    }
    if(mid+1<=end && arr[mid+1]==target){             // comparing mid+1 value with target
      return mid+1;
    }
    else if(arr[mid]>target){
      end = mid-1;                                // left search
    }
    else {                                        // right search
      start = mid +1;
    }
    mid = start + (end-start)/2;                 // update mid
  }
  return -1;
}

int main() {
  vector <int> arr{10,3,40,20,50,80,70};
  int target = 70;

  int ans = search(arr,target);
  cout<<"Index of "<<target<<" is "<<ans;
  
    return 0;
}
