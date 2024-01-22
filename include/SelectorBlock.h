#ifndef SELECTORBLOCK_H
#define SELECTORBLOCK_H

#include <string>
#include <vector>
#include <memory>

class SelectorBlock
{
public:
std::string selector_name;
std::shared_ptr<std::vector<std::string>> selector;

SelectorBlock();
void set_selector_name(const std::string name);
void push_selector(const std::string sec);
};

#endif