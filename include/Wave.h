#ifndef WAVE_H
#define WAVE_H

#include <string>
#include <memory>
#include <vector>


class Wave {
public:
std::string signal;
std::string input_wave;
std::string output_wave;
std::shared_ptr<std::vector<std::string>> dirve_pattern;

Wave();
void set_input_wave(const std::string input);
void set_output_wave(const std::string output);
void push_pattern(const std::string pattern);
};

#endif