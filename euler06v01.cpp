#include <iostream>
#include <ctime>
using namespace std;

int main()
{
 int start_s = clock();
 long long suma=0, sumb=0;
 for(int a=0; a<=100;a++){
    suma=suma+a*a;
    for(int b=0; b<=100; b++){
        sumb=sumb+b;
	}
 }

 cout<<((sumb*sumb)-suma)<<endl;
 cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
 return 0;
}
