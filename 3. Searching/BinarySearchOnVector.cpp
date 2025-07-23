#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>data){
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(vector<int>data,int key){
    int low = 0;
    int high = data.size();
    while(low<=high){
        int mid = (low+high)/2;

        if(key == data[mid]){
            return mid;
        }
        else if(key < data[mid]){ high = mid-1; }
        else{ low = mid+1; }
    }
    return -1;
}

int main(){
    vector<int>data = {2,5,8,9,13,18,19,99};
    printArray(data);
    cout<<binarySearch(data,8)<<endl;
    cout<<binarySearch(data,18)<<endl;
    cout<<binarySearch(data,15)<<endl;

return 0;
}

