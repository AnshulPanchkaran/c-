// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
// cin>>n;
// int i=1;
// while (i<=n)
// {
//     cout<<i<<" ";
//     i=i+1; 
// }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()

// {
//   int n ;
//   cin>>n;
//   int i =2;
//   int sum =0;
//   while (i<=n)
//   {
//     sum =sum+i;
//     i=i+2;
//   }
//   cout<<"the sum is"<<sum<<endl;

// return 0;
// }

// prime number is or not 


#include<iostream>
using namespace std;
int main()

{

  int n;
  cin>>n;
  int i =2;
  while (i<n)
  {
    
    if (n%i==0)
    {
      cout<<"not prime for"<< i <<endl;
    }
    else
    {
      cout<<"prime for "<< i <<endl;
    }
    i=i+1;
    
  }
  
return 0;
}