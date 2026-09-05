
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    //creation of stack
    stack<int>s;
    
    //push operation in stack
   s.push(2);
   s.push(3);
   s.push(4);
   
   //check the size odf stack 
   cout<<"size of stack is :"<<s.size()<<endl;
   
   //pop operation in stack
   s.pop();
   
   //print topmmost element in stack 
   cout<<"printing top element:"<<s.top()<<endl;
   
   //check size of stack
   cout<<"size of stack is :"<<s.size()<<endl;
   
   
   //check stack is empty or not
   if(s.empty()){
       cout<<"stack is empty"<<endl;
   }
   else{
       cout<<"stack is not empty"<<endl;
   }
}
