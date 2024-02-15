#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int n;cin>>n;
				//i*i<=n --> i<=√n
	for(int i=1 ; i*i<=n ; i++){
		if(n%i==0){cout<<i<<" "<<n/i<<endl;}			// i*n/i = n  i.e factor1 * factor2 = ognumber
	}
}