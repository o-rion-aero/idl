import sys,os,fnmatch,ntpath
import xml.etree.ElementTree

matches = []

for root, dirnames, filenames in os.walk("idl"):
	for filename in fnmatch.filter(filenames, "*.idl"):
		if "TypeSupport" in filename:
			continue;
		matches.append(os.path.join(root, filename))

working_dir = os.getcwd()	

type_support_headers = []	

for match in matches:	
	os.chdir(working_dir)
	
	mydir=os.path.dirname(os.path.realpath(match))
	mydir_relative=os.path.dirname(match).replace("\\", "/")
	idlname=os.path.splitext(ntpath.basename(match))[0]
		
	os.chdir(mydir)
	
	os.system("tao_idl " + idlname + ".idl -o .")
	os.system("opendds_idl " + idlname + ".idl -o .")
	os.system("tao_idl -I" + os.environ["OPENDDS_ROOT"] + " " + idlname + "TypeSupport.idl -o .")
	
	type_support_headers.append(mydir_relative + "/" + idlname + "TypeSupportImpl.h")

os.chdir(working_dir)