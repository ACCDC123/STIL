#ifndef MACRODEFSBLOCK_H
#define MACRODEFSBLOCK_H

#include <string>
#include <memory>
#include <vector>
#include "MacroDef.h"

class MacroDefsBlock
{
public:
std::shared_ptr<std::vector<MacroDef>> macro_defs;

MacroDefsBlock();
void push_macro(const MacroDef macro);
};




#endif