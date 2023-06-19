# C++ Sublime Text 3 setup for CP

## Install C++ compiler

1. Download **MinGW - Minimalist GNU** for Windows from [SourceForge](https://sourceforge.net/projects/mingw/)
2. Open the installer and install MinGW in the desired Directory with default selected options(unless you know what you are doing).
3. Let the installer download the files. Once the download is complete, click continue. A new *MinGW Installation Manager* window will open. Click on **mingw32-gcc-g++ (The GNU C++ Compiler)** and click Mark for Installation as this is a must for our use case. You can select the other options if required.
4. Once you have selected the required Packages, Click on the **Installation** tab on top left and then click on **Apply Changes**.
5. Once the Download and Installation is complete, click Close and Open the Directory/Folder where we installed MinGW. Open the bin folder located in the MinGW folder and copy the path to this Directory.
6. Now open the **Edit System Environment Variables** Setting by searching it on Windows Search. Click on **Environment Variables...** Button and under the *System Properties*, Select `Path` Variable and Click **Edit...** Button. Now Click on **New** Button and Paste the Directory path we copied in Step 5.
7. To check the proper functioning, open cmd and run this command `g++ --version`. This should show us the version installed on our PC.

## Install Sublime Text

1. Download and Install Sublime Text from this [Link](https://www.sublimetext.com/3).
2. Select color scheme: monokai (optional).
3. Build System: Tools -> build System-> new Build system
   copy both build system from github and save it using file format .sublime-build.
4. create 4 files & save them - code.txt, Input.txt, Output.txt, Error.txt
5. layout : View -> layout -> columns:3
		 	      Groups -> Max columns:2

## Install Packages from Package Manager (ctrl + shift + p)

1. Install Package
2. Write "package name"
3. AstyleFormatter - go to this package settings and mark true for "format on save" for Auto Spacing on Save
4. cppFastOlympicCoding

## Compile and Run the Code
take the sample code from github, write something and run using ctrl + shift + B

Step 5: Precompiling bits/stdc++.h

1. goto path in cmd
	C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
	Note: check if your path is same as here
2. hit command
	g++ -std=c++17 stdc++.h
	Note: I'm using c++17 so I wrote c++17
