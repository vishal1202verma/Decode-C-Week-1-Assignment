#include<iostream>
using namespace std;
int main (){
    //question no 4
    // WAP to find the difference between ASCII of two characters ,take them as input 
   
   char ch1 , ch2;
   cout<<"enter first character :";
   cin>>ch1;
   cout<<"enter second character :";
   cin>>ch2;
   int diff = ((int)ch2 - (int)ch1);
   cout<<"difference between ASCII of two characters is:"<<diff<<endl;
   return 0;
   


}


