#include <iostream>
#include <string.h>
using namespace std;

// convert to upper case

void convertUppercase(char sentance[]){                // function to convert uppercase
int n = strlen(sentance);
   for(int i=0;i<n;i++){
     sentance[i] = sentance[i]-'a'+'A';
   }
}

int main() {
  char name[100];
  cin>>name;
  convertUppercase(name);
  cout<<name;
  
  return 0;
}
