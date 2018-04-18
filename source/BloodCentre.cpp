#include "stdafx.h"
#include "BloodCentre.h"

BloodCentre::BloodCentre(int R, int N, int Z, int T1, int T2, int P, int W, 
  int E, int Q, int L, int TU, int TB, int JBmin, int JBmax) :
kMinimumBloodLevel(R) ,
kNormalOrderAmount(N),
kNormalOrderAvgTime(Z),
kExpirationTime1(T1),
kExpirationTime2(T2),
kPatientsAvgTime(P),
kNeededBloodAvgAmount(1.0/W),
kEmergencyOrderAvgTime(E),
kEmergencyOrderTimeVar(E*W*W),
kDonorsAvgTime(L),

kTimeToResearch(TU),
kLevelToResearch(TB),
kMinAmountToResearch(JBmin),
kMaxAmountToResearch(JBmax)
{
  blood_storehouse = new BloodStorehouse();
  patients_queue = new PatientsQueue();
}


