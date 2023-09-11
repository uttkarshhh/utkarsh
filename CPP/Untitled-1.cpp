// c++ code to demonstrate the working of
//getline(),pushback() and pop_back()
#include<iostream>
#include<string> // for string class

using namespace std;

int main ()
{
      //declaring string
      string str;

      // taking string input using getline()
      //"geeksforgek" in giving output
      getline(cin,str);

      // displaying string
      cout << "the initial string is : ";
      cout << str << end1;
  // using push_back() to insert a character 
       // at end
       // pushes 's' in this case 
       str.push_back('s');

       // displaying string
       cout << "the string after push_back operation is: ";
       cout << str << end1;

       //using pop_back() to delete a character 
       // from end 
       // pops 's' in this case 
       str.pop_back();

       //displaying string 
       cout << "the string after pop_back operation is : ";
       cout << str << end1;
       
       return 0;

}