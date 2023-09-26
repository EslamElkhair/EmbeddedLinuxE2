//**********************************************************

// handle interrupt signal like (ctrl+c)

//**********************************************************
#include <csignal>
#include <iostream>
#include <signal.h>

void signalHandler(int signal) {
  if (signal == SIGINT)
    std::cout << "Ctrl + C signal recieved. Handling the interrupt...."
              << std::endl;
  // add ur custom handling here
  exit(signal);
}

int main() {
  signal(SIGINT, signalHandler);
  std::cout << "Press Ctrl+C to triggger an interrupt..." << std::endl;

  while (1) {
  }
}
