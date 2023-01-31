#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k = i;
        for(int j=n;j>1-i;j--){
            if(j<=i && j>0){
                cout<<k;
                if(j>1){
                k++;
                }
            }
            else if(j<=i && j<=0){
                k=k-1;
                cout<<k;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
