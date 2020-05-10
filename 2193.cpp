#include<iostream>
using namespace std;
long long prime[10000];
long long find_prime(int num){
	prime[1]=1;
	prime[2]=1;
	for(int i=3;i<=num;i++){
		prime[i]=prime[i-1]+prime[i-2];
	}
	return prime[num];
}
int main(){
	int n;
	cin>>n;
	cout<<find_prime(n);
}
