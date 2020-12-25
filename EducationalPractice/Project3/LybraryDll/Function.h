#pragma once
#include <ctime> 
#include <iterator>
#include <iostream> 
#include <vector>
#include <string>
#include <windows.h>
#include <algorithm>
#include <fstream>
using namespace std;
//Здесь лежат сами функции ZapisVVector и ZapisVVectorFKOCH
void ZapisVVector(const vector<char>& data);
void ZapisVVectorFKOCH(const std::string& filepath, const vector<char>& data);