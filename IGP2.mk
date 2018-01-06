##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=IGP2
ConfigurationName      :=Debug
WorkspacePath          := "/home/patrick/Documents/programming/repositories/IGP2"
ProjectPath            := "/home/patrick/Documents/programming/repositories/IGP2"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=patrick
Date                   :=06/01/18
CodeLitePath           :="/home/patrick/.codelite"
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
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/usr/include $(IncludeSwitch)/usr/local/include 
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/model_Resource.cpp$(ObjectSuffix) $(IntermediateDirectory)/model_ModelManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_TextureManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/control_GameController.cpp$(ObjectSuffix) $(IntermediateDirectory)/control_GameStateMainMenu.cpp$(ObjectSuffix) $(IntermediateDirectory)/control_GameStatePlay.cpp$(ObjectSuffix) $(IntermediateDirectory)/model_Edge.cpp$(ObjectSuffix) $(IntermediateDirectory)/model_Tile.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/model_Vertice.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_GuiViewManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_GuiStyle.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_GuiElement.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_GuiElementGroup.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_GridView.cpp$(ObjectSuffix) $(IntermediateDirectory)/view_MapView.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix): src/Game.cpp $(IntermediateDirectory)/src_Game.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Game.cpp$(DependSuffix): src/Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Game.cpp$(DependSuffix) -MM "src/Game.cpp"

$(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix): src/Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Game.cpp$(PreprocessSuffix) "src/Game.cpp"

$(IntermediateDirectory)/model_Resource.cpp$(ObjectSuffix): src/model/Resource.cpp $(IntermediateDirectory)/model_Resource.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/model/Resource.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_Resource.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_Resource.cpp$(DependSuffix): src/model/Resource.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_Resource.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/model_Resource.cpp$(DependSuffix) -MM "src/model/Resource.cpp"

$(IntermediateDirectory)/model_Resource.cpp$(PreprocessSuffix): src/model/Resource.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_Resource.cpp$(PreprocessSuffix) "src/model/Resource.cpp"

$(IntermediateDirectory)/model_ModelManager.cpp$(ObjectSuffix): src/model/ModelManager.cpp $(IntermediateDirectory)/model_ModelManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/model/ModelManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_ModelManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_ModelManager.cpp$(DependSuffix): src/model/ModelManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_ModelManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/model_ModelManager.cpp$(DependSuffix) -MM "src/model/ModelManager.cpp"

$(IntermediateDirectory)/model_ModelManager.cpp$(PreprocessSuffix): src/model/ModelManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_ModelManager.cpp$(PreprocessSuffix) "src/model/ModelManager.cpp"

$(IntermediateDirectory)/view_TextureManager.cpp$(ObjectSuffix): src/view/TextureManager.cpp $(IntermediateDirectory)/view_TextureManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/TextureManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_TextureManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_TextureManager.cpp$(DependSuffix): src/view/TextureManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_TextureManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_TextureManager.cpp$(DependSuffix) -MM "src/view/TextureManager.cpp"

$(IntermediateDirectory)/view_TextureManager.cpp$(PreprocessSuffix): src/view/TextureManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_TextureManager.cpp$(PreprocessSuffix) "src/view/TextureManager.cpp"

$(IntermediateDirectory)/control_GameController.cpp$(ObjectSuffix): src/control/GameController.cpp $(IntermediateDirectory)/control_GameController.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/control/GameController.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/control_GameController.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/control_GameController.cpp$(DependSuffix): src/control/GameController.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/control_GameController.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/control_GameController.cpp$(DependSuffix) -MM "src/control/GameController.cpp"

$(IntermediateDirectory)/control_GameController.cpp$(PreprocessSuffix): src/control/GameController.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/control_GameController.cpp$(PreprocessSuffix) "src/control/GameController.cpp"

$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(ObjectSuffix): src/control/GameStateMainMenu.cpp $(IntermediateDirectory)/control_GameStateMainMenu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/control/GameStateMainMenu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(DependSuffix): src/control/GameStateMainMenu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(DependSuffix) -MM "src/control/GameStateMainMenu.cpp"

$(IntermediateDirectory)/control_GameStateMainMenu.cpp$(PreprocessSuffix): src/control/GameStateMainMenu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/control_GameStateMainMenu.cpp$(PreprocessSuffix) "src/control/GameStateMainMenu.cpp"

$(IntermediateDirectory)/control_GameStatePlay.cpp$(ObjectSuffix): src/control/GameStatePlay.cpp $(IntermediateDirectory)/control_GameStatePlay.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/control/GameStatePlay.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/control_GameStatePlay.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/control_GameStatePlay.cpp$(DependSuffix): src/control/GameStatePlay.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/control_GameStatePlay.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/control_GameStatePlay.cpp$(DependSuffix) -MM "src/control/GameStatePlay.cpp"

$(IntermediateDirectory)/control_GameStatePlay.cpp$(PreprocessSuffix): src/control/GameStatePlay.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/control_GameStatePlay.cpp$(PreprocessSuffix) "src/control/GameStatePlay.cpp"

$(IntermediateDirectory)/model_Edge.cpp$(ObjectSuffix): src/model/Edge.cpp $(IntermediateDirectory)/model_Edge.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/model/Edge.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_Edge.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_Edge.cpp$(DependSuffix): src/model/Edge.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_Edge.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/model_Edge.cpp$(DependSuffix) -MM "src/model/Edge.cpp"

$(IntermediateDirectory)/model_Edge.cpp$(PreprocessSuffix): src/model/Edge.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_Edge.cpp$(PreprocessSuffix) "src/model/Edge.cpp"

$(IntermediateDirectory)/model_Tile.cpp$(ObjectSuffix): src/model/Tile.cpp $(IntermediateDirectory)/model_Tile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/model/Tile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_Tile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_Tile.cpp$(DependSuffix): src/model/Tile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_Tile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/model_Tile.cpp$(DependSuffix) -MM "src/model/Tile.cpp"

$(IntermediateDirectory)/model_Tile.cpp$(PreprocessSuffix): src/model/Tile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_Tile.cpp$(PreprocessSuffix) "src/model/Tile.cpp"

$(IntermediateDirectory)/model_Vertice.cpp$(ObjectSuffix): src/model/Vertice.cpp $(IntermediateDirectory)/model_Vertice.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/model/Vertice.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/model_Vertice.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/model_Vertice.cpp$(DependSuffix): src/model/Vertice.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/model_Vertice.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/model_Vertice.cpp$(DependSuffix) -MM "src/model/Vertice.cpp"

$(IntermediateDirectory)/model_Vertice.cpp$(PreprocessSuffix): src/model/Vertice.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/model_Vertice.cpp$(PreprocessSuffix) "src/model/Vertice.cpp"

$(IntermediateDirectory)/view_GuiViewManager.cpp$(ObjectSuffix): src/view/GuiViewManager.cpp $(IntermediateDirectory)/view_GuiViewManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/GuiViewManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_GuiViewManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_GuiViewManager.cpp$(DependSuffix): src/view/GuiViewManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_GuiViewManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_GuiViewManager.cpp$(DependSuffix) -MM "src/view/GuiViewManager.cpp"

$(IntermediateDirectory)/view_GuiViewManager.cpp$(PreprocessSuffix): src/view/GuiViewManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_GuiViewManager.cpp$(PreprocessSuffix) "src/view/GuiViewManager.cpp"

$(IntermediateDirectory)/view_GuiStyle.cpp$(ObjectSuffix): src/view/GuiStyle.cpp $(IntermediateDirectory)/view_GuiStyle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/GuiStyle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_GuiStyle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_GuiStyle.cpp$(DependSuffix): src/view/GuiStyle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_GuiStyle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_GuiStyle.cpp$(DependSuffix) -MM "src/view/GuiStyle.cpp"

$(IntermediateDirectory)/view_GuiStyle.cpp$(PreprocessSuffix): src/view/GuiStyle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_GuiStyle.cpp$(PreprocessSuffix) "src/view/GuiStyle.cpp"

$(IntermediateDirectory)/view_GuiElement.cpp$(ObjectSuffix): src/view/GuiElement.cpp $(IntermediateDirectory)/view_GuiElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/GuiElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_GuiElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_GuiElement.cpp$(DependSuffix): src/view/GuiElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_GuiElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_GuiElement.cpp$(DependSuffix) -MM "src/view/GuiElement.cpp"

$(IntermediateDirectory)/view_GuiElement.cpp$(PreprocessSuffix): src/view/GuiElement.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_GuiElement.cpp$(PreprocessSuffix) "src/view/GuiElement.cpp"

$(IntermediateDirectory)/view_GuiElementGroup.cpp$(ObjectSuffix): src/view/GuiElementGroup.cpp $(IntermediateDirectory)/view_GuiElementGroup.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/GuiElementGroup.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_GuiElementGroup.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_GuiElementGroup.cpp$(DependSuffix): src/view/GuiElementGroup.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_GuiElementGroup.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_GuiElementGroup.cpp$(DependSuffix) -MM "src/view/GuiElementGroup.cpp"

$(IntermediateDirectory)/view_GuiElementGroup.cpp$(PreprocessSuffix): src/view/GuiElementGroup.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_GuiElementGroup.cpp$(PreprocessSuffix) "src/view/GuiElementGroup.cpp"

$(IntermediateDirectory)/view_GridView.cpp$(ObjectSuffix): src/view/GridView.cpp $(IntermediateDirectory)/view_GridView.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/GridView.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_GridView.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_GridView.cpp$(DependSuffix): src/view/GridView.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_GridView.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_GridView.cpp$(DependSuffix) -MM "src/view/GridView.cpp"

$(IntermediateDirectory)/view_GridView.cpp$(PreprocessSuffix): src/view/GridView.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_GridView.cpp$(PreprocessSuffix) "src/view/GridView.cpp"

$(IntermediateDirectory)/view_MapView.cpp$(ObjectSuffix): src/view/MapView.cpp $(IntermediateDirectory)/view_MapView.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/patrick/Documents/programming/repositories/IGP2/src/view/MapView.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/view_MapView.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/view_MapView.cpp$(DependSuffix): src/view/MapView.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/view_MapView.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/view_MapView.cpp$(DependSuffix) -MM "src/view/MapView.cpp"

$(IntermediateDirectory)/view_MapView.cpp$(PreprocessSuffix): src/view/MapView.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/view_MapView.cpp$(PreprocessSuffix) "src/view/MapView.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


