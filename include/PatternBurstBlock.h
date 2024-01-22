#ifndef PATTERNBURSTBLOCK_H
#define PATTERNBURSTBLOCK_H

#include <string>
#include <vector>
#include <memory>

#include"PatternBlock.h"

class PatternBurstBlock{
    public:
    std::string pat_burst_name;
    std::shared_ptr<std::vector<std::string>> pattern_list;

    PatternBurstBlock();

    void set_pat_burst_name(const std::string name);
    void push_pattern_block(const std::string pattern);
};

#endif