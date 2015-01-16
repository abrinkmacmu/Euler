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
	mfile.open("griddigits.txt");
	if (0 == mfile.is_open()) { 
		cout<<"Could not open file. Exiting..."<<endl;
		return 0;
	}
 	int x[20][20];
	for(int i = 0; i<20; i++){
		for(int j = 0; j<20;j++){
			mfile>>x[i][j];
			cout<<x[i][j]<<" ";
		}
		cout<<endl;	
	}
	mfile.close();
	long product = 0;
	long maxproduct = 0;
	// column products	
	for(int i = 0; i<20;i++){	
		for(int j = 0; j<(20-3);j++){
			product = x[i][j]*x[i][j+1]*x[i][j+2]*x[i][j+3];
			cout<<i<<" "<<j<<endl;			
			if(product > maxproduct){
				maxproduct = product;
			}
		}
	}
	// row products	
	for(int i = 0; i<(20-3);i++){	
		for(int j = 0; j<(20);j++){
			product = x[i][j]*x[i+1][j]*x[i+2][j]*x[i+3][j];
			if(product > maxproduct){
				maxproduct = product;
			}
		}
	}
	// right diag products	
	for(int i = 0; i<(20-3);i++){	
		for(int j = 0; j<(20-3);j++){
			product = x[i][j]*x[i+1][j+1]*x[i+2][j+2]*x[i+3][j+3];
			if(product > maxproduct){
				maxproduct = product;
			}
		}
	}
	// left diag products
	for(int i = 0; i<(20-3);i++){	
		for(int j = 3; j<(20);j++){
			product = x[i][j]*x[i+1][j-1]*x[i+2][j-2]*x[i+3][j-3];
			if(product > maxproduct){
				maxproduct = product;
			}
		}
	}
	cout<<maxproduct<<endl;
 	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
 	return 0;
}
