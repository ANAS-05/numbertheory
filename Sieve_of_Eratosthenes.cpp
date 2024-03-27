#include<bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes
//ALGORITHM

int is_prime[1000001];
void sieve()
{
	int N=1000000;

	for(int i=2 ; i<=N ; i++){is_prime[i]=1;}
	is_prime[0]=is_prime[1]=0;

	for(int i=2 ; i*i<=N ; i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i ; j<=N ; j+=i){
				is_prime[j]=0;
			}
		}
	}
}

/*example problem
The problem statement is really simple. There are some queries. You are to give the answers.

Input:
An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.
Output:
Q lines with the answer of each query: the Kth prime number.

Input:
7
1
10
100
1000
10000
100000
1000000
Output:
2
29
541
7919
104729
1299709
15485863

program:
#include<bits/stdc++.h>
using namespace std;

vector <int> primes;
bool arr[90000001];		//global array: all are pre initialized to false or 0(in int array)

void sieve(){
	int maxN = 90000000;
	arr[0]=arr[1]==true;	//true means not a prime

	for(int i=2 ; i*i<=maxN ; i++)
	{
		if(!arr[i])		//arr[i]==false
		{
			for(int j=i*i ; j<=maxN ; j+=i)
			{
				arr[j]=true;
			}
		}
	}

	for(int i=2 ; i<=maxN ; i++){
		if(!arr[i]){
			primes.push_back(i);
		}
	}
}	

int main()
{
	int q,n;
	cin>>q;

	sieve();
	while(q--){
		cin>>n,cout<<primes[n-1]<<endl;
	}
}
*/
