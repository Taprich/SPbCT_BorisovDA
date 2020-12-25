#include "MyForm.h"
#include <Windows.h>
using namespace Project3;
//Здесь вызывается функция WinMain для работы непосредственно Windows формы
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}