/* This file is part of COVISE.

You can use it under the terms of the GNU Lesser General Public License
version 2.1 or later, see lgpl-2.1.txt.

* License: LGPL 2+ */

#ifndef OSC_CANCEL_CONDITION_TYPE_B_H
#define OSC_CANCEL_CONDITION_TYPE_B_H

#include "oscExport.h"
#include "oscConditionTypeB.h"
#include "oscObjectVariable.h"


namespace OpenScenario {

/// \class This class represents a generic OpenScenario Object
class OPENSCENARIOEXPORT oscCancelConditionTypeB: public oscConditionTypeB
{
public:
    oscCancelConditionTypeB()
    {

    };

};

typedef oscObjectVariable<oscCancelConditionTypeB *> oscCancelConditionTypeBMember;

}

#endif //OSC_CANCEL_CONDITION_TYPE_B_H
