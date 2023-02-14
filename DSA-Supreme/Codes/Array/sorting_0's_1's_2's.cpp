#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> arr,int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[i]){
      swap(arr[i],arr[j]);
    }
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
 vector<int> arr;
 int n;
 int a;
 cin>>n;
 for(int i=0;i<n;i++){
   cin>>a;
   arr.push_back(a);
 }
  sort(arr,n);
  return 0;
}
