call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat"
call "%OPENDDS_ROOT%\setenv.cmd"

python gen_model.py

pause