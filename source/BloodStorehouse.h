#pragma once
#include "BloodUnit.h"


class BloodStorehouse
{
public:

  BloodStorehouse();
  ~BloodStorehouse()=default;


private:
 std::list<BloodUnit*> blood_depot_;

};

