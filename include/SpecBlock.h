#ifndef SPECBLOCK_H
#define SPECBLOCK_H

#include <memory>
#include <vector>
#include<string>
#include "Category.h"

class SpecBlock
{
public:
std::string spec_name;
std::shared_ptr<std::vector<Category>> spec;

SpecBlock();
void set_spec_name(const std::string name);
void push_category(const Category category);
};



#endif