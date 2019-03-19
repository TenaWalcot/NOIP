#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2!=0)sum++;
	}
	int b[sum];
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			b[m]=a[i];
			m++;
		}
	}
	for(int i=0;i<sum;i++){
		int k=i;
		for(int j=i+1;j<sum;j++){
			if(b[j]<b[k])k=j;
		}
		if(k!=i)swap(b[k],b[i]);
	}
	cout<<b[0];
	for(int i=1;i<sum;i++)cout<<","<<b[i];
	return 0;
}
