#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int start_s = clock();
    for(int b=1;  b!=1000; b++){
		for(int a = 1;a!=1000;a++){
			for(int c = 1; c!= 1000; c++){
				if((c*c)==(a*a +b*b)){
					if(c+a+b==1000){
                    	cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
                        cout<<"Product abc ="<<a*b*c<<endl;
					}
				}
			}
        }
	}
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;
}
