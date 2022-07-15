#include <fstream>
#include <iostream>

void printLine(int line){
    std::ifstream file("text.txt");

    if(file.is_open()){
        std::string lineText;
        for(int i = 1; i <= line && !file.eof(); i++){
            getline(file, lineText);
        }
        std::cout << lineText << std::endl;
    } else {
        std::cout << "ARQUIVO NÃO ENCONTRADO!\n";
    }
}

int main(){
    int line;

    std::cout << "Digite uma linha: ";
    std::cin >> line;

    printLine(line);

    return 0;
}