#include <iostream>
using namespace std;
long long climb[1002][10]={0,};
int search_climbing(int num){
	for(int i=0;i<=9;i++){
		climb[1][i]=1;
	}
	for(int i=2;i<=num;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=j;k++){
				climb[i][j] += climb[i-1][k];
				climb[i][j]%=10007;
			}
		}
	}
	long long sum=0;
	for(int i=0;i<=9;i++){
		sum+=climb[num][i];
		sum%=10007;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<search_climbing(n);
} 
