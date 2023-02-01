#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=n;i>0;i--){
        int k = 1;
        for(int j=1;j<=n;j++){
            if((j==i || j==n) && i!=1){
                cout<<k<<" ";
                k++;
            }
            else if(i>j){                   // condition for space in beginining
                cout<<" ";
            }
            else if(i==1){                  // condition for last row
                cout<<k<<" ";
                k++;
            }
            else{                           // condition for hollow space
                cout<<"  ";
                k++;
            }
        }
        cout<<endl;
    }
}
