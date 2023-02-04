#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=0;i<n;i++){                          // for upper part
        for(int j=0;j<n-i-1;j++){                  // printing space before star
            cout<<" ";
        }
        cout<<"*";                                 // pringing initial star
        for(int j=0;j<2*i-1;j++){                  // for space between star
            cout<<" ";
        }
        if(i>0){                                   // for last star
        cout<<"*";
        }
        cout<<endl;                                // line break
    }
    for(int i=n;i>0;i--){                          // for inverted part
        for(int j=1;j<=n;j++){                     // for space before star
            if(j>i){
                cout<<" ";        
            }
        }
        cout<<"*";                                 // for first star
        for(int j=1;j<=2*i-3;j++){                 // for space between star
            cout<<" ";
        }
         if(i>1){
        cout<<"*";                                 // for last star
        }
        cout<<endl;                                // line break
    }
    }
