#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> arr){
	for(int j=1;j<arr.size();j++){
		int key = arr[j];
		int i=j-1;
		while (i>=0 && arr[j]>key) {
				arr[i] = arr[i+1];
				i-=1;
		}
		arr[i]=key;
	}
	for (int i=0;i<arr.size();i++){
		std::cout<<arr[i];
	}
		cout<<"\n";
}
int main(){
	std::vector a = {5,2,4,6,1,3};
        insertionSort(a);
	return 0;
}

