#ifndef QUOTEBLOCK_H
#define QUOTEBLOCK_H

#include <string>
#include <memory>
#include <vector>

class QuoteBlock
{
public:
std::shared_ptr<std::vector<std::string>> file_name;

QuoteBlock();
void push_cite_file(const std::string file);
void read_cite_file()const;
  
};




#endif