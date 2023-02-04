#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    n = n/2;
    
    for(int i=0;i<n;i++){                    // upper region 
        for(int j=0;j<n-i;j++){              // left side star 
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){            // for space between star
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){              // for right side star
            cout<<"*";
        }
        cout<<endl;                          // line break
    }
    for(int i=n-1;i>=0;i--){                 // lower region
        for(int j=0;j<n-i;j++){              // left side star
            cout<<"*";
        }
        for(int j=0;j<=2*i;j++){             // for space between star
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){              // for right side star
            cout<<"*";
        }
        cout<<endl;                          // line break
    }
    }
