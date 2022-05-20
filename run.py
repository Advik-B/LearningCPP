import os
import subprocess
import sys

if len(sys.argv) < 2:
    print(
        """USAGE:
    %s: file-to-compile
        """ % __file__.split("\\")[-1]
    )

    sys.exit(1)

COMPILER = "g++"
WARNINGS = "all"
STANDERD = "c++14"
OUTPUT = "%(-)%.exe"
DELETEAFTER = True

fname = OUTPUT.replace("%(-)%", sys.argv[1])

subprocess.run([COMPILER, f"-W{WARNINGS}", f"-std={STANDERD}", sys.argv[1], "-o", fname], shell=True)

subprocess.run(fname, shell=True)

if DELETEAFTER:
    try:
        os.remove(fname)
    except FileNotFoundError:
        pass
