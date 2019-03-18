#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int k;
	cin>>k;
	int b[k];
	memset(b,0,sizeof(b));
	for(int i=0;i<k;i++)cin>>b[i];
	for(int i=0;i<k;i++){
		int m;
		m=b[i];
		int a1=1,a2=2,a;
		if(m==1){
			cout<<1<<endl;
		}
		if(m==2){
			cout<<2<<endl;
		}
		if(m>2){
			for(int i=2;i<m;i++){
				a=2*a2+a1;
				a1=a2;
				a2=a;
			}
			a%=32767;
			cout<<a<<endl;
		}
	}
	return 0;
}
