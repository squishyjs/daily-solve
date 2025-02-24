#include <iostream>>
#include <iomanip>
#include <limits>
#include <numbers>


using namespace std;
#define ll long double

int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    char c=':';
	    ll d,h1,h2,m1,m2,t1,t2;
	    cin >> h1 >> c >> m1;
	    cin >> h2 >> c >> m2;
	    cin >> d;
	    t1=(h1*60)+m1;
	    t2=(h2*60)+m2;
	    cout << fixed << setprecision(1) << t1-t2+d << " ";
	    if((t1-t2)>=(2*d))
	        cout << fixed << setprecision(1) << (t1-t2) << "\n";
	    else
	    {
	        ll d1=d;
	        ll d2=(d-(t1-t2));
	        cout << fixed << setprecision(1) << d1+((d-d2)/2) << "\n";
	    }
	}
	return 0;
}
