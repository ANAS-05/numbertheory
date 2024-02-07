#include<bits/stdc++.h>
using namespace std;
//to calculate a^x value
//time complexity -> O(log(x))
//channel - a code daily
int power(int a , int x){

	if(x==0){return 1;}
	if(x%2){
		int part = power(a,(x-1)/2);   		//x is odd here	
		return part*part*a;					//a^x => a^(x-1)/2 * a^(x-1)/2 * a 
	}
	else{
		int part = power(a,x/2);			//x is even here
		return part*part;					//a^x => a^(x/2) * a^(x/2)
	}
}

int main()
{
	int a=0,x=0;
	cin>>a>>x;

	int res = power(a,x);

	cout<<res<<" "<<"\n";
	
	return 0;
}
