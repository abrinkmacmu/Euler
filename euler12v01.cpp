#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	int start_s = clock();
	uint64_t n = 2;
	uint64_t triangleno = 1;
	int divisorcnt = 0;
	while(true){
		triangleno=triangleno + n;
		cout<<triangleno;
		divisorcnt = 0;
		for(uint64_t j = 1; j<=triangleno;j++){
			if(0 == triangleno%j){
				divisorcnt++;
				//cout<<j<<", ";
			}
		}
		cout<<":: divisorcnt = "<< divisorcnt<<endl;
		n++;
		if(divisorcnt>500){
			break;
		}
	}

cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}
