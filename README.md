# Conways_Game_of_Life
Conway's Game of Life is a famous cellular automaton developed by mathematician John Conway in 1970. It's a zero-player game, meaning its evolution is determined by its initial state without further input. The game consists of a grid of cells, where each cell can be alive (populated) or dead (empty).

The game's dynamics are governed by four simple rules applied to each cell simultaneously:

Survival: A living cell with 2 or 3 living neighbors remains alive.
Death by Isolation: A living cell with fewer than 2 living neighbors dies.
Death by Overcrowding: A living cell with more than 3 living neighbors dies.
Reproduction: A dead cell with exactly 3 living neighbors becomes alive.
These rules can create complex and unpredictable patterns, leading to various formations such as static shapes, oscillators, and gliders, making it a popular example of emergent complexity in simple systems.

This is a C++ implementation of the aforementioned game using object-oriented programming. 

 # Features
 Personalized user input: Users can choose which initial configuration to load into the game by clicking on the cells they want to be alive. 
 
 The grid and the cells in it present different behavioral patterns and characteristics which are unique to them. In other words, they act as separate
 entities. 
 
 Adjustable Parameters: Users will be able to choose the grid size and speed. 
 
 
