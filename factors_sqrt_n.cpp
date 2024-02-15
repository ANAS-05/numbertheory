#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int n;cin>>n;
		    //i*i<=n --> i<=√n
	for(int i=1 ; i*i<=n ; i++){
		if(n%i==0){
		   if(i!=(n/i)){cout<<i<<" "<<n/i<<endl;}		// i*n/i = n  i.e factor1 * factor2 = ognumber
		   else{cout<<i<<endl;}					// for perfect squares n/i will be equal to i therefore counting only once	
	}
 }
	//to print number of factors of a given number we can do..
	int count=0;
	for(int i=1 ; i*i<=n ; i++){
		if(n%i==0){
		count++; 	//i is a factor

	   	 if(i!=(n/i))    // for perfect squares n/i will be equal to i therefore counting only once 
			count++;   //(n/i) is also a  factor
		}
	}
	cout<<count<<endl;	//prints the number of factors of a given number

	//we can check for prime num also if count == 2
}
