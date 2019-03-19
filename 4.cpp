#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int m=a[i];
		if(m==1)cout<<1<<endl;
		if(m==2)cout<<1<<endl;
		if(m>2){
			int a1=1,a2=1,a;
			for(int i=2;i<m;i++){
				a=a1+a2;
				a1=a2;
				a2=a;
			}
			cout<<a<<endl;
		}
	}
	return 0;
} 
