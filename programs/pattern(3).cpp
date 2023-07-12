// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col =1;
//         while (col<=row)
//         {
//             cout<<row;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
        
//     }
    
// return 0;
// }


//                                     pattern 2
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    int count=1;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<count;
            count=count +1;

            col=col+1;
            cout<<" ";
        }
        cout<<endl;
        row=row+1;
    }
    
 return 0;
 }              

                                






//                                 // pattern 3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row =1;
//     while (row<=n)
//     {
//         int col=1;
//             int value =row;

//         while (col<=row)
//         {
//             cout<<value;
//           value =value+1;
//           col=col+1;  
//         }
//         cout<<endl;
//         row=row+1;
//     }
    
// return 0;
// }                                                         




                                             //alternative 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row =1;
//     while (row<=n)
//     {
//         int col=row;

//         while (col<row+row)
//         {
//             cout<<col<<" ";
    
//           col=col+1;  
//         }
//         cout<<endl;
//         row=row+1;
//     }
    
// return 0;
// }                                                     






 // pattern 4 
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int n;
//     cin >>n;
//     int row =1;

//     while (row<=n)
//     {
//         int col =1;
//         while (col<=row)
//         {
//             cout<<row -col+1<<" ";
//             col=col+1;
                 
//         }
//         cout<<endl;
//         row =row +1;
        

//     }
    
//  return 0;
//  }