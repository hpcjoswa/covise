##########################################################
## Description: Makefile Template for COVISE modules    ##
## (C) 1995 Computer Center University of Stuttgart     ##
##            Allmandring 30  70550 Stuttgart           ##  
## Author: Uwe Woessner, Andreas Wierse  Date: 29.08.97 ##
##########################################################

                          # name of the module executable
APPLICATION 	= ReadAbaqus
                          # name of the module category
CATEGORY	      = IO
                          # needed for creating distribution tar-files
PROJECT		   = General


# $(APPLICATION) is also the name of the main source and include file!!!)

##########################################################

# modify this for your own path if necessary
# COVISEDIR = ../../../..

# All common UNIX compiler flags and options are in
# this central makefile.

include $(COVISEDIR)/src/make.env.$(ARCHSUFFIX)

# if you want to modify settings of variables that are set in the
# central makefile, do this here:


# All common rules are in this central makefile.

include $(COVISEDIR)/src/make.rules

############### link rule for application module #########
# can be modified (e.g. for dependencies or libraries)
##########################################################

$(PLATFORM)/bin/$(CATEGORY)/$(APPLICATION): $(OBJDIR)/$(APPLICATION).o $(OBJECTS)
	  $(CC) $(CPPFLAGS) -o $@ $(OBJECTS) $(OBJDIR)/$(APPLICATION).o \
	  $(COVISE_LIBDIR) $(COVISEAPI) $(APPLLIB) $(COVISELIB)

############### general object rule ######################
# can be modified (e.g. for dependencies)
##########################################################

$(OBJDIR)/$(APPLICATION).o: $(APPLICATION).cpp $(APPLICATION).h
	$(CC) $(CPPFLAGS) -c $(APPLICATION).cpp -o $(OBJDIR)/$(APPLICATION).o
	$(POSTCC)

############### module specific rules ####################
# rules for objects in $(OBJECTS)
##########################################################

# DO NOT DELETE

$(OBJDIR)/ReadAbaqus.o: ReadAbaqus.h $(COVISEDIR)/src/covise_api/coModule.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/appl_lib/ApplInterface.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/appl_lib/Arrayset.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coBooleanParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coUifPara.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coPort.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coUifElem.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coBrowserParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coChoiceParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coFloatScalarParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coFloatSliderParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coFloatVectorParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coIntScalarParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coIntSliderParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coIntVectorParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coStringParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coTimerParam.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coInPort.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coUifPort.h
$(OBJDIR)/ReadAbaqus.o: $(COVISEDIR)/src/covise_api/coOutPort.h
