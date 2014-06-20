Test Plan for Baggage Handling System
-------------------------------------

Firstly, the problem can be decomposed into two areas:

1) Baggage check-in

2) Baggage carrousel

The baggage check-in should be relatively easy to test, but the baggage carrousel will require more thought.

The baggage check-in has the following functions:
Get destination, set barcode to align with destination and print baggage label.

As mentioned before, this should be relatively easy to test, and would not require an extensive amount of hardware.
Unit tests would be most appropriate.

The baggage carrousel will require much more testing, as it is a much more complex system. It would also require a larger
amount of hardware to complete the appropriate ammount of testing.

The best way to test the baggage carrousel would be as follows:

1) Track one bag down one each pre-defined path that a bag could go.

2) Next, increase the number of tracks and bags. Ensure the bags end up where they are supposed to.

3) Then test diversions. Fill up one track and ensure it can divert bags to the empty track, but still get the bags to
    their correct destination.
    
4) Then keep systematically increasing the number of tracks and bags. Ensure diversion still works as intended.

5) Continue to add functionality (such as starting / stopping tracks or slowing / speeding up based on load of tracks)
    whilst ensuring no regressions are present.

In my opinion the three most important tests (in no particular order) are:

1) Prototyping: as the hardware is a major factor as to how the baggage carrousel will operate.

2) Unit: unit tests of each of the functions of the check in system and of the tracks. These could be tracking, routing,
    congestion management etc.
    
3) Integration: to ensure that multiple tracks work together and that both systems work together.

In my opinion the three least important test are:

1) Code review: as most of the issues will be related to the hardware of the system.

2) System tests: may be necessary, but require the whole system to be complete. This should be one of the final
    integration tests.
    
3) Low volume tests: these will not adequately test the system. High volume tests would be more beneficial.

Following this test plan should provide a relatively stable baggage handling system.
