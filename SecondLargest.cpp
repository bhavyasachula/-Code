#include <iostream>
#include <vector>
using namespace std;

 vector<int> arr= {1,2,4,2,5};
int main(){
    int largest = 0;
    int secondLargest = -1;
for(int i = 0; i< arr.size(); i++){
    if(arr[i] > largest){
        secondLargest = largest; // previous largest moves to second largest
        largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > secondLargest){
        secondLargest = arr[i];
    }
    cout<<"Second Largest Elem:"<<secondLargest
}

cout<<"largest Element from the array:" << largest;
  
}