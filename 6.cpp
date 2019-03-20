#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1)cout<<1<<endl;
	if(n==2)cout<<3<<endl;
	if(n>2){
		int k1=3,k;
		for(int i=2;i<n;i++){
			k=2*k1+1;
			k1=k;
		}
		cout<<k<<endl;
	}
	return 0;
}
