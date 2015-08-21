#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

const int SIEVESIZE = 1000000;
int sqroot = sqrt(SIEVESIZE) + 1;
vector<int> primes;
vector<int> sieve(SIEVESIZE,1);

void init(){
	printf("Limit is %d\n", sqroot);
	sieve[0] = 0;
	for(int i=2;i<sqroot;++i){
		int temp = i;
		while(temp < sieve.size()){
			sieve[temp] = 0;
			temp += i;
		}
	}
	cout << "Sieving is done " << endl;
	for(int i=0;i<sieve.size();++i){
		if(sieve[i])
			primes.push_back(i);
	}
	for(int i=0;i<primes.size();++i){
		printf("%d ", primes[i]);
	}
}
int main(){
	init();
	return 0;
}
