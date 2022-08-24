#include<iostream>
using namespace std; 

class calculator{
    public:
        int result;
    
        int addOne(int x){
            result=x+1;
            return result;
        }
        int add(int x ,int y){
            result =x+y;
            return result;
        }
        int subOne(int x){
            result=x-1;
            return result;
        }


};