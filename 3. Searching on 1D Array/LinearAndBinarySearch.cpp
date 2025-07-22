#include<iostream>
using namespace std;

template<typename dataType>
int linearSearch(dataType data[],int size,dataType v){
	int index = -1;
	for(int i=0;i<size;i++){
		if(data[i] == v){
			index = i;
			break;
		}
	}
	return index;
}

template<typename dataType>
int binarySearch(dataType data[],int size,dataType v){
	int index = -1;

	int first = 0;
	int last = size-1;

	while(first<=last){
		int mid = (first+last)/2;
		if(v == data[mid]){
				index = mid;
				break;
		}
		else if(v < data[mid]){
			last = mid-1;
		}
		else{
			first = mid+1;
		}
	}

	return index;
}


int main(){
	char data[20] = "HELLO WORLD";

	float dataSorted[10] = {12,15.5,16,18,20,24,25,30,56,88};

	cout<<linearSearch<char>(data,20,'W')<<endl;


	int size = 10;
	int index = binarySearch<float>(dataSorted,size,15.5);

	if(index>=0){
		cout<<"Data "<<dataSorted[index]<<" found at index = "<<index<<endl;
	}
	else{
		cout<<"Data Not Found"<<endl;
	}

return 0;
}





