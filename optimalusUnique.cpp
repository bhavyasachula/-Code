#include <iostream>
#include <vector>
using namespace std;
vector<int> arr = {1,1,1,1,2,2,2,2,2,4,4,4,4};
 
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
