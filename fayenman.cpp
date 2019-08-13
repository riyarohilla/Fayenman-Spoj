#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		int sum=(n*(n+1)*(2*n+1))/6;
		cout<<sum<<endl;
	}
	return 0;
}
