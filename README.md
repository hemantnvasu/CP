C++ Sublime Text 3 setup for CP

Step 1: Install C++ compiler

1. download from source forge
2. select c++ compiler option and mark for changes and apply changes
3. add path to enviroment variables (system variable) Edit->New->Copy Path->OK->OK
4. check version in cmd using: g++ --version

Step 2: Install Sublime Text

1. Download and Install Sublime Text
2. select color scheme: monokai (optional)
3. Build System: Tools -> build System-> new Build system
   copy both build system from github and save it using file format .sublime-build
4. create 4 files save them - code.txt, Input.txt, Output.txt, Error.txt
5. layout : View -> layout -> columns:3
		 	      Groups -> Max columns:2

Step 3: Install Packages from Package Manager (ctrl + shift + p)

1. Install Package
2. Write "package name"
3. AstyleFormatter - go to this package settings and mark true for "format on save" for Auto Spacing on Save
4. cppFastOlympicCoding

Step 4: Compile and Run the Code
take the sample code from github, write something and run using ctrl + shift + B

Step 5: Precompiling bits/stdc++.h

1. goto path in cmd
	C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
	Note: check if your path is same as here
2. hit command
	g++ -std=c++17 stdc++.h
	Note: I'm using c++17 so I wrote c++17
