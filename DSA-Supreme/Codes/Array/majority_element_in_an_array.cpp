#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using sorting 1st approach

int main() {
 vector<int> arr;
 int a;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
   cin>>a;
   arr.push_back(a);
 }
 sort(arr.begin(),arr.end()); 
 int x = arr[n/2];                      // store mid element in variable
 int count =0;
 for(int i=0;i<n;i++){                  // count mid element 
   if(x == arr[i]){
     count++;
   }
 }
 if(count>n/2){                         // check if count is greter than n/2
   cout<<x;
 }
 else{
   cout<<"majority don't exist";
 }

  return 0;
}


// second approach using sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using sorting 

int main() {
 vector<int> arr;
 int a;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
   cin>>a;
   arr.push_back(a);
 }
 sort(arr.begin(),arr.end()); 
 int count = 1;
 int x = arr[0];
 for(int i=0;i<n-1;i++){
   if(count > n/2){
     break;
   }
   if(arr[i]==arr[i+1]){
     count++;
   }
   else{
     x = arr[i+1];
     count = 1;
   }
 }
 if(count > n/2){
   cout<<x;
 }
 else{
   cout<<"majority do not exist";
 }

  return 0;
}
