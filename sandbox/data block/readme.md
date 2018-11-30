Arrange data to be a multiple of 64 bit
=======================================

Methods to prevent bad input in AES Cypher

## Arrange data

1. The data must be a multiple of 16 bytes.
2. If it is not, I have to adapt the last block by adding zeros.
3. Now it is a multiple of 16 bytes.
4. I add another 16-byte block (control block) to indicate if I have corrected the last block and what was its real size.

How add it?

```
Data (8 byte)
████████

Valid Block (16 Bytes)
████████████████

Data arranged (16 Bytes)
████████░░░░░░░░

Control block (16 Bytes)
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓

Data arranged with control block at start (32 Bytes)
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████░░░░░░░░

Data arranged with control block at end (32 Bytes)
████████░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
```
