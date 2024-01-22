#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <vector>
#include <memory>
#include "TimeExpr.h"

class Category{
    public:
    std::string category_name;
    std::shared_ptr<std::vector<TimeExpr>> category;

    Category();
    void set_category_name(const std::string name);
    void push_parameter(const TimeExpr parameter);
};


#endif
