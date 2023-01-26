/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:38:14 by hakermad          #+#    #+#             */
/*   Updated: 2023/01/23 15:45:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ReadReplace(std::string filename, std::string s1, std::string s2)	{
	size_t			pos;
	std::string		tmp;
	std::string		NewFile;
	std::ifstream	ifs(filename);
	
	if (!ifs.is_open())	{
		std::cout << "File doesn't exit/is corrupted" << std::endl;
		return (1);
	}
	
	std::ofstream	ofs(filename + ".replace");
	while (!ifs.eof())	
	{
		getline(ifs, tmp);
		pos = tmp.find(s1);
		while (pos != std::string::npos)
		{
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);
			pos += s2.length();
			pos = tmp.find(s1, pos);
		}	
		NewFile.append(tmp);
		if (!ifs.eof())
			NewFile.append("\n");
	}
	ofs << NewFile;
	return (0);
}
	
int	main(int argc, char **argv)
{
	if (argc != 4)	{
		std::cout << "Please enter file, s1 and s2" << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	return (ReadReplace(filename, s1, s2));
}