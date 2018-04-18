#pragma once

//class for all events

class Event
{
public:
  virtual void Execute() = 0;  //will be overridden 
  Event();
  virtual ~Event() = default;
};
