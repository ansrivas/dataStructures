##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=datastructures
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Ankur\Downloads\data\git_datastructure\dataStructures"
ProjectPath            := "C:\Users\Ankur\Downloads\data\git_datastructure\dataStructures"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Ankur
Date                   :=01/10/15
CodeLitePath           :="C:\Program Files (x86)\CodeLite"
LinkerName             :=C:/MinGW-4.8.1/bin/g++.exe 
SharedObjectLinkerName :=C:/MinGW-4.8.1/bin/g++.exe -shared -fPIC
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
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="datastructures.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW-4.8.1/bin/windres.exe 
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW-4.8.1/bin/ar.exe rcu
CXX      := C:/MinGW-4.8.1/bin/g++.exe 
CC       := C:/MinGW-4.8.1/bin/gcc.exe 
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW-4.8.1/bin/as.exe 


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/linkedlist.cpp$(ObjectSuffix) $(IntermediateDirectory)/dynamicprogramming.cpp$(ObjectSuffix) $(IntermediateDirectory)/sorting.cpp$(ObjectSuffix) $(IntermediateDirectory)/utils.cpp$(ObjectSuffix) $(IntermediateDirectory)/bst.cpp$(ObjectSuffix) $(IntermediateDirectory)/queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/heapsort.cpp$(ObjectSuffix) $(IntermediateDirectory)/queue_node.cpp$(ObjectSuffix) $(IntermediateDirectory)/majorityElement.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/arrays.cpp$(ObjectSuffix) $(IntermediateDirectory)/MergeSort.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/linkedlist.cpp$(ObjectSuffix): linkedlist.cpp $(IntermediateDirectory)/linkedlist.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/linkedlist.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/linkedlist.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/linkedlist.cpp$(DependSuffix): linkedlist.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/linkedlist.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/linkedlist.cpp$(DependSuffix) -MM "linkedlist.cpp"

$(IntermediateDirectory)/linkedlist.cpp$(PreprocessSuffix): linkedlist.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/linkedlist.cpp$(PreprocessSuffix) "linkedlist.cpp"

$(IntermediateDirectory)/dynamicprogramming.cpp$(ObjectSuffix): dynamicprogramming.cpp $(IntermediateDirectory)/dynamicprogramming.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/dynamicprogramming.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/dynamicprogramming.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/dynamicprogramming.cpp$(DependSuffix): dynamicprogramming.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/dynamicprogramming.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/dynamicprogramming.cpp$(DependSuffix) -MM "dynamicprogramming.cpp"

$(IntermediateDirectory)/dynamicprogramming.cpp$(PreprocessSuffix): dynamicprogramming.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/dynamicprogramming.cpp$(PreprocessSuffix) "dynamicprogramming.cpp"

$(IntermediateDirectory)/sorting.cpp$(ObjectSuffix): sorting.cpp $(IntermediateDirectory)/sorting.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/sorting.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sorting.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sorting.cpp$(DependSuffix): sorting.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sorting.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sorting.cpp$(DependSuffix) -MM "sorting.cpp"

$(IntermediateDirectory)/sorting.cpp$(PreprocessSuffix): sorting.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sorting.cpp$(PreprocessSuffix) "sorting.cpp"

$(IntermediateDirectory)/utils.cpp$(ObjectSuffix): utils.cpp $(IntermediateDirectory)/utils.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/utils.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/utils.cpp$(DependSuffix): utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/utils.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/utils.cpp$(DependSuffix) -MM "utils.cpp"

$(IntermediateDirectory)/utils.cpp$(PreprocessSuffix): utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/utils.cpp$(PreprocessSuffix) "utils.cpp"

$(IntermediateDirectory)/bst.cpp$(ObjectSuffix): bst.cpp $(IntermediateDirectory)/bst.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/bst.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bst.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bst.cpp$(DependSuffix): bst.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bst.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/bst.cpp$(DependSuffix) -MM "bst.cpp"

$(IntermediateDirectory)/bst.cpp$(PreprocessSuffix): bst.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bst.cpp$(PreprocessSuffix) "bst.cpp"

$(IntermediateDirectory)/queue.cpp$(ObjectSuffix): queue.cpp $(IntermediateDirectory)/queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/queue.cpp$(DependSuffix): queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/queue.cpp$(DependSuffix) -MM "queue.cpp"

$(IntermediateDirectory)/queue.cpp$(PreprocessSuffix): queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/queue.cpp$(PreprocessSuffix) "queue.cpp"

$(IntermediateDirectory)/heapsort.cpp$(ObjectSuffix): heapsort.cpp $(IntermediateDirectory)/heapsort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/heapsort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/heapsort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/heapsort.cpp$(DependSuffix): heapsort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/heapsort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/heapsort.cpp$(DependSuffix) -MM "heapsort.cpp"

$(IntermediateDirectory)/heapsort.cpp$(PreprocessSuffix): heapsort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/heapsort.cpp$(PreprocessSuffix) "heapsort.cpp"

$(IntermediateDirectory)/queue_node.cpp$(ObjectSuffix): queue_node.cpp $(IntermediateDirectory)/queue_node.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/queue_node.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/queue_node.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/queue_node.cpp$(DependSuffix): queue_node.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/queue_node.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/queue_node.cpp$(DependSuffix) -MM "queue_node.cpp"

$(IntermediateDirectory)/queue_node.cpp$(PreprocessSuffix): queue_node.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/queue_node.cpp$(PreprocessSuffix) "queue_node.cpp"

$(IntermediateDirectory)/majorityElement.cpp$(ObjectSuffix): majorityElement.cpp $(IntermediateDirectory)/majorityElement.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/majorityElement.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/majorityElement.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/majorityElement.cpp$(DependSuffix): majorityElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/majorityElement.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/majorityElement.cpp$(DependSuffix) -MM "majorityElement.cpp"

$(IntermediateDirectory)/majorityElement.cpp$(PreprocessSuffix): majorityElement.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/majorityElement.cpp$(PreprocessSuffix) "majorityElement.cpp"

$(IntermediateDirectory)/arrays.cpp$(ObjectSuffix): arrays.cpp $(IntermediateDirectory)/arrays.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/arrays.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arrays.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/arrays.cpp$(DependSuffix): arrays.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/arrays.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/arrays.cpp$(DependSuffix) -MM "arrays.cpp"

$(IntermediateDirectory)/arrays.cpp$(PreprocessSuffix): arrays.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/arrays.cpp$(PreprocessSuffix) "arrays.cpp"

$(IntermediateDirectory)/MergeSort.cpp$(ObjectSuffix): MergeSort.cpp $(IntermediateDirectory)/MergeSort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Ankur/Downloads/data/git_datastructure/dataStructures/MergeSort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MergeSort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MergeSort.cpp$(DependSuffix): MergeSort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MergeSort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MergeSort.cpp$(DependSuffix) -MM "MergeSort.cpp"

$(IntermediateDirectory)/MergeSort.cpp$(PreprocessSuffix): MergeSort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MergeSort.cpp$(PreprocessSuffix) "MergeSort.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) ".build-debug/datastructures"


