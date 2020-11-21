/*
Description      :  Display Current Date And Time
Function Date    :  21 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream> 
#include<ctime> 

using namespace std; 

int main() 
{ 
     
    time_t t1; 
    struct tm * ti;  
    time (&t1); 
   
    ti = localtime(&t1); 
    cout << "Current Date And Time Is = " 
         << asctime(ti); 
  
  return 0;

}