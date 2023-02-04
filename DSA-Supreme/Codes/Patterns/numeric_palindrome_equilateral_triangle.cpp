#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=0;i<n;i++){            
        for(int j=0;j<n-i-1;j++){                        // for space before pyramid
            cout<<"  ";
        }
        for(int j=1;j<=i+1;j++){                         // for half pyramid
            cout<<j<<" ";
        }
        for(int j=i;j>0;j--){                            // for other half pyramid
            if(i>0){
            cout<<j<<" ";
            }
        }
        cout<<endl;                                      // line break
    }
    }
