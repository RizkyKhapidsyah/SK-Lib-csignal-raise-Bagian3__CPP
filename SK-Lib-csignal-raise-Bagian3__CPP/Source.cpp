#include <csignal>
#include <iostream>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

void signal_handler(int signal) {
    std::cout << "Received signal " << signal << '\n';
}

int main() {
    // Install a signal handler
    std::signal(SIGTERM, signal_handler);

    std::cout << "Sending signal " << SIGTERM << '\n';
    std::raise(SIGTERM);

    _getch();
    return 0;
}