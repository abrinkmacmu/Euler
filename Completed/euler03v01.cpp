#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	int start_s = clock();
	uint64_t N = 600851475143 ;	
	//uint64_t N = 13195 ;	
	primesieve::iterator primeit(sqrt(N));
	uint64_t prime;
    while(0 != N % (prime = primeit.previous_prime()) ){
		
	}
cout<<prime<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}
