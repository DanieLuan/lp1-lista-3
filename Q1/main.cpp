#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

std::string changeName(std::string fileName){
    std::string matricula;
    std::string nome;

    for(int i = 1; i <= 4; i++){
        fileName.pop_back();
    }

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
    std::string newName = nome+"_"+matricula+".txt";
    return newName;
}

int main(){
    
    fs::path p = fs::current_path()/"notas";

    //fs::rename(p/"notas1", p/"notas2");

    for(const auto & file : fs::directory_iterator(p)){

        if(fs::is_regular_file(file)){
            std::string oldName = file.path().filename().string();
            std::string newName = changeName(oldName);
            std::cout << "-------------\n";
            std::cout << "Nome antigo:" << oldName << "\n";
            std::cout << "Nome novo:" << newName << "\n";
            fs::rename(p/oldName, p/newName);
        }
    }

    return 0;
}