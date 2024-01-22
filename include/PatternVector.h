#ifndef PATTERNVECTOR_H
#define PATTERNVECTOR_H

#include <string>
#include <vector>
#include <memory>

class PatternVector{
    public:
    std::shared_ptr<std::vector<std::string>> vector_data;
    std::string operation_name;
    int count;

    PatternVector();
    void set_operation_name(const std::string name);
    void set_operation_count(const int number);
    void push_vector(const std::string vec);
    bool is_operation_vector()const ;
};

#endif