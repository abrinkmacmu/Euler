#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
 int start_s = clock();
 uint64_t suma=0;
 uint64_t sumb=0;
 
 for(int a=0; a<=100;a++){
    suma=suma+a*a;
    sumb=sumb+a;
	}
 
 uint64_t total = (sumb*sumb)-suma;
 cout<<total<<endl;
 cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
 return 0;
}
