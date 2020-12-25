#include "pch.h"
#include "Function.h"
//В данном блоке кода создаются определения для для функций ZapisVVector и ZapisVVectorFKOCH
 void ZapisVVector(const vector<char> &data)
{
	ofstream File("FNACH.txt", ios::app);
	copy(data.begin(), data.end(), std::ostream_iterator<char>(File));
	File << " ";
	File.close();
}

 void ZapisVVectorFKOCH(const std::string& filepath, const vector<char>& data)
 {
	 ofstream File("FKOCH.csv", ios::app);
	 copy(data.begin(), data.end(), std::ostream_iterator<char>(File));
	 File.close();
 }