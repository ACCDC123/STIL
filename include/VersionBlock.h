#ifndef VERSIONBLOCK_H
#define VERSIONBLOCK_H
#include <string>
class VersionBlock {
public:
std::string STIL_version;
VersionBlock();
void define_version(const std::string version);
void read_version()const;

};

#endif