#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
#include<fstream>
#include <cstdlib>
using namespace std;

int main(){
	int start_s = clock();
	ifstream mfile;
	mfile.open("digits.txt");
	if (0 == mfile.is_open()) { 
		cout<<"Could not open file. Exiting..."<<endl;
		return 0;
	}
 	int x[1000];
	char c;
	for(int i = 0; i<1000; i++){
		mfile>>c;
		x[i] = (int)(c-'0');		
	}
	mfile.close();
	uint64_t product;
	uint64_t maxprod = 0;
	for(int i = 0; i<(1000-13); i++){
		product = 1;
		for(int j = 0;j<13;j++){
			product = product*x[i+j];
		}
		if(product>maxprod){
			maxprod = product;
		}
	}	
 	cout<<maxprod<<endl;
 	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
 	return 0;
}
