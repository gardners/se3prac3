Introduction
------------

The purpose of this document is to provide a test plan for the 2048 program. 2048 is a game in which a 4 by 4 grid spawns tiles in random positions on the grid and with either a value of 2 or 4. The user can "tilt" the grid to combine tiles of the same value. Combining tiles will produce a tile with the sum of the two tiles. The aim is to get a tile with the value of 2048.

Resources
---------

The resources required to complete the testing process are as follows:
  A unix machine
  All the 2048Game program files
  All the 2048Game test files
  
Major Code Files
----------------

Board.c
Main.c
Tilt.c

Components Needing Testing
--------------------------

Tilt left
Tilt right
Tilt up
Tilt down
Rotate 90
Rotate 180
Rotate 270
Rotate 360
Combine tiles
Spawn new tiles

Tests
-----

I will be using black box testing techniques, mainly in the form of compliance tests, production tests and regression tests, to test the program.

The compliance tests will test different stages of the program, as it is being developed. These include tests for functions such as
combining tiles, sliding tiles, rotating the board, etc.

The production tests will provide further testing for each stage of the program and will include further tests for each function listed
previously.

The regression tests will test for any regressions that might have occured from adding different functions to the program.

I will not be making commissioning tests or service and repair tests, as they are not necessary for this program.

Conclusion
----------

Following this test plan will ensure the delivery of a quility product with minimum bugs.
