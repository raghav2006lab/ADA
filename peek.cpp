#include<bits/stdc++.h>
using namespace std;
void peek(int a[],int n){
	for(int i=0;i<n;i++){
		if((i==0 &&a[i]>a[i+1]) || (i==n&&a[i]>a[i-1])){
			cout<<a[i]<<" is peek";
			break;
			
		}
		else if(a[i]>a[i+1]&&a[i]>a[i-1]){
				cout<<a[i]<<" is peek";
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	peek(a,n);
	return 0;
}