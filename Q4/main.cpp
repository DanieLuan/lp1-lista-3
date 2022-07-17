#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream file("poem.txt");

    if(file.is_open()){
        std::vector<std::string> fileInVector;
        std::string tempLine;
        while(getline(file, tempLine)){
            fileInVector.push_back(tempLine);
            std::cout << tempLine << "\n";
        }
    } else {
        std::cout << "ARQUIVO NÃO ENCONTRADO!\n";
    }
}