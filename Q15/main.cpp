#include <iostream>
#include <string>
#include <stack>

void invertStr(std::string &str){
    std::stack<char> p;
    size_t i = 0;
    while(i < str.size()){
        p.push(str[i]);
        i++;
    }
    str.clear();
    while(!p.empty()){
        str.push_back(p.top());
        p.pop();
    }
}

int main(){
    std::string str = "SOCA SOCA SOCA SOCA";

    
    std::cout << "Original: " << str << std::endl;
    invertStr(str);
    std::cout << "Inverted: " <<str << std::endl;


    return 0;

}