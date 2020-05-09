#include <iostream>
using namespace std;
int memo[10000]={0,};
int find(int num){
	memo[1]=1;
	memo[2]=2;
	memo[3]=4;
	for(int i=4;i<=num;i++){
		memo[i] = memo[i-1]+memo[i-2]+memo[i-3];
	}
	return memo[num];
}
int main(){
	int count,num;
	cin>>count;
	for(int i=0;i<count;i++){
		cin>>num;
		cout<<find(num)<<'\n';
	}
}
