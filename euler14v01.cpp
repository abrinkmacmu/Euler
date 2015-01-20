#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>

using namespace std;
void collatz(uint64_t, int *);
	
	
int main()
{
	int start_s = clock();
	int maxnum = 0;
	int maxlen = 0;
	int len = 1;
	for(int i = 1; i<1000000;i++){
		len = 1;		
		collatz((uint64_t)i,&len);
		//cout<<" :: "<<i<<" len: "<<len<<endl;
		if(len >= maxlen){
			maxnum = i;
			maxlen = len;
			cout<<"Nex Max found: "<<maxnum<< " "<<maxlen<<endl;
		}
	}
cout<< "Num with max Collatz length is: "<< maxnum<< " "<< maxlen<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}

void collatz(uint64_t n,int * length){
//	cout<<n;	
	if(n < 2){
		return;
	}
//	cout<<"->";
	*length = *length +1;
	if(0 == n%2){
		n = n/2;
	}else{
		n = 3*n+1;
	}
	collatz(n,length);
	return;
}
