#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int start_s = clock();
	vector<long> primes;
	primesieve::generate_primes(2,2000000,&primes);
	uint64_t n = 0 ;
	for(vector<long>::iterator it = primes.begin(); it != primes.end();++it){
		n = n + *it;
	}
cout<<n<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}	
