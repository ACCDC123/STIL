#ifndef WAVEFORMTABLE_H
#define WAVEFORMTABLE_H

#include <string>
#include <memory>
#include <vector>

#include "Wave.h"


class WaveformTable {
public:
std::string table_name;
std::string period;
std::shared_ptr<std::vector<Wave>> waveforms;

WaveformTable();
void set_table_name(const std::string name);
void set_period(const std::string time);
void push_wave(const Wave wave);
};

#endif