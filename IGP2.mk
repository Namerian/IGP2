##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=IGP2
ConfigurationName      :=Debug
WorkspacePath          :=/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2
ProjectPath            :=/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Patrick Monville
Date                   :=26/12/17
CodeLitePath           :=/home/patrick/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)SFML_STATIC 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="IGP2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/usr/local/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)sfml-graphics $(LibrarySwitch)sfml-window $(LibrarySwitch)sfml-audio $(LibrarySwitch)sfml-network $(LibrarySwitch)sfml-system 
ArLibs                 :=  "sfml-graphics" "sfml-window" "sfml-audio" "sfml-network" "sfml-system" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++14 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_GameController.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_model_Model.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_model_map_Edge.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_model_map_Tile.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_model_map_Vertice.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_GameController.cpp$(ObjectSuffix): src/GameController.cpp $(IntermediateDirectory)/src_GameController.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/src/GameController.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_GameController.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_GameController.cpp$(DependSuffix): src/GameController.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_GameController.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_GameController.cpp$(DependSuffix) -MM src/GameController.cpp

$(IntermediateDirectory)/src_GameController.cpp$(PreprocessSuffix): src/GameController.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_GameController.cpp$(PreprocessSuffix) src/GameController.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_model_Model.cpp$(ObjectSuffix): src/model/Model.cpp $(IntermediateDirectory)/src_model_Model.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/src/model/Model.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_model_Model.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_model_Model.cpp$(DependSuffix): src/model/Model.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_model_Model.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_model_Model.cpp$(DependSuffix) -MM src/model/Model.cpp

$(IntermediateDirectory)/src_model_Model.cpp$(PreprocessSuffix): src/model/Model.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_model_Model.cpp$(PreprocessSuffix) src/model/Model.cpp

$(IntermediateDirectory)/src_model_map_Edge.cpp$(ObjectSuffix): src/model/map/Edge.cpp $(IntermediateDirectory)/src_model_map_Edge.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/src/model/map/Edge.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_model_map_Edge.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_model_map_Edge.cpp$(DependSuffix): src/model/map/Edge.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_model_map_Edge.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_model_map_Edge.cpp$(DependSuffix) -MM src/model/map/Edge.cpp

$(IntermediateDirectory)/src_model_map_Edge.cpp$(PreprocessSuffix): src/model/map/Edge.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_model_map_Edge.cpp$(PreprocessSuffix) src/model/map/Edge.cpp

$(IntermediateDirectory)/src_model_map_Tile.cpp$(ObjectSuffix): src/model/map/Tile.cpp $(IntermediateDirectory)/src_model_map_Tile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/src/model/map/Tile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_model_map_Tile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_model_map_Tile.cpp$(DependSuffix): src/model/map/Tile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_model_map_Tile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_model_map_Tile.cpp$(DependSuffix) -MM src/model/map/Tile.cpp

$(IntermediateDirectory)/src_model_map_Tile.cpp$(PreprocessSuffix): src/model/map/Tile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_model_map_Tile.cpp$(PreprocessSuffix) src/model/map/Tile.cpp

$(IntermediateDirectory)/src_model_map_Vertice.cpp$(ObjectSuffix): src/model/map/Vertice.cpp $(IntermediateDirectory)/src_model_map_Vertice.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/patrick/GamesDrive/PROGRAMMING/Projects/IGP2/src/model/map/Vertice.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_model_map_Vertice.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_model_map_Vertice.cpp$(DependSuffix): src/model/map/Vertice.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_model_map_Vertice.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_model_map_Vertice.cpp$(DependSuffix) -MM src/model/map/Vertice.cpp

$(IntermediateDirectory)/src_model_map_Vertice.cpp$(PreprocessSuffix): src/model/map/Vertice.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_model_map_Vertice.cpp$(PreprocessSuffix) src/model/map/Vertice.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


