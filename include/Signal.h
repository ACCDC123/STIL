#ifndef SIGNAL_H
#define SIGNAL_H

#include <string>

class Signal {
public:
Signal();
std::string pin_name;
int pin_state;//0-IN,1-OUT,2-Inout

void set_pin(const std::string pin);
void set_pin_state(const std::string state);
void read_signal()const;
};

#endif