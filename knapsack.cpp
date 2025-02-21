#include<bits/stdc++.h>
using namespace std;
void sprofit(float profit[],float weight[],int n,int c){
	
	for (int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			if(profit[i]>profit[j]){
				swap(profit[i],profit[j]);
			swap(weight[i],weight[j]);
			}
			
		}
	}
	float sumprofit=0;
	
		for( int j=0;j<n;j++){
		
		if(c>=weight[j]){
		
			sumprofit=sumprofit+profit[j];
				
				}
			
		else if(c<weight[j]&&c>0){
			sumprofit+=c*(profit[j]/weight[j]);}
			c =c - weight[j];
}
	cout<< "profit sort"<< sumprofit ;
			
}
void sweight(float profit[],float weight[],int n,int c){
	
	for (int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			if(weight[i]<weight[j]){
				
			swap(weight[i],weight[j]);
			swap(profit[i],profit[j]);
			}
			}
	}
float sprofit=0;
		for(int j=0;j<n;j++){
		
		if(c>=weight[j]){
		
			sprofit=sprofit+profit[j];
			}
			
		else if(c<weight[j]&&c>0){
			sprofit+=c*(profit[j]/weight[j]);}
				c =c - weight[j];
}
	cout<< "weight sort"<< sprofit <<endl  ;
	
			
}
void sprofitweight(float profit[],float weight[],int n,int c){
	vector<float>temp;
	for(int i=0;i<n;i++){
		temp.push_back(profit[i]/weight[i]);
		}
		for(int k=0;k<temp.size();k++){for(int m=0;m<temp.size();m++){
		
			if(temp[k]>temp[m]){
				swap(temp[k],temp[m]);
					swap(weight[k],weight[m]);
			swap(profit[k],profit[m]);
			}	}}
		int sprofit=0;
		for(int j=0;j<n;j++){
		
		if(c>=weight[j]){
			
			sprofit=sprofit+profit[j];
			}
			
		else if(c<weight[j]&&c>0){
			sprofit=sprofit+c*(profit[j]/weight[j]);
			break;}
			c =c - weight[j];
}


	cout<< "profit/weight sort"<< sprofit ;
		cout<< endl;
	}

int main(){
	int n;
	cout<<"enter list items";
	cin>>n;
		int c;
	cout<<"enter capacity";
	cin>>c;
	float profit[n] ;
	float weight[n];
	for(int i=0;i<n;i++){
		cout<<"enter profit";
	cin>>profit[i];
	cout <<"enter weight";
	cin>>weight[i];}
	sweight(profit,weight,n,c);
	sprofit(profit,weight,n,c);
	sprofitweight(profit,weight,n,c);
	return 0;	
}