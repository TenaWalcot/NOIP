#include <iostream>
#include <cstring>
using namespace std;
int a[20];
int b[20];
string c[20];
string temp;
void sort(int l,int r){
	int i=l,j=r,mid;
	mid=a[(i+j)/2];
	do{
		while(a[i]<mid)i++;
		while(a[j]>mid)j--;
		if(i<=j){
			swap(a[j],a[i]);
			swap(c[j],c[i]); 
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j)sort(l,j);
	if(i<r)sort(i,r);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>c[i]>>a[i];
	sort(0,n-1);
	for(int i=n-1;i>=0;i--)cout<<c[i]<<" "<<a[i]<<endl;
	return 0;
}
