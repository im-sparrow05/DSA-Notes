#include <iostream>
#include <string.h>
using namespace std;

// check palindrome

bool checkpalindrome(char sentance[]){                   // function to check palindrome
  int i=0;
  int n = strlen(sentance);
  int j = n-1;
  while(i<=j){
    if(sentance[i]!=sentance[j]){
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  char name[100];
  cin>>name;
  bool ans = checkpalindrome(name);
  cout<<ans;
  
  return 0;
}
