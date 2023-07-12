// #include<iostream>
// using namespace std;
// int main()
// {

// int n;
// cin>>n;
// int row =1;
// while (row<=n)
// {
//      int col =1;
//      while (col<=n)
//      {
//         char ch='A'+row-1;
//         cout<<ch;
//      col= col+1;
      
//       }
//       cout<<endl;
//       row =row +1;

     
// }

    
// return 0;
// }














// pattern 2


// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin>> n;
//    int  row =1;
//    while (row<=n)

//    {
//       int col=1;
//       while (col<=n)
//       { 
//          char ch ='A'+col-1;

//          cout<<ch;
//          col =col+1;

//       }
//       cout<<endl;
//       row =row+1;
//    }
   
// return 0;
// }


 
 
 
 
 
 
              
              
              
              
              
               // patttern 3
// #include<iostream>
// using namespace std;
// int main()
// {

//    int n;
//    cin>>n;
//    int row =1;
//          char start ='A';

//    while (row<=n)
//    {
//       int col=1;

//       while (col<=n)
//       {
//          cout<<start<<" ";
//          start =start+1;
//          col =col+1;

//       }
//       cout <<endl;
//       row =row+1;
      
//    }
   
// return 0;
// }










// pattern 4
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;
//    int row =1;

//    while (row<=n)
//    {
//     int col=1;
//     while (col<=n)
//     {
//         char ch ='A'+row +col-2;
//         cout<<ch ;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }






// //pattern 5
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;
//    int row =1;

//    while (row<=n)
//    {
//     int col=1;
//     while (col<=row)
//     {
//         char ch ='A'+row -1;
//         cout<<ch ;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }






//pattern 6

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;
//    int row =1;
// char ch ='A';
//    while (row<=n)
//    {
//     int col=1;
//     while (col<=row)
//     {
//         cout<<ch ;
//         ch = ch +1;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }






//pattern 7

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {
//     int col=1;
           

//     while (col<=row)
//     {
//                 char ch ='A'+row +col -2 ;

//         cout<<ch<<" ";
//         ch++;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }









// pattern 8

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {
//     int col=1;
           

//                 char ch ='A'+n - row ;
//     while (col<=row)
//     {

//         cout<<ch<<" ";
//         ch++;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }






// pattern 9

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {
//     int col=1;
           

//                 char ch ='A'+n + row-(n+1);
//     while (col<=n)
//     {

//         cout<<ch<<" ";
//         ch++;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }








//pattern 10

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {

//       int space = n-row;
//       while (space)
//       {
//          cout<<" ";
//          space --;
//       }
      
     

//     int col=1;
           
//     while (col<=row)
//     {

//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }





// pattern 11

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {
//     int col=1;
           

//     while (col<=n - row+1)
//     {

//         cout<<"*" ;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }












//pattern 12

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;
       

//    while (row<=n)
//    {
//       int space =row -1;
//       while (space)
//       {
//          cout <<" ";
//          space --;
//       }
      
//     int col=1;
           

//     while (col<=n - row+1)
//     {

//         cout<<"*" ;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }




// program 13

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cin >>n;

//    int row =1;

//    while (row<=n)
//    {
//           int col=1;
//          int space =1;
      
//       while (space<row)
//       {
//          cout <<" ";
//          space ++;
//       }
      
             
   

//     while (col<=n - row+1)
//     {

//         cout<<row;
//         col++;
//     }
//     cout<<endl;
//     row++;
    

//    }
   
// return 0;
// }








// program 14
#include<iostream>
using namespace std;
int main()
{

   int n ;
   cin>> n;
   int row =1;
   while (row <=n)
   {
      int space =n-row;
      while (space)
      {
      cout<<" ";
      space --;
      }
      int col =1;
      while(col<=row){
         cout <<row +col-(n-2);
         col++;
      }
      cout<< endl;
      row ++;
   }
   
return 0;
}