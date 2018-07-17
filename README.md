# Sentence-Generation
Generate random English sentences with correct grammar structure

The Grammar <br />
S: Sentence <br />
NP: Noun Phrase <br />
VP: Verb Phrase <br />
PP: Prepositional Phrase (on the couch, in the class, over the hill) <br />
ART: Article (a, the, an) <br />
NOUN: Noun (boy, dog, rug ..) <br />
VERB: Verb (run, walk, swim, is, are, were ...) <br />
ADJ: Adjective (purple, fuzzy, sharp, fast ...) (words that describe nouns) <br />
ADV: Adverb (lazily, quickly, slowly ...) (words that describe verbs, often end in “-ly”) <br />
PREP: Preposition (on, over, through, in, around ... ) (words that ﬁt in the sentence “The bunny went PREP the log”) <br />
<br />
< S > ::=< NP >< V P > <br />
< NP > ::=< NOUN > | < ART >< NOUN > | < NP >< P P > <br />
< V P > ::=< V ERB > | < V P >< NP > | < V P >< ADJ > | < V P >< ADV > <br />
< P P > ::=< PREP >< NP > <br /> <br />
<br />
This program generates a sentence that follows the grammar by picking random substitutions from the grammar and ﬁll in with random words from the word lists. Provided are lists of Nouns, Verbs, Adjectives, Adverbs, Articles, and Prepositions. For example, one sentence could be: <br />
S <br />
NP VP <br />
NP PP VP <br />
NP PP VERB <br />
ART NOUN PP VERB <br />
ART NOUN PREP NP VERB <br />
ART NOUN PREP ART NOUN VERB <br />
The bunny in the cage slept.
