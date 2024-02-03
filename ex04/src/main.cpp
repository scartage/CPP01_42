#include <string>
#include <iostream>
#include <fstream>

std::string replaceStr(std::string cont, std::string s1, std::string s2){
    std::string newCont;
    int i;

    /* buscamos posicion de s1
        en caso que este, agregamos desde 0 hasta donde se encuetre
        al nuevo contenido.
        agregamos s2 al newCont
        borramos desde 0 hasta el indice mas el tamaño de s1 de cont*/
    while (true){
        i = cont.find(s1); // guarda pos de lo que encuentra
        if (i < 0)
            break ;
        newCont += cont.substr(0, i);
        newCont += s2;
        cont.erase(0, i + s1.length()); 
    }
    newCont += cont;
    return newCont;
}

bool check_args(int ac, char **av){
    if (ac != 4){
        std::cerr << "Usage: ./noSed <filename> <s1> <s2>" << std::endl;
        return false;
    } else if (!av[1] || !av[2] || !av[3]){
        std::cerr << "invalid arguments" << std::endl;
        return false;
    }
    return true;
}

int main(int ac, char **av){

    if (!check_args(ac, av))
        return 1;
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string outfile = filename + ".replace";
    std::string content;

    // esperan un const string
    std::ifstream inputFile(filename.c_str());
    if (!inputFile){
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::ofstream outputFile(outfile.c_str());
    if (!outputFile){
        std::cerr << "Error creating file: " << outfile << std::endl;
        return 1;
    }
    
    std::string line;
    while(std::getline(inputFile, line))
        content += line.append(1, '\n');
    outputFile << replaceStr(content, s1, s2);

    inputFile.close();
    outputFile.close();
    return 0;
}