#ifndef PATTERNEXECBLOCK_H
#define PATTERNEXECBLOCK_H

#include <string>
#include <vector>
#include <memory>

#include "Category.h"
#include "SelectorBlock.h"
#include "TimingBlock.h"
#include "PatternBurstBlock.h"

class PatternExecBlock
{
public:
    std::string pat_exec_name;
    std::shared_ptr<Category> category;
    std::shared_ptr<SelectorBlock> selector;
    std::shared_ptr<TimingBlock> timing;
    std::shared_ptr<PatternBurstBlock> pattern_burst;

    PatternExecBlock();
    void set_pat_exec_name(const std::string name);
    void add_category(const Category cag);
    void add_selector(const SelectorBlock sec);
    void add_timing(const TimingBlock time);
    void add_pattern_burst(const PatternBurstBlock pat_bur);
};

#endif