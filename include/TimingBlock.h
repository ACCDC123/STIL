#ifndef TIMINGBLOCK_H
#define TIMINGBLOCK_H

#include <memory>
#include <vector>
#include "WaveformTable.h"
class TimingBlock
{
public:
    std::shared_ptr<std::vector<WaveformTable>> timing;
    std::string timing_name;
    TimingBlock();
    void push_waveform(const WaveformTable waveformtable);
    void set_timing_name(const std::string name);
};

#endif