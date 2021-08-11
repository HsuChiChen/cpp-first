/**
 * Determination a platform of an operation system
 * Fully supported supported only GNU GCC/G++, partially on Clang/LLVM
 */

#include <iostream>

#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
    #define PLATFORM_NAME "windows" // Windows
#elif defined(__linux__)
    #define PLATFORM_NAME "linux" // Debian, Ubuntu, Gentoo, Fedora, openSUSE, RedHat, Centos and other
#elif defined(__APPLE__)  || defined(__MACH__)
    #define PLATFORM_NAME "MacOS"
#else
    #define PLATFORM_NAME NULL
#endif

// Return a name of platform, if determined, otherwise - an empty string
const char *get_platform_name() {
    return (PLATFORM_NAME == NULL) ? "" : PLATFORM_NAME;
}

int main(int argc, char *argv[]) {
    puts(get_platform_name());
    return 0;
}