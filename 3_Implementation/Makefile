



# Name of the project
PROJECT_NAME = Scientific_Calculator

# All source code files
SRC = main.c\
src/basicoperations.c\
src/trignooperations.c\
src/allotheroperations.c\


TEST_SRC = src/basicoperations.c\
src/trignooperations.c\
src/allotheroperations.c\
unity/unity.c\
test/test_operations.c


#TargetName : Dependencies
#<TAB>commands
# Path to header files
INC_HEADER = inc
INC_TEST = unity

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)
all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:
	
	$(RM) *.$(EXEC)
