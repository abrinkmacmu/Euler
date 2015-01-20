#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
#include <gmpxx.h>

using namespace std;
mpz_class sumofdigits(mpz_class);
	
int main()
{
	int start_s = clock();
	for(int i = 0; i<1001;i++){
		cout<<"2^"<<i<<" = "<< pow(2,i)<< ", sum of digits: "<<sumofdigits(pow(2,i))<<endl;
	}
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;
}
mpz_class sumofdigits(mpz_class n){
	mpz_class sum =0;
	mpz_class rem = n;	
	while(rem>9){
		cout<<rem%10;
		sum = sum + rem%10;		
		rem = rem/10;
	}	
	cout<<rem%10<<endl;
	sum = sum + rem%10;

	return sum;
}
