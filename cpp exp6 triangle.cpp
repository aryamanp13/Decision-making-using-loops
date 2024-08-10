//Aryaman Pathak EntcA2 o31 exp6inverted-py
#include <iostream>

using namespace std;

int main() 
{
	int i,j,n,k=5;
	cout<<"Enter the last number: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=k)
			{
				cout<<"* ";
			}
			else
			    cout<<" ";
		}
			k--;
			cout<<"\n";
	}
}
/*output
Enter the last number:
5
    *
   * *
  * * *
 * * * *
* * * * * 
*/
