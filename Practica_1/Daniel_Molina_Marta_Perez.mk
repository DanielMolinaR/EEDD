##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Daniel_Molina_Marta_Perez
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab"
ProjectPath            :="C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Daniel
Date                   :=17/12/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Daniel_Molina_Marta_Perez.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Evaluacion.cpp$(ObjectSuffix) $(IntermediateDirectory)/ArbolBusqueda.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix): Nodo.cpp $(IntermediateDirectory)/Nodo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/Nodo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Nodo.cpp$(DependSuffix): Nodo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Nodo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Nodo.cpp$(DependSuffix) -MM Nodo.cpp

$(IntermediateDirectory)/Nodo.cpp$(PreprocessSuffix): Nodo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Nodo.cpp$(PreprocessSuffix) Nodo.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp $(IntermediateDirectory)/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pila.cpp$(DependSuffix) -MM Pila.cpp

$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/Evaluacion.cpp$(ObjectSuffix): Evaluacion.cpp $(IntermediateDirectory)/Evaluacion.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/Evaluacion.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Evaluacion.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Evaluacion.cpp$(DependSuffix): Evaluacion.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Evaluacion.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Evaluacion.cpp$(DependSuffix) -MM Evaluacion.cpp

$(IntermediateDirectory)/Evaluacion.cpp$(PreprocessSuffix): Evaluacion.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Evaluacion.cpp$(PreprocessSuffix) Evaluacion.cpp

$(IntermediateDirectory)/ArbolBusqueda.cpp$(ObjectSuffix): ArbolBusqueda.cpp $(IntermediateDirectory)/ArbolBusqueda.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/ArbolBusqueda.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ArbolBusqueda.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ArbolBusqueda.cpp$(DependSuffix): ArbolBusqueda.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ArbolBusqueda.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ArbolBusqueda.cpp$(DependSuffix) -MM ArbolBusqueda.cpp

$(IntermediateDirectory)/ArbolBusqueda.cpp$(PreprocessSuffix): ArbolBusqueda.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ArbolBusqueda.cpp$(PreprocessSuffix) ArbolBusqueda.cpp

$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix): Arbol.cpp $(IntermediateDirectory)/Arbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arbol.cpp$(DependSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arbol.cpp$(DependSuffix) -MM Arbol.cpp

$(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp $(IntermediateDirectory)/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

$(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix): Cola.cpp $(IntermediateDirectory)/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Daniel/Documents/Universidad/III cuatrimestre/Estructura de datos/laboratorio/Ejercicios/Practica_Lab/Daniel_Molina_Marta_Perez/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cola.cpp$(DependSuffix) -MM Cola.cpp

$(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cola.cpp$(PreprocessSuffix) Cola.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


