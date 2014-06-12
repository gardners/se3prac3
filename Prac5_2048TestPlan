2048 Game Test Plan
-----------------------

Introduction
-------------

Mission: To develop a functioning version of the 2048 Game with the minimal possible defects and bugs. 

The following plan outlines the tests and required outcomes for ensuring the correct functionality and minimisation of bugs in the program code of the 2048 Game. The 2048 Game is coded in C and will require a suite of tests written in the same language. Through testing it is expected that all required game functionality will be proven to function correctly and as much as possible, logic, arithmetic, resource and performance bugs are thoroughly tested for. Any such bugs found should be corrected and the programme re-tested for any regression faults. 

As the nature of this programme is an exercise generating error free testable code, the following test regime may be more rigorous than what would normally be required for a simple application.

Required Resources
---------------------

The are minimal resources required other than a computer, C compiler and the code itself. There will be no restraints on the number of tests to be carried out as the code is relatively simple and most tests will take less than one second to run. Sanity should prevail however and all so testing needs to be completed before the end of June 2014.

Specification Tests
---------------------

To prove the 2048 Game is functional the following tests based on the programmes specification will be carried out. 

 - The game board renders correctly 
 - The game board initialises with two tiles spawned
 - The game board spawns two new tiles with each player move
 - New tiles spawn in a random spare board location 
 - New tiles spawn with random values of either 2 or 4
 - Board tilt moves tiles and combines tile values correctly (in line matching tiles combine when tilted in that direction)
 - Board tilts are in the correct direction
 - All incoherent values entered by a player are caught and appropriate feedback given
 - Game end state (all tiles filled with no possible tilts available) is correctly handled
 
The specification tests will be carried out through unit and integration testing of the relevant code functions. Where possible functions will be tested individually, otherwise the minimum set of functions will be included when required for a particular test. 
 
The preceding specification tests will also cover programme logic tests.

Arithmetic Tests
------------------
 
Arithmetic testing will be carried out to ensure the correct values are derived when combining tiles on the game board. The minimum requirement is that the square of each number starting at 2 up to 1024 can be added to itself. Enabling the winning score of 2048 when two 1024 tiles are combined. Higher and negative values can be tested to further prove the arithmetic calculations are correct. 
 
Performance and Resource Tests
-----------------------------------
 
Due to the simplicity of the 2048 game code there will be minimal performance and resource testing required. Some load testing will be carried out to ensure the code is not generating any unexpected memory or CPU overheads. 
 
The game will be played through many times, or "alpha tested" to ensure there are no issues with responsiveness or freezing. 
 
Usability Testing
-----------------
 
Because we are testing a game it is important to carry out usability testing. While beta testing could cover this, it is unlikely that this code will be accessed by many and so tests will be done to identify any obvious usability issues. 

Not Testing
------------

In this regime, testing will not go deeper than unit testing of single functions. Because functions of the 2048 game are not exceeding complex, testing of individual lines of code is deemed unnecessary.

Code Review
--------------

As tests are completed and bugs are fixed the source code will be subject to review to ensure good programming practice has been observed and to minimise the possibility of regression faults.  

Summary
----------
It is expected that by caring out the preceding regime of tests, the code for the 2048 Game will be as functional and bug free as needed for the purpose of the programme. While there are further areas of testing that could be explored, the tests covered should discover at minimum 80% of failures and bugs in the 2048 Game code, considering such failures would not be of critical significance, this level of testing will suffice. 

