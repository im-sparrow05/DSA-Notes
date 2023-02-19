#include <iostream>
using namespace std;

// finding real part of square root using binary search
int findReal(int x){
        int s = 0;
        int e = x;
        long int m = s + (e-s)/2;
        int ans = -1;
        if(x>46341){
            e = 46341;
        }
        
        while(s<=e){
            if(m*m==x){
                return m;
            }
            else if(m*m>x){
                e = m -1;
            }
            else{
                ans = m;
                s = m + 1;
            }
            m = s + (e-s)/2;
        }
      return ans;
    }


int main() {
  int x;
  cin>>x;
        int realP = findReal(x);            // storing real part in variable

 // finding precision
 int precision;                             
  cout << "Enter the number of floating digits in precison "<<endl;
  cin >> precision;

  double step = 0.1;
  double finalAns = realP;
  for(int i=0; i<precision; i++) {

  for(double j=finalAns; j*j<=x; j = j + step) {
         finalAns = j;
     }
     step = step / 10;
   }
   cout << "Final ans is. "<< finalAns << endl;
  return 0;
}
