#ifndef PATTERNBLOCK_H
#define PATTERNBLOCK_H

#include <string>
#include <memory>
#include <vector>

#include "Pattern.h"

class PatternBlock
{
public:
std::string pattern_block_name;
std::shared_ptr<std::vector<Pattern>> pattern_list;

PatternBlock();
void set_pattern_block_name(const std::string name);
void push_pattern(const Pattern pattern);
};




#endif