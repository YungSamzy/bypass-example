Simple POC password locked program and bypass...  
  
Addresses to Patch:
  ```
  0x00007FF71F198427: 74 -> EB // actual patch
  0x00007FF71F198428: 15 -> 00 // no op to save bytes
  ```
Try to patch it yourself!
Compiled and bypassed binaries are in Releases!  
C++ 20 STD used, not that it really matters... 
