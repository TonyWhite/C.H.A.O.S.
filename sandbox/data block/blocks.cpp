#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/*
 * Arrange data to be a multiple of 64 bit
 * The data must be a multiple of 16 bytes.
 * If it is not, I have to adapt the last block by adding zeros.
 * Now it is a multiple of 16 bytes.
 * I add another 16-byte block (control block) to indicate if I have corrected the last block and what was its real size.
 */
int arrange_data(string &data, bool debug = false)
{
  int error = 0;
  unsigned int aes_block_size = 16; // Size in Bytes: 128 bit

  unsigned int data_length = data.length(); // Size in Bytes
  if(debug) cout << "Data size: " << data_length << " Bytes" << endl;

  if(data_length)
  {
    unsigned int full_blocks = data_length/aes_block_size;
    if(debug) cout << "Full blocks: " << full_blocks << endl;
    unsigned int last_data_block_length = data_length - full_blocks * aes_block_size;

    if(last_data_block_length) // Last block incomplete
    {
      // Complete the block with zero bytes
      if(debug) cout << "Last data block length: " << last_data_block_length << " Bytes" << endl;
      unsigned char zero_byte = '\0'; // Binary value = 00000000
      unsigned int bytes_left = aes_block_size - last_data_block_length;
      while(bytes_left)
      {
        data += zero_byte;
        bytes_left--;
      }
      data_length = data.length(); // Read new size in Bytes
      if(debug) cout << "New data size: " << data_length << " Bytes" << endl;
    }
    else // Last block complete
    {
      if(debug) cout << "The Data contains only full blocks" << endl;
    }

    // DEBUG: Need to write another complete block with real size of incomplete block (last_data_block_length)

  }
  else
  {
    error = 1;
    if(debug) cout << "Data not found" << endl;
  }
  return error;
}

int arrange_key(string &key, bool debug = false)
{
  unsigned int aes_key_size[3] = {128, 192, 256}; // valid key size for AES-256
  // Proposta: utilizzare solo chiavi da 256 bit
  // Medoto:
  // 1- key <128 bit, add zeros to fill 128 bit. CONFIDENTIAL
  // 2- key =128 bit, use 128 bit key. SECRET
  // 3- key >128 & <192 bit, add zeros to fill 192 bit. SECRET
  // 4- key =192 bit, use 192 bit key. TOP SECRET LIV. 1
  // 5- key >192 & <256 bit, add zeros to fill 256 bit. TOP SECRET
  // 6- key =256 bit, use 256 bit key. TOP SECRET LIV. 2
  // 7- key >256 bit, the first 256 bits of the key are used. The other bits of the key will be used to encrypt again.
}

int main()
{
  string qualcosa = "0123456789ABCDEF0123456789ABCDEF0";
  arrange_data(qualcosa, true);
  cout << "Qualcosa: " << qualcosa.length() << endl;
}
