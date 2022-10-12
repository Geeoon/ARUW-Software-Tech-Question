#pragma once
#include <string>
#include <map>
#include <memory>
#include <stdexcept>
#include <vector>

/**
 * Interface for Messages (packets)
 */
class Message {
  public:
    Message() = default;
    /**
     * function to return the words as a vector
     */
    virtual const std::vector<int>& getWords() const = 0;

    /**
     * funciton that returns the message type 
     */
    virtual int getType() const = 0;

    /**
     * function adds a word to the message
     */
    virtual void addWord(int word) = 0;

    /**
     * function returns a readable format for the message
     */
    virtual std::string toString() const = 0;
};