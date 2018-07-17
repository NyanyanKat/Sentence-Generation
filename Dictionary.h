#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <vector>
#include <string>

/**
   author: Kathryn Rodgers
   date: May 2016
*/

/*
  Class to use a dictionary for getting words of specific parts of
  speech
*/

class Dictionary{
 private:
  /////////////////////////
  // Vectors to hold the words
  std::vector<std::string> nouns;
  std::vector<std::string> verbs;
  std::vector<std::string> adverbs;
  std::vector<std::string> adjectives;
  std::vector<std::string> prepositions;
  std::vector<std::string> articles;


  // Read in files functions
  bool readNouns(std::string file);
  bool readAdverbs(std::string file);
  bool readAdjectives(std::string file);
  bool readPrepositions(std::string file);
  bool readVerbs(std::string file);
  bool readArticles(std::string file);

  int getRandomNumber(int minVal, int maxVal);
  
 public:
  // Constructor
  // Takes the names of the files to get the words from
  Dictionary(std::string nounfile, std::string verbfile, std::string adverbfile, std::string adjfile, std::string prepfile, std::string articlefile);

  // Returns a random noun
  std::string getNoun();

  // Returns a random article
  std::string getArticle();

  // Returns a random adjective
  std::string getAdjective();

  // Returns a random preposition
  std::string getPreposition();

  // Returns a random adverb
  std::string getAdverb();

  // Returns a random verb
  std::string getVerb();


  // Returns a random noun phrase
  std::string getNP();

  // Returns a noun phrase containing the specific noun
  std::string getNP(std::string& oneNoun);

  // Returns a random verb phrase
  std::string getVP();

  // Returns a verb phrase containing the specific verb
  std::string getVP(std::string& oneVerb);


  // Returns a random Prepositional phrase
  std::string getPP();
};



#endif
