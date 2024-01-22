#ifndef SIGNALBLOCK_H
#define SIGNALBLOCK_H

#include <memory>
#include <vector>

#include "Signal.h"

class SignalBlock {
public:
SignalBlock();
std::shared_ptr<std::vector<Signal>> signal_list;

void push_signal(const Signal);
};

#endif