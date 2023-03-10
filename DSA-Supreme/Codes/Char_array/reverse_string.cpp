#include <iostream>
#include <string.h>
using namespace std;

// string swap

void reversechar(char name[]){                    // swap function
  int i =0;
  int n = strlen(name);
  int j = n-1;

  while(i<=j){
    swap(name[i],name[j]);
    i++;
    j--;
  }
}

int main() {
  char name[100];
  cin>>name;

  reversechar(name);
  cout<<name;
  return 0;
}
