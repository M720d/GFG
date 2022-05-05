#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void insert(int index, int arr[6], int n)
{
	for(int i=6; i>index;i--)
	    arr[i]=arr[i-1];

	arr[index] =n;

	for(int i=0; i<=6; i++)
	 cout << arr[i]<<endl;


}


int main(){
	int num;int index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter index:";
	cin>>index;
	
    insert(index,arr,num);


	return 0;

}