#include <iostream>
#include <fstream>
#include <string>

void replaceAll(std::string& str, const std::string& from, const std::string& to)
{
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main(int argc, char* argv[])
{
    if (argc != 4)
	{
        std::cerr << "Usage: " << argv[0] << " <file_path> <search> <replace>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
	{
        std::cerr << "Failed to open input file " << filename << std::endl;
        return 1;
    }
    std::string outputFile = filename + ".replace";
    std::ofstream outputFileStream(outputFile);
    if (!outputFileStream.is_open())
	{
        std::cerr << "Failed to create output file " << outputFile << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inputFile, line))
	{
        replaceAll(line, s1, s2);
        outputFileStream << line << std::endl;
    }
    std::cout << "Done. Output written to " << outputFile << std::endl;
    return 0;
}
