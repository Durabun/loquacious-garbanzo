#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,i,a;
	int is_name = false;

	a = 56628426;
	i = 0;
	cout<<"What is the password? ";
	
	if (is_name == false)
		while (is_name == false)
			cout<<"What is the password? ";
			cin>>n;
			if (n==a)
				is_name = true;
			else
				i=i+1;
				cout<<"Try again! ";
	
	if(is_name == false)
		cout<<"It took you "<<i<<" tries!"<<endl;

	return 0;
}
