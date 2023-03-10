#include <iostream>
#include <string.h>
using namespace std;

// replace space

void replacespace(char sentance[]){.                // replace function
  int n = strlen(sentance);
  for(int i=0;i<n;i++){
    if(sentance[i]==' '){
      sentance[i]='@';
    }
  }
}

int main() {
  char name[100];
  cin.getline(name,100);

  replacespace(name);
  cout<<name;
  return 0;
}
