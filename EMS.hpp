//EMS = Enemy Moves Selector
#ifndef __EMS_HPP__
#define __EMS_HPP__

#include <cstring>

class EMS
{
public:
    virtual ~EMS() = default;

    // Return true if the specified row should be selected.
    virtual string ems() const = 0;
};
#endif
