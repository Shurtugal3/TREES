// Trees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "BST.h"
#include "AVL.h"
#include "RBT.h"
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string argument, string; 
	char passer[50]; 

	RBT redTree; 
	std::cout << "input... \n"; 
	std::cin >> argument >> passer; 

	//main entry point for program 
	//create all the trees
	//read in the file and the characters into each tree to test speed and whatever 

	while (argument != "exit")
	{
		if (argument == "insert")
		{
			redTree.Insert(passer); 
		}
		if (argument == "show")
		{
			//binaryTree.HeightOfRoot(); 
		}
		cout << "Complete...\n"; 
		cin >> argument >> passer; 
	}
}
