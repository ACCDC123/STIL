#ifndef PATTERN_H
#define PATTERN_H

#include <string>
#include <memory>
#include <vector>

#include "PatternVector.h"

class Pattern
{
public:
std::string label_name;
std::string waveform_name;
std::shared_ptr<std::vector<PatternVector>> vector_list;
std::shared_ptr<std::vector<std::string>> macro_name;

Pattern();
void set_label_name(const std::string name);
void set_waveform_name(const std::string name);
void push_vector(const PatternVector);
void push_macro(const std::string macro);
};




#endif