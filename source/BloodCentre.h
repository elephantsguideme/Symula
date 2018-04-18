#pragma once
#include "BloodStorehouse.h"
#include "PatientsQueue.h"


class BloodCentre
{
public:
  BloodCentre(int R, int N, int Z, int T1, int T2, int P, int W, int E, int Q, int L, int TU, int TB, int JBmin, int JBmax);
  //creating main object characterized with given constants 
  ~BloodCentre()=default;        

  int system_time; // absolute system time (in arbitrary "time units")
  

  const int kMinimumBloodLevel;
  const int kNormalOrderAmount;
  const int kNormalOrderAvgTime;
  const int kExpirationTime1;
  const int kExpirationTime2;
  const int kPatientsAvgTime;
  const double kNeededBloodAvgAmount;
  const int    kEmergencyOrderAvgTime;
  const int    kEmergencyOrderTimeVar;
  const int  kDonorsAvgTime;

  const int  kTimeToResearch;
  const int  kLevelToResearch;
  const int  kMinAmountToResearch;
  const int  kMaxAmountToResearch;



private:


  BloodStorehouse* blood_storehouse;
  PatientsQueue* patients_queue;
};

