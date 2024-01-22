#ifndef MACRODEF_H
#define MACRODEF_H

#include <string>
#include <memory>
#include <vector>

#include "PatternVector.h"

class MacroDef
{
public:
std::string macro_name;
std::string waveform_name;
std::shared_ptr<std::vector<PatternVector>> macro_vector;

MacroDef();
void set_macro_name(const std::string name);
void set_waveform(const std::string wave);
void push_vector(const PatternVector vec);
};




#endif