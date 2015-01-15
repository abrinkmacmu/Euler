#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int start_s = clock();    
	long n=1;
    long long sum=2;

    do{
		n=n+2;
		int counter=0;
		for(int divisor = 2; divisor<(n/2-1);divisor++){
			if(n%divisor==0){
				counter++;
				break;
			}
		}
        if(counter==0){
             sum=sum+n;
		}
    }while(n<2000000);

	cout<<sum<<endl;
	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
        return 0;
}

