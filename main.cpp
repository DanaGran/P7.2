#include <iostream>
#include <stack>
#include <algorithm>



int main(){

    char c;
    std::string nume_volum;
    std::stack<std::string> carti;

    while( std::cin>>c){

        if(c=='+'){
            getchar();
            getline(std::cin,nume_volum);
            carti.push( nume_volum );

        }
        if(c=='-' && carti.size()){

            std::cout<<carti.top()<<",";
            carti.pop();

        }
    }



    return 0;
}