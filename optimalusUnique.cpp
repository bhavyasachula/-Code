#include <iostream>
#include <vector>
using namespace std;
vector<int> arr = {1,1,1,1,2,2,2,2,2,4,4,4,4};
// two pointers approach i pointer will be at index 0  and j pointer will be at index 1 then j pointer traverse the array and checks is the element of arr[i] is not equall then place it beside the ith index and point to it / i++ and return the index+1 of i to know how many unique elements are there;
int optimalUniqueElem(vector<int> arr){
    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return {i+1};
}

int main(){
    int uniqueElem = optimalUniqueElem(arr);
    cout<<"Unique Elements in Given Array:"<<uniqueElem;
}
