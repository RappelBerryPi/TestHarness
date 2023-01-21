#include "CompileInterface.hpp"
#include <iostream>
#include <string>

CompileInterface::CompileInterface(const std::string& inputFilePath, const std::string& outputFilePath, const std::string& compilerPath, const std::string& languageType, const std::string& options) {
    this->inputFilePath = inputFilePath;
    this->outputFilePath = outputFilePath;
    this->compilerPath = compilerPath;
    this->languageType = languageType;
    this->options = options;
}

void CompileInterface::compile() {
    std::string commandString;
    if (specifyOutputFile) {
        commandString = compilerPath + " " + options + " -o " + outputFilePath + " " + inputFilePath;
    } else {
        commandString = compilerPath + " " + options + " " + inputFilePath;
    }
    std::cout << commandString << std::endl;
    system(commandString.c_str());
}

void CompileInterface::setSpecifyOutputFile(bool specifyOutputFile) {
    this->specifyOutputFile = specifyOutputFile;
}

// create specifics for java and whatnot.