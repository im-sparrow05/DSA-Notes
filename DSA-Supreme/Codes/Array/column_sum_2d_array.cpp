#include <iostream>
using namespace std;
void findsum(int arr[][3],int col,int row){
  for(int i=0;i<row;i++){
    int sum = 0;
    for(int j=0;j<col;j++){
      sum = sum + arr[j][i];
    }
    cout<<sum<<" ";
  }
}

int main() {
  int arr[3][3] = {{1,3,5},{2,4,6},{5,7,9}};
  findsum(arr,3,3);
  return 0;
}
