#ifndef STILAST_H
#define STILAST_H

#include <cstdio>
#include <cstdlib>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "VersionBlock.h"
#include "QuoteBlock.h"
using namespace std;

class STILAST
{

public:
std::shared_ptr<VersionBlock> version_block;
std::shared_ptr<QuoteBlock>  quote_block;
STILAST();
    
};




#endif
