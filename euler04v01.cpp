#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int start_s = clock();    
	int digit[] = {0,0,0,0,0,0};
    int xy;
    int counter=1;
    for(int x=999; x>=500;x--)
    {
		//cout<<"x ="<<x<<"\n"<<endl;
		for(int y=999;y>=500; y--){
			xy=x*y;
			for(int i = 5; i>=0; i--){
				digit[i]=xy%10;
				xy /= 10;
			}
            xy=x*y;

			if((digit[0]==digit[5]) &&(digit[1]==digit[4]) && (digit[2]==digit[3])){
				//cout<<x<<","<<y<<"\n"<<endl;
				if(xy>=counter){
					counter=xy;
				}
			}
    	}
	}
	cout<< counter<<endl;
cout << "Code executed in " << (clock()-start_s)/double(CLOCKS_PER_SEC)*1000 <<" millisec" <<endl;
return 0;
}


