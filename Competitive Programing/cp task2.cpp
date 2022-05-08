#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void insert(int index, int arr[6], int n) {

	int i;

	for(i=6; i>index;i--)
		arr[i] = arr[i-1];

	arr[index] = n;

	for(i=0; i<=6; i++)
		cout<<arr[i]<<endl;
}


int main() {

	int num, index;

	cout<<"Enter a number:";
	cin>>num;

	cout<<"Enter index:";
	cin>>index;
	
    insert(index, arr, num);
	
	return 0;
}