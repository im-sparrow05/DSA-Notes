/*  Vector 

    => if one vector is fully filled, then it creat a new vector with double the size of old vector & copy all 
    the elements of old vector to new vector. lastly, it dump the old vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int> a(5,1);                             // creat a vector of size 5 with initial value 1
    vector<int> last(a);                            // creat a vector with all element of 'a' vector
    
    v.push_back(1);                // add element to array
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    v.pop_back();                  // remove the upper element
    
    for(int i:v){                  // iterate through the vector
        cout<<i<<endl;             // 1 2 3 4 
    }
    
    int capacity = v.capacity();           // capacity() gives total element that can array can store                            
    
    int size = v.size();                  // size() gives total element that are are stored in array      
    
    cout<<capacity<<endl;                 // 8
    
    cout<<size<<endl;                     // 4
    
    cout<<"element at 2nd index => "<<v.at(2)<<endl;                // element at 2nd index => 3
    
    cout<<"Empty or not => "<<v.empty()<<endl;
    
    cout<<"First element => "<<v.front()<<endl;                     // First element => 1
    
    cout<<"Last element => "<<v.back()<<endl;                      // Last element => 4
    
    v.clear();                                        // clear the array & size will be 0, althrouth capicity is not 0
    
    return 0;
}
