#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"請輸入一個正整數:";
 cin>>n; 
 cout<<n<<" ";
 while(n!=1)
 {
  if(n%2==0)
  {
	  n=n/2;
	  cout<<n<<endl;
  }
  else
  {
          n=3*n+1;
          cout<<n<<endl;
  }
 }
return 0;
}

