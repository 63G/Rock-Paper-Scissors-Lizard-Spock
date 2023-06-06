# Rock-Paper-Scissors-Lizard-Spock
Implementing the improved version of rock paper scissors to eliminate redundant ties.

Initially, the normal game of RPS (rock paper scissors) have a high probability of ties when two persons  knows each other.
Hence, this version is to further lower the possibility of tie by adding two new entities, lizard and Spock. This game is explained and shown in the famous series, The Big Bang Theory. the game at first will confuse the watchers. Therefore i converted it to a CLI and explore it and simplifiying the logic. 


LOGIC:
i wanted to minimize the logic by determining the case only by the winning condition, otherwise it is a loss and false.

ROCK: scissors, lizard
SCISSORS: paper, lizard
PAPER: rock, spock
LIZARD: spock, paper
SPOCK: scissors, rock
