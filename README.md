# Lab-4
Algorithm for Horse Race

1. Race 
    - Set number of horses: 5
    - Set finish line distance: 100 units
    - Create 5 horse objects with names 
    - Initialize positions to 0 for all horses

2. Horse Class:
    - move(), Updates position by a random amount between 1 and 5 units.
    - checkWin(), Checks if position >= finishLine. Returns true if the horse wins.
    - getName(), Returns the name of the horse.
    - getPosition(), Returns the current position of the horse.

3. Race Class:
    - startRace(), Loops through each horse and calls move(), checks for winner, prints race status.
    - printRaceStatus(), Prints the status of the race after each round.
    - checkRaceEnd(), Returns true if any horse has reached the finish line.
