/*
 * for random access (read/modify), two pointer are used with files
 
 * get pointer - to get the position from where next read will happen
 * put pointer - to specify the position where next write will take place
  
 * Position get pointer
 *  file.seekg(84L);      //set the read pointer at 84th byte
 *  file.seekg(-28L,ios::cur);      // set the read pointer 29 bytes back from current position
 *                      //other reference: beg, end
 * 
 * Position put pointer
 *  file.seekp(56L);    //set at write pointer at 56th byte
 *  file.seekp(0L,ios::beg);    // set the write pointer at 0th byte from beggining of the file (i.e. go to the start of the file)
 * */