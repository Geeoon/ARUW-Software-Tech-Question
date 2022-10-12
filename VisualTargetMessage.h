#pragma once
#include "Message.h"

class VisualTargetMessage : public Message {
  private:
    std::vector<int> positions;
  public:
    VisualTargetMessage();
    virtual const std::vector<int>& getWords() const;
    virtual int getType() const;
    virtual void addWord(int word);
    virtual std::string toString() const;
};