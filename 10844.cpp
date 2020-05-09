#include <iostream>
using namespace std;
int memo[101][10]={0,};
long long find_floor(int num){
	for(int i=1;i<=9;i++)
		memo[1][i]=1;
	if(num>=2){
		for(int i=2;i<=num;i++){
			for(int j=1;j<=9;j++){
				memo[i][j] = (memo[i-1][j-1]+memo[i-1][j+1])%1000000000;
			}
		}
	}
	long long result=0;
	long long temp;
	for(int i=1;i<=9;i++){
		result+=(memo[num][i]%1000000000);
	}
	return result;
}
int main(){
	int num;
	cin>>num;
	cout<<find_floor(num);
}
