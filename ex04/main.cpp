/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:42:31 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/23 22:04:57 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //std::string
#include <fstream> //ifstream
#include <iostream> //cin cout

void	replaceInFile(const std::string& file, const std::string& replaceable, const std::string& replacing)
{
	std::ifstream inFile(file.c_str());

	if (!inFile.is_open())
	{
		std::cerr << "Error: couldnt open file. bu keyi kai file" << file << std::endl;
		return ;
	}
	//read entire content
	std::string	content;
	std::string	line;
	while (std::getline(inFile, line))
	{
        content += line;
		if (!inFile.eof()) // only add newline if not at end of file
        	content += "\n";
    }
	inFile.close();
	//find and replace all
	size_t pos = 0;
	while ((pos = content.find(replaceable, pos)) != std::string::npos)
	{
		content.erase(pos, replaceable.length());
		content.insert(pos, replacing);
		pos += replacing.length();
	}
	//create output file
	std::string outFileName = file + ".replace";
	std::ofstream outFile(outFileName.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Could not create file" << outFileName << std::endl;
		return ;
	}
	outFile << content;
	outFile.close();
	std::cout << "Success: Created" << outFileName << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "not enough param. buguo param" << std::endl; 
		return (1);
	}
	std::string	inFileName = av[1];
	std::string	replaceable = av[2];
	std::string	replacing = av[3];
	if (inFileName.empty() || replaceable.empty())
	{
		std::cerr << "Error: parameters cannot be empty. bu neng wei kong" << std::endl;
		return (1);
	}
	replaceInFile(inFileName, replaceable, replacing);
	return (0);
}

//     // Write to output file
//     std::string outputFilename = filename + ".replace";
//     std::ofstream outputFile(outputFilename.c_str());
//     if (!outputFile.is_open()) {
//         std::cerr << "Error: Could not create file " << outputFilename << std::endl;
//         return;
//     }

//     outputFile << content;
//     outputFile.close();
//     std::cout << "Success: Created " << outputFilename << std::endl;
// }
//}