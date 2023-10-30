#include<iostream>
#include<array>
using namespace std;

int main(){
	int sizeofarray;
	int numbers[100];
	int targetnumber;
	int i=0;
	int j=0;
	cout<<"Enter the size of array";
	cin>>sizeofarray;
	cout<<"Enter the numbers in the array";
	while(i<sizeofarray){
		cin>>numbers[i];
		i++;
	}
	cout<<"Enter the target number to match";
	cin>>targetnumber;
	while(j<(sizeofarray-1)){
		int k=j+1;
		while(k<sizeofarray){
			if((numbers[j]+numbers[k])==targetnumber){
				cout<<j;
				cout<<k;
			}
			k++;
		}
		j++;
	}

	
}