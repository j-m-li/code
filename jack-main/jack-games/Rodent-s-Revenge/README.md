# Rodent's Revenge
A Jack language implementation of the classic "Rodent's Revenge" game.
This game was created as Project 9 of the ["From NAND to Tetris" course](https://www.nand2tetris.org/).


## In order to run the game
      1. Compile the folder of the source code (using the NAND to Tetris supplied compiler).
      
      2. Load the folder using the supplied VM Emulator (mark the folder of the game and press 'Load program'
         to load the folder entirely).
      
      3. You'll get the message: "No implementation was found for some functions which are called in the
         VM code...", since the program uses several OS functions, so press 'Yes' to use the built-in
         implementations for the OS functions.
      
      4. Switch the 'Animate' option (in the VM toolbar) to 'No animation'.
      
      5. Click the 'Run' button (or simply press 'F5').
      
      6. Enjoy! : )
  
  
## About the game
Rodent's Revenge is a classic cat-and-mouse game with a twist:
You are the mouse, and you are trying to outsmart the cats and trap them before they catch you.
To succeed at Rodent's Revenge, you have to be fast and clever.
Read more about the game here: https://en.wikipedia.org/wiki/Rodent%27s_Revenge


## Gameplay
The 4 arrow keys are used to move the mouse up, down, left, and right.
When all cats are trapped, they turn into cheese.
The game is won when the entire cheese is eaten (or run over by a block).
However, if one of the cats touches the mouse, it is GAME OVER!

Notice that the game speed is quite high, so be careful when you open a clear path to one of the cats.

See a demo run of the game [here](https://www.youtube.com/watch?v=26VaBMpyyOQ).


## Remarks
At the moment, the code isn't quite extendible, and should be generelized to enable simple changes in the game,
such as increasing the number of cats in the game, their initial positions or their speed.
