#include <iostream>
#include "CompileInterface.hpp"

int main() {
    std::cout << "hello World" << std::endl;
    std::string inputFilePath = "A.java";
    std::string outputFilePath = "";
    std::string compilerPath = "javac";
    std::string languageType = "java";
    std::string options = "";
    CompileInterface compile = CompileInterface(inputFilePath, outputFilePath, compilerPath, languageType, options);
    compile.setSpecifyOutputFile(false);
    compile.compile();
    return 0;
}
