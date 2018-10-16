/*
 
 * 
 * Copyright 2018  
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
	std::ofstream high_scores_out;
	high_scores_out.open("highScores");
	if (high_scores_out.is_open())
	{
		int score {100999};
		high_scores_out << "Author\n"  << score;
		high_scores_out.close();
	}
	
	std::ifstream high_scores_in;
	high_scores_in.open("highScores");
	if (high_scores_in.is_open())
	{
		std::cout << "Was able to open file.\n";
		std::string name{};
		int readscore{}; 
		high_scores_in >> name;
		high_scores_in >> readscore;
		std::cout << "name: " << name << " score: " << readscore << std::endl;
		high_scores_in.close();
		
	}
 
    return 0;
    //test comment
}

