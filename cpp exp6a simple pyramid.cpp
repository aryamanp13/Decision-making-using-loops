//Aryaman Pathak EntcA2 o31 exp6simple-py.
#include <iostream>

using namespace std;

int main() {
	int i,j,n;
	cout<<"Enter the last number: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
    cout<<endl;
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