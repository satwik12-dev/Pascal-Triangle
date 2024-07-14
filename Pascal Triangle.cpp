/*           1 
           1 2 1
          1 3 3 1
		 1 4 6 4 1
	   1 5 10 10 5 1
		
This is known as pascal triangle
Approach it can be done by cpmbinatioon of rows and column 
combination of i and j=   i!/(j!*(i-j)!)

*/


#include<iostream>
using  namespace std;
int fact(int x){
	int f=1;
	for(int i=1;i<=x;i++){
		f*=i;
	}
	return f;
}

int ncr(int n,int r){
	int a=fact(n);
	int b=fact(r);
	int c=fact(n-r);
	return a/(b*c);
}

int main(){
	int n,r;
	cout<<"Enter n:";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=(n-i);j++){
			cout<<"  ";
		}
		for(int j=0;j<=i;j++){
			cout<<ncr(i,j)<<"   ";
  		}
  		cout<<endl;
	}
}
