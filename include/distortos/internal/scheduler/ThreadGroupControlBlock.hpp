/**
 * \file
 * \brief ThreadGroupControlBlock class header
 *
 * \author Copyright (C) 2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-12-05
 */

#ifndef INCLUDE_DISTORTOS_INTERNAL_SCHEDULER_THREADGROUPCONTROLBLOCK_HPP_
#define INCLUDE_DISTORTOS_INTERNAL_SCHEDULER_THREADGROUPCONTROLBLOCK_HPP_

#include "distortos/internal/scheduler/ThreadControlBlockListNode.hpp"

namespace distortos
{

namespace internal
{

class ThreadControlBlock;

/// ThreadGroupControlBlock class is a control block for ThreadGroup
class ThreadGroupControlBlock
{
public:

	/**
	 * \brief ThreadGroupControlBlock's constructor
	 */

	ThreadGroupControlBlock();

	/**
	 * \brief Adds new ThreadControlBlock to internal list of this object.
	 *
	 * \param [in] threadControlBlock is a reference to added ThreadControlBlock object
	 */

	void add(ThreadControlBlock& threadControlBlock);

private:

	/// intrusive list of thread control blocks
	using List = estd::IntrusiveList<ThreadControlBlockListNode, &ThreadControlBlockListNode::threadGroupNode,
			ThreadControlBlock>;

	/// list of ThreadControlBlock elements in this group
	List threadControlBlockList_;
};

}	// namespace internal

}	// namespace distortos

#endif	// INCLUDE_DISTORTOS_INTERNAL_SCHEDULER_THREADGROUPCONTROLBLOCK_HPP_
