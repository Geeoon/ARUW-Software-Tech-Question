#pragma once
#include "Message.h"

class WheelVelocityMessage : public Message {
  private:
    std::vector<int> velocities;
  public:
    WheelVelocityMessage();
    virtual const std::vector<int>& getWords() const;
    virtual int getType() const;
    virtual void addWord(int word);
    virtual std::string toString() const;
};