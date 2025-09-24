#include <iostream>
#include <string>
#include <locale>

int main() {
    // std::wcout.imbue(std::locale("en_US.UTF-8"));

    std::string myStr = "¡Hola! 日本 שלום 你好 مرحبا ";   // UTF-8 string
    std::wstring mywStr = L"¡Hola! 日本 שלום 你好 مرحبا "; // Wide string

    std::cout << myStr << '\n' << sizeof(myStr) << '\n';
    std::wcout << mywStr << '\n' << sizeof(mywStr) << '\n';

    return 0;
}
