#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,i,a;
	int is_name = false;

	a = 56628426;
	i = 0;
	while (is_name == false)
		cout<<"What is the password? ";
		cin>>n;
		if (n==a)
			is_name = true;
		else
			i=i+1;
	
	if (is_name == true)
		cout<<"It took you "<<i<<" tries!"<<endl;

	return 0;
}
