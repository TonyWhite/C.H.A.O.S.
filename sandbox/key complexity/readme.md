CALCULATE THE COMPLESSITY OF THE KEY
====================================

This will be a tool to monitoring password security

## Select Cypher from password's length
```
1      8      16      24      32  Byte
·······↓·······↓·······↓·······↓
Emmenchial! Shfizzero? No, Novi.
·······↑·······↑·······↑·······↑
8     64      128     192     256 Bit
·······↓·······↓·······↓·······↓
████████░░░░░░░░░░░░░░░░░░░░░░░░ CONFIDENTIAL with half AES 128
████████████████░░░░░░░░░░░░░░░░ SECRET with AES 128
████████████████████████░░░░░░░░ TOP SECRET with AES 192
████████████████████████████████ TOP SECRET with AES 256
```

## GUI
```
╭─────────────────────────────────────────────────────────────────────╮
│ C.H.A.O.S. ~ Check password                                         │
├─────────────────────────────────────────────────────────────────────┤
│  ☑ lowercase     ╮                            ┌┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┐  │
│  ☑ uppercase     │                            ┊                  ┊  │
│  ☐ number        ├ ASCII                      ┊                  ┊  │
│  ☑ punctuation   │                            ┊                  ┊  │
│  ☐ special       ╯                            ┊   RUBBER STAMP   ┊  │
│  ☐ other                                      ┊      IMAGE       ┊  │
│                                               ┊                  ┊  │
│  Applicable algorithm: AES-256                ┊                  ┊  │
│                                               ┊                  ┊  │
│  Security level: 7/10                         └┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┄┘  │
│                                                                     │
│  ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┑  │
│  ┃Emmenchial! Shfizzero? No, Novi.                               │  │
│  ┖───────────────────────────────────────────────────────────────┘  │
└─────────────────────────────────────────────────────────────────────┘
```

## Key length consts
```c++
const unsigned int GOOD_CONFIDENTIAL = 1; // At least  8 Bytes ( 64 bits)
const unsigned int SECRET = 2;            // At least 16 Bytes (128 bits)
const unsigned int TOP_SECRET_192 = 3;    // At least 24 Bytes (192 bits)
const unsigned int TOP_SECRET_256 = 4;    // At least 32 Bytes (256 bits)
```


## Complexity
```c++
unsigned int key_length = 0;  // User's key length
unsigned int complexity = 0;  // Complexity of the key
const unsigned char ascii_lowercase[26] =   {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
const unsigned char ascii_uppercase[26] =   {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
const unsigned char ascii_number[10] =      {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
const unsigned char ascii_punctuation[16] = {" ", "!", "\"", "(", ")", ",", "-", ".", "/", ":", ";", "\?", "[", "]", "{", "}"};
const unsigned char ascii_special[17] =     {"#", "$", "%", "&", "\'", "*", "+", "<", "=", ">", "@", "\\", "^", "_", "`", "|", "~"};

bool lowercase = false;       // at least one lowercase
bool uppercase = false;       // at least one uppercase
bool number = false;          // at least one number
bool punctuation = false;     // at least one punctuation
bool special = false;         // at least one special ASCII
bool other = false;           // at least one non-standard ASCII

if (lowercase)   complexity++;
if (uppercase)   complexity++;
if (number)      complexity++;
if (punctuation) complexity++;
if (special)     complexity++;
if (other)       complexity++;
unsigned int security_level = complexity + key_length;


cout << "Security level: " << security_level << "/10" << endl;
```
