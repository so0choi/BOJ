 #include<iostream>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	for(int i=0;i<n-1;i++){
 		for(int j=0;j<n-i-1;j++)
 			cout<<" ";
 		cout<<'*';
 		if(i!=0){
	 		for(int j=0;j<i*2-1;j++)
	 			cout<<" ";
	 		cout<<'*';
 		}
 		cout<<'\n';
	 }
	 for(int i=0;i<n*2-1;i++)
	 	cout<<"*";
 }
