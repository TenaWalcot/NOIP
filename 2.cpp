#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int a[1001];
	memset(a,0,sizeof(a));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(a[k]==0)a[k]++;
	}
	int sum=0;
	int b[n];
	int m=0;
	for(int i=0;i<1001;i++){
		if(a[i]!=0){
			sum++;
			b[m]=i;
			m++;
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<sum;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
