##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            =SomeTextStuff
ConfigurationName      =Debug
WorkspaceConfiguration =Debug
WorkspacePath          =S:\Github\LearningCPP
ProjectPath            =S:\Github\LearningCPP\SomeTextStuff
IntermediateDirectory  =$(ConfigurationName)
OutDir                 =$(IntermediateDirectory)
CurrentFileName        =
CurrentFilePath        =
CurrentFileFullPath    =
User                   =advik
Date                   =08/10/2022
CodeLitePath           =D:\Programs\CodeLite
LinkerName             =link.exe /nologo
SharedObjectLinkerName =link.exe /nologo /DLL
ObjectSuffix           =.obj
DependSuffix           =
PreprocessSuffix       =.i
DebugSwitch            =/Zi 
IncludeSwitch          =/I
LibrarySwitch          = 
OutputSwitch           =/OUT:
LibraryPathSwitch      =/LIBPATH:
PreprocessorSwitch     =/D
SourceSwitch           =
OutputDirectory        =S:\Github\LearningCPP\$(WorkspaceConfiguration)
OutputFile             =..\$(WorkspaceConfiguration)\$(ProjectName).exe
Preprocessors          =
ObjectSwitch           =/Fo
ArchiveOutputSwitch    =/OUT:
PreprocessOnlySwitch   =/P /Fi:
ObjectsFileList        ="SomeTextStuff.txt"
MakeDirCommand         =makedir
RcCmpOptions           = 
RcCompilerName         =rc.exe \nologo
LinkOptions            =  /DEBUG
PCHCreateFlags         =
PCHUseFlags            =
IncludePath            = $(IncludeSwitch)D:\Programs\VisualStudio2022\VC\Tools\MSVC\14.33.31629\include $(IncludeSwitch)D:\Programs\VisualStudio2022\VC\Tools\MSVC\14.33.31629\ATLMFC\include $(IncludeSwitch)D:\Programs\VisualStudio2022\VC\Auxiliary\VS\include $(IncludeSwitch)"D:\Windows Kits\10\include\10.0.22621.0\ucrt" $(IncludeSwitch)"D:\Windows Kits\10\\include\10.0.22621.0\\um" $(IncludeSwitch)"D:\Windows Kits\10\\include\10.0.22621.0\\shared" $(IncludeSwitch)"D:\Windows Kits\10\\include\10.0.22621.0\\winrt" $(IncludeSwitch)"D:\Windows Kits\10\\include\10.0.22621.0\\cppwinrt"  $(IncludeSwitch). 
RcIncludePath          = 
Libs                   = 
ArLibs                 =  
LibPath                =$(LibraryPathSwitch)D:\Programs\VisualStudio2022\VC\Tools\MSVC\14.33.31629\ATLMFC\lib\x64 $(LibraryPathSwitch)D:\Programs\VisualStudio2022\VC\Tools\MSVC\14.33.31629\lib\x64 $(LibraryPathSwitch)"D:\Windows Kits\10\lib\10.0.22621.0\ucrt\x64" $(LibraryPathSwitch)"D:\Windows Kits\10\\lib\10.0.22621.0\\um\x64"  $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       = lib.exe /nologo
CXX      = cl.exe /nologo /TP /FC
CC       = cl.exe /nologo /TC /FC
CXXFLAGS =  /c /EHsc /MDd /Od /Zi $(Preprocessors)
CFLAGS   =  /c /MDd /Od /Zi $(Preprocessors)
ASFLAGS  = 
AS       = ml.exe /nologo


##
## User defined environment variables
##
CodeLiteDir=D:\Programs\CodeLite


##
## Object Targets Lists 
##
Objects0=$(IntermediateDirectory)\main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)\.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)\.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)
.PHONY: clean PrePreBuild PreBuild MakeIntermediateDirs all PostBuild 

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"


$(IntermediateDirectory)\.d:
	@echo Creating Intermediate Directory
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo Intermediate directories created
PreBuild:


##
## Objects
##
$(IntermediateDirectory)\main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(PCHUseFlags) $(SourceSwitch) "S:\Github\LearningCPP\SomeTextStuff\main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)\main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(PCHUseFlags) $(IncludePath) $(PreprocessOnlySwitch) $(IntermediateDirectory)\main.cpp$(PreprocessSuffix) "main.cpp"

##
## Clean
##
clean:
	@if exist "$(IntermediateDirectory)" rmdir /S /Q "$(IntermediateDirectory)"


