#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	int start_s=clock();
	int n;
    int sum=0;
    for(n=1; n!=1000; n++){
		if((n%3 == 0)||(n%5==0)){
        sum=sum+n;
				}
	}
    cout<<sum<<endl;
	cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
	return 0;
}
