#include <iostream>
using namespace std;
int memo[100000];
int find(int num){
	if(num==3) return 1;
	if(num==2) return 1;
	if(num==1) return 0;
	for(int i=1;i<=num;i++){
		if(memo[i]!=0) return memo[i];
		if(i%2==0){
			if(memo[i/2]>memo[i-1]) return memo[i]=find(i-1)+1;
			else return memo[i]=find(i/2)+1;
		}
		if(i%3==0){
			if(memo[i/3]>memo[i-1]) return memo[i]=find(i-1)+1;
			else return memo[i]=find(i/3)+1;
		}
	}
	
}
int main(){
	int num;
	cin>>num;
	cout<<find(num);
}
