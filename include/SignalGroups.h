#ifndef SIGNALGROUPS_H
#define SIGNALGROUPS_H

#include <memory>
#include <vector>

#include "Signal.h"

class SignalGroups {
public:
SignalGroups();
std::shared_ptr<std::vector<std::vector<Signal>>> signal_groups;

void push_signal_group(const std::vector<Signal>);
void read_signal_group()const;
};

#endif