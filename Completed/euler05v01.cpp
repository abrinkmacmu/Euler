#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	int start_s = clock();
	uint64_t N = (2*2*2*2*3*3*5*7*11*13*17*19);	
	
cout<<N<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}
