#include <string>

class CompileInterface {
    public:
        CompileInterface(const std::string& inputFilePath, const std::string& outputFilePath, const std::string& compilerPath, const std::string& languageType, const std::string& options);

        void compile();

        void setSpecifyOutputFile(bool specifyOutputFile);

    protected:
        std::string inputFilePath;
        std::string outputFilePath;
        std::string compilerPath;
        std::string languageType;
        std::string options;
        bool specifyOutputFile;
};