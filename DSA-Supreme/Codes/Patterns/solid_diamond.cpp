#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    n = n/2;
    for(int i=n;i>0;i--){                               // full pyramid pattern
        for(int j=1;j<=n;j++){
            if(j>=i){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){                              // inverted full pyramid pattern
        for(int j=1;j<=n;j++){
            if(j>=i){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }
