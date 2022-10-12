#pragma once
#include "Message.h"
#include "WheelVelocityMessage.h"
#include "VisualTargetMessage.h"
#include <string>
#include <stdexcept>
#include <memory>

/**
 * processes words individually and properly stores them in the correct format
 */
class WordProcessor {
  private:
    std::unique_ptr<Message> message;
  public:
    WordProcessor();
    /**
     * process a new word into the proper container
     * parameters:
     *  int word - the word to be processed
     */
    void processNewWord(int word);

    /**
     * converts the message into a human readable format
     * returns:
     *  std::string - string with data in readable format
     */
    std::string toString() const;

    /**
     * Gets the message.
     * returns:
     *  A reference to the message.
     */
    const Message& getMessage() const;
};