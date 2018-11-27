// The data must be a multiple of 16 bytes.
// If it is not, I have to adapt the last block by adding zeros.
// Now it is a multiple of 16 bytes.
// I add another 16-byte block (control block) to indicate if I have corrected the last block and what was its real size.


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  unsigned int block_size = 16; // Size in Bytes: 128 bit

  string data = "0123456789ABCDEF0123456789ABCDEF0";
  unsigned int data_length = data.length(); // Size in Bytes
  /* DEBUG */ cout << "Data size: " << data_length << " Bytes" << endl;

  if(data_length)
  {
    unsigned int full_blocks = data_length/block_size;
    /* DEBUG */ cout << "Full blocks: " << full_blocks << endl;
    unsigned int last_data_block_length = data_length - full_blocks * block_size;

    if(last_data_block_length) // Last block incomplete
    {
      // Complete the block with zero bytes
      /* DEBUG */ cout << "Last data block length: " << last_data_block_length << " Bytes" << endl;
      unsigned char zero_byte = '\0'; // Binary value = 00000000
      unsigned int bytes_left = block_size - last_data_block_length;
      while(bytes_left)
      {
        data += zero_byte;
        bytes_left--;
      }
      data_length = data.length(); // Read new size in Bytes
      /* DEBUG */ cout << "New data size: " << data_length << " Bytes" << endl;
    }
    else // Last block complete
    {
      /* DEBUG */ cout << "The Data contains only full blocks" << endl;
    }

    // DEBUG: Need to write another complete block with real size of incomplete block (last_data_block_length)

  }
  else
  {
    /* DEBUG */ cout << "Data not found" << endl;
  }

  unsigned int valid_key_size[3] = {128, 192, 256}; // valid key size for AES-256
  // Proposta: utilizzare solo chiavi da 256 bit
  // Medoto:
  // 1- per chiavi <128 bit, si aggiungono zeri per riempire 128 bit. CONFIDENTIAL
  // 2- per chiavi =128 bit, si usa la chiave a 128 bit. SECRET
  // 3- per chiavi >128 & <192 bit, si aggiungono zeri per riempire 192 bit. SECRET
  // 4- per chiavi =192 bit, si usa la chiave a 192 bit. TOP SECRET LIV. 1
  // 5- per chiavi >192 & <256 bit, si aggiungono zeri per riempire 256 bit. TOP SECRET
  // 6- per chiavi =256 bit, si usa la chiave a 256 bit. TOP SECRET LIV. 2
  // 7- per chiavi >256 bit, si usano i primi 256 bit della chiave. Il resto sarà usato per cifrare il risultato.
}
