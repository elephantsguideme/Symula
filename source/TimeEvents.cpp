#include "stdafx.h"
#include "TimeEvents.h"
#include "BloodCentre.h"
#include "Patient.h"

     /* constructors */
TimeEvent::TimeEvent()
{
}


TePatientArrival::TePatientArrival(BloodCentre* BloodC) {
  BloodCentre* blood_centre_ = BloodC;
}





void TimeEvent::Execute()
{
  
}
void TimeEvent::Schedule()
{
}


void TePatientArrival::Execute() {        //Patient arrives, amount of blood needed is generated, patient is put
                                          // on the end fo the waiting line, new patient's arrival is planned 
  Patient* PatientNew = new (Patient);   
  
  std::cout << "%d. New patient arrives\n", blood_centre_->system_time;
  //BloodCentre->PatientsQueue ...
 
                                      
  std::default_random_engine rng;           //Planning next event
  std::exponential_distribution<double> distribution(blood_centre_->kPatientsAvgTime);
  int time_from_rng= (int)distribution(rng);
  this->Schedule(time_from_rng + blood_centre_->system_time);
}                               

void TePatientArrival::Schedule(int NextEventTime) {
  this->event_time= NextEventTime;
  std::cout << "%d. Next patient will arrive at %d\n", blood_centre_->system_time, NextEventTime;

}




void TeBloodDonated::Execute() {            

  std::cout << "%d. A unit of blood is given by donor\n", blood_centre_->system_time;
  BloodUnit* blood_unit_ = new BloodUnit();


  std::default_random_engine rng;           //Planning next event
  std::exponential_distribution<double> distribution(blood_centre_->kDonorsAvgTime);
  int time_from_rng = (int)distribution(rng);
  this->Schedule(time_from_rng + blood_centre_->system_time);
}

void TeBloodDonated::Schedule(int NextEventTime) {
  this->event_time = NextEventTime;
  std::cout << "%d. Next donor will arrive at %d\n", blood_centre_->system_time, NextEventTime;

}




