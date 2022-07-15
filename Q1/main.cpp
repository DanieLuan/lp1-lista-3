#include <iostream>
#include <experimental/filesystem>
#include <string>

namespace fs = std::experimental::filesystem;

void changeName(std::string &fileName){
    std::string matricula;
    std::string nome;
    std::cout << "antes: " << fileName << "\n";
    size_t i = 0;
    while(fileName[i] != '_'){
        matricula.push_back(fileName[i]);
        i++;
    }
    i++;
    while(i < fileName.size()){
        nome.push_back(fileName[i]);
        i++;
    }
    fileName = nome+"_"+matricula;
    std::cout << "dps: " << fileName << "\n";
}

int main(){
    fs::path p = fs::current_path();
    fs::rename(p/"notas/", p/"notas1");

    return 0;
}