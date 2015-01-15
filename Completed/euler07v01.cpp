#include <iostream>
#include <ctime>
#include <primesieve.hpp>
#include <stdint.h>
#include <cstdlib>
using namespace std;

int main()
{
    int start_s = clock();
	uint64_t n = 10001;
	uint64_t prime = primesieve::nth_prime(n);
	cout<<prime<<endl;



	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
        return 0;
}
