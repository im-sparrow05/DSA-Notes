#include <iostream>
#include <vector>
using namespace std;

int main() {
 vector<int> arr;
 int a;
 for(int i=0;i<9;i++){
   cin>>a;
   arr.push_back(a);
 }
 for(int i=0;i<8;i++){
   swap(arr[i],arr[i+1]);
 }
 for(int i=0;i<9;i++){
   cout<<arr[i]<<" ";
 }
  return 0;
}
