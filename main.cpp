#include <iostream>
#include "WordProcessor.h"
/**
 * Creates a word processor that takes in ints then prints out the results
 */
int main() {
  WordProcessor wheelProcessor;
  wheelProcessor.processNewWord(1);
  wheelProcessor.processNewWord(11);
  wheelProcessor.processNewWord(10);
  std::cout << wheelProcessor.toString() << std::endl;
  const auto& wordArray = wheelProcessor.getMessage().getWords();
  std::cout << wordArray[0] << " " << wordArray[1];

  WordProcessor visionProcessor;
  visionProcessor.processNewWord(2);
  visionProcessor.processNewWord(3);
  visionProcessor.processNewWord(0);
  visionProcessor.processNewWord(-10);
  visionProcessor.processNewWord(-10);
  visionProcessor.processNewWord(10);
  visionProcessor.processNewWord(10);

  std::cout << visionProcessor.toString() << std::endl;

  for (auto i = 0; i < visionProcessor.getMessage().getWords().size(); i++) {
    std::cout << visionProcessor.getMessage().getWords()[i] << " ";
  }

  return 0;
}