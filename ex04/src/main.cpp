#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string& stash, const std::string& find, const std::string& replace)
{
    size_t start_pos = 0;
    while ((start_pos = stash.find(find, start_pos)) != std::string::npos)
	{
        stash.erase(start_pos, find.length());
        stash.insert(start_pos, replace);
        start_pos += replace.length();
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
    std::string find = argv[2];
    std::string replace = argv[3];
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
        ft_replace(line, find, replace);
        outputFileStream << line << std::endl;
    }
    std::cout << "Done. Output written to " << outputFile << std::endl;
    return 0;
}
