/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:42:31 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/22 22:37:22 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //std::string
#include <fstream> //ifstream
#include <iostream> //cin cout

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "not enough param" << std::endl; 
		return (1);
	}
	std::string	file = av[1];
	std::string	replaceable = av[2];
	std::string	replacing = av[3];
	if (file.empty() || replaceable.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	replaceInFile(file, replaceable, replacing);
	return (0);
}

void	replaceInFile(const std::string& file,
	const std::string& replaceable, const std::string& replacing)
{
	std::ifstream inputFile(file.c_str());

	if (!inputFile.is_open())
	{
		std::cerr << "Error: couldnt open file. bu keyi kai file" << file << std::endl;
		return ;
	}
	//read entire content
	std::string	content;
	std::string	line;
	while (std::getline(inputFile, line))
		content += line  + "\n";
	inputFile.close();
	if (!content.empty())
	{
		content.erase(content.length() - 1);
	}
		
	size_t pos = 0;
	while (pos = content.find(replacable, pos) != std::string npos)
	{
			content.erase(pos, replaceable;si.length());
			content.insert(pos, replaceable);
			
	}
	    size_t pos = 0;
//     while ((pos = content.find(s1, pos)) != std::string::npos) {
//         content.erase(pos, s1.length());
//         content.insert(pos, s2);
//         pos += s2.length();
//     }

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
}