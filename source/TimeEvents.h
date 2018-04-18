#pragma once
#include "Event.h"
#include "BloodCentre.h"
#include "BloodUnit.h"


class TimeEvent :       //class derived from events, still won't have any direct members
  public Event
{
public:
  virtual void  Execute();
  virtual void  Schedule();   //function planning event's future excecutions 
  int event_time;
  TimeEvent();
  virtual ~TimeEvent() = default;
};


/**** different time events which will/may occur during simulation*****/


class TePatientArrival :         
  public Event
{
 void Execute() override;
 void Schedule(int NextEventTime);
 int event_time;

 BloodCentre* blood_centre_;
               
  
  TePatientArrival(BloodCentre* BloodC);
  virtual ~TePatientArrival() = default;

 };


class TeBloodDonated :        
  public Event
{
  void Execute() override;
  void Schedule(int NextEventTime);
  int event_time;

  BloodCentre* blood_centre_;


  TeBloodDonated(BloodCentre* BloodC);
  virtual ~TeBloodDonated() = default;

};


class TeBloodExpired :         
  public Event
{
  void Execute() override;
  int event_time;

  BloodUnit*     blood_unit_;    //pointer to the blood unit that will expire


  TeBloodExpired(BloodUnit* BloodU);
  virtual ~TeBloodExpired() = default;

};