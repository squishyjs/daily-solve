#include <iostream>
using namespace std;

int main() {
	int n;
	int c = 0;
	while(cin>>n)
	{
	    if(n==42)
	    {
	        c++;
	    }
	    if(c==0)
	    {
	        cout<<n<<"\n";
	    }
	}
	return 0;
}
