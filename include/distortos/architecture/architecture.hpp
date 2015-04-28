/**
 * \file
 * \brief Architecture specific symbols
 *
 * \author Copyright (C) 2014-2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-04-28
 */

#ifndef INCLUDE_DISTORTOS_ARCHITECTURE_ARCHITECTURE_HPP_
#define INCLUDE_DISTORTOS_ARCHITECTURE_ARCHITECTURE_HPP_

namespace distortos
{

/// architecture namespace has symbols that need to be provided by selected architecture
namespace architecture
{

/**
 * \brief Architecture-specific request for context switch.
 *
 * Causes the architecture to do context save, call scheduler::getScheduler().switchContext() and do context restore.
 * The call to scheduler::getScheduler().switchContext() must be done from the context in which such call is valid
 * (usually system interrupt).
 */

void requestContextSwitch();

/**
 * \brief Architecture-specific start of scheduling.
 *
 * Initializes all required hardware/software to perform context switching and starts the scheduling.
 */

void startScheduling();

}	// namespace architecture

}	// namespace distortos

#endif	// INCLUDE_DISTORTOS_ARCHITECTURE_ARCHITECTURE_HPP_
