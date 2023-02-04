#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    for(int i=0;i<n;i++){            
        char ch = 65;                                 // declareing char data type to print alphabate
        for(int j=0;j<i+1;j++){                       // print up to increasing alphabate
         cout<<ch<<" ";
            ch++;
        }
        ch = ch - 2;
        for(int j=0;j<i;j++){                         // for decreasing alphabate
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;                                   // line break
    }
    }
