/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:18:16 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 21:16:18 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static int open_files(std::string nameInputFile, std::string nameOutputfile,
					std::ifstream *inputFile, std::ofstream *outputFile)
{
	(*inputFile).open(nameInputFile, std::fstream::in);
	(*outputFile).open(nameOutputfile, std::fstream::out);
	if (!inputFile || !outputFile)
	{
        std::cerr << "Failed to open files!" << std::endl;
		(*inputFile).close();
		(*outputFile).close();

        return (1);
    }
	return (0);
}

static void read_and_replace(char **argv, std::ifstream *inputFile, std::ofstream *outputFile)
{
	std::string 	to_find;
	std::string 	to_replace;
	std::string 	line;
	size_t			pos = 0;

	to_find = *(argv + 2);
	to_replace = *(argv + 3);
	while(std::getline(*inputFile, line))
	{
		pos = 0;
		while ((pos = line.find(to_find, pos)) != std::string::npos) 
		{
			line = line.substr(0, pos) + to_replace + line.substr(pos + to_find.length());
			pos += to_replace.length();
		}
		if (!(*inputFile).eof())
			*outputFile << line << std::endl;
		else
			*outputFile << line;
		line.clear();
	}
}

int main(int argc, char **argv)
{
	std::string nameInputFile;
	std::string nameOutputfile;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 0);
	nameInputFile = argv[1];
	nameOutputfile = nameOutputfile + argv[1] + ".replace";
	if (open_files(nameInputFile, nameOutputfile, &inputFile, &outputFile))
		return (1);
	read_and_replace(argv, &inputFile, &outputFile);
	inputFile.close();
	outputFile.close();
	return (0);
}


