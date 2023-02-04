#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    n = n/2;
    for(int i=0;i<n;i++){            
        for(int j=0;j<i+1;j++){                               // for left side star
            cout<<"* ";
        }
        if(i<n-1){                                            // condition for not space between star
        for(int j=0;j<2*n-2*(i+1);j++){                       // for space between star
            cout<<"  ";
        }
        }
        for(int j=0;j<i+1;j++){                               // for right side star
            cout<<"* ";
        }
        cout<<endl;                                           // line break     
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){                               // for left side star
            cout<<"* ";
        }
        if(i>0){                                              // condition for not space between star
            for(int j=0;j<4*(i);j++)                          // for space between
                {
                    cout<<" ";
                }   
        }
        for(int j=0;j<n-i;j++){                               // for right side star
            cout<<"* ";
        }
        cout<<endl;                                           // line break
    }
    }
