<img src="https://github.com/MarcoCasanova00/putinwave/blob/main/banner.gif" />

# PutInWave

Steganography - Hide files in .wav 

Wrote in C by Marco Casanova

Open a terminal in the folder you've downloaded the compiled file

type

./putinwave_v_1_0 

and you'll see this 

	PutIn Wave - Stego Tool by  Marco Casanova - 2021


	Usage: [a/e] file.wave file.ext
  
  
	-a : add file to file.wav
		Example: -a file.wav hide.zip
	-e : extract file from file.wav
		Example: -e file.wav hide.zip
    
    
or compile from source.
    
WARNING - When reading and writing, the program will never stop until you hit CTRL-C , so if you leave it unattended it will create a big ass .wav file when hiding your message (-a function) and create a big ass output file when extracting your message (-e function); in case of an image or zip etc. it can create corrupted files, but with text files you'll just see rubbish characters after the text you have hidden, but the text will be crystal clear.
    It is advised to hide text files only until I can fix the code.
    
    NOTE: in the 1.5 version, this is probably solved.
    
Thank You. 
    
