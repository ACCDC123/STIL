#ifndef TimeExpr_H
#define TimeExpr_H

#include <string>

class TimeExpr
{
public:
std::string parameter_name;
std::string min;
std::string typ;
std::string max;
std::string meas;

TimeExpr();
void set_parameter_name(const std::string name);
void set_min_var(const std::string min_var);
void set_typ_var(const std::string typ_var);
void set_max_var(const std::string max_var);
void set_meas_var(const std::string meas_var);
};

#endif