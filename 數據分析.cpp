#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ave(int a[],int n){
	float Ave=0;
	for(int i=1;i<=n;i++){
		Ave=Ave+a[i];
	}
	return (Ave/n);
}

int me_even(int k,int l,int a[]){
	float me;
	me=(a[k]+a[l])/2;
	return me; 
}
int me_odd(int k,int a[]){
	float me;
	me=a[k];
	return me; 
}

int q1_notint(int m,int a[]){
	int q1;
	q1= a[m+1];
	return q1;
}
float q1_int(int m,int a[]){
	float q1;
	q1= (float)(a[m]+a[m+1])/2;
	
	return q1;
}

int q3_notint(int m,int a[]){
	int q3;
	q3= a[m+1];
	return q3;
}
float q3_int(int m,int a[]){
	float q3;
	q3= (float)(a[m]+a[m+1])/2;
	return q3;
}

int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<"Average: "<<ave(a,n)<<endl; 
	if(n%2==0){
		cout<<"Median: "<<me_even((n/2),((n/2)+1),(a))<<endl;
	}
	else if(n%2==1){
		cout<<"Median: "<<me_odd(((n/2)+1),(a))<<endl; 
	}
	
	if(n%4!=0){
		cout<<"Q1: "<<q1_notint((n/4),(a))<<endl;
		cout<<"Q3: "<<q3_notint((n/4*3),(a))<<endl; 
	}
	else if(n%4==0){
		cout<<"Q1: "<<q1_int((n/4),(a))<<endl;
		cout<<"Q3: "<<q3_int((n/4*3),(a))<<endl;
	}
	
	
	return 0;
 }

