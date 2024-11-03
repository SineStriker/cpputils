#include <string>
#include <vector>

#include <cpputils/system.h>
#include <cpputils/console.h>

using namespace cpputils;

int main(int /* argc */, char * /* argv */[]) {

    {
        u8printf("[Command line arguments]\n");
        auto args = System::commandLineArguments();
        for (int i = 0; i < args.size(); ++i) {
            u8printf("%d - %s\n", i, args[i].c_str());
        }
        u8printf("\n");
    }

    {
        u8printf("[Application info]\n");
        u8printf("File path: %s\n", System::applicationPath().c_str());
        u8printf("Directory: %s\n", System::applicationDirectory().c_str());
        u8printf("File name: %s\n", System::applicationFileName().c_str());
        u8printf("Name: %s\n", System::applicationName().c_str());
        u8printf("\n");
    }

    u8printf("OK");
    return 0;
}