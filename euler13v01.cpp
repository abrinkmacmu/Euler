#include <iostream>
#include <primesieve.hpp>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	int start_s = clock();
	
	ifstream mfile;
	mfile.open("numsfore13.txt");
	if (0 == mfile.is_open()) { 
		cout<<"Could not open file. Exiting..."<<endl;
		return 0;
	}
	int x[100][50];
	char c;
	for(int i = 0;i<100;i++){
		for(int j= 0; j<50;j++){
			mfile>>c;
			x[i][j] = (int)(c-'0');
			cout<<c;
		}
		cout<<endl;
	}
	int y[1000];
	int carry = 0;
	int colsum=0;
	for(int j = 0; j<50;j++){
				
		int colsum=carry;
		for(int i = 0; i<100;i++){
			colsum = colsum + x[i][49-j];
			cout<<49-j<<" "<<i<<" "<<endl;
		}
		y[49-j] = colsum%10;
		carry = (colsum - colsum%10)/10;
				
		cout<<"colsum:"<< colsum;
		cout<<" y: "<< y[j];
		cout<<" carry: "<< carry<<endl;
		
	}
	
cout<<carry;
for(int i = 0; i<10; i++){
	cout<<y[i];
}
cout<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;

}
