#include <iostream>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;

void searchName(std::string name){
    try{
        searchName(name);
    }

    catch(...){
        continue;
    }
}

int main(){
    std::string name;
    std::cin >> name;



    return 0;    
}