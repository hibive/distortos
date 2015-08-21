#
# file: Rules.mk
#
# author: Copyright (C) 2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
#
# This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
# distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
#
# date: 2015-08-21
#

#-----------------------------------------------------------------------------------------------------------------------
# generated headers
#-----------------------------------------------------------------------------------------------------------------------

$(d)/distortosConfiguration.h: ./$(subst ",,$(CONFIG_SELECTED_CONFIGURATION))/distortosConfiguration.mk
	./scripts/makeDistortosConfiguration.awk $< > $@

#-----------------------------------------------------------------------------------------------------------------------
# generated headers depend on this Rules.mk and the script that generates them
#-----------------------------------------------------------------------------------------------------------------------

$(d)/distortosConfiguration.h: $(d)/Rules.mk scripts/makeDistortosConfiguration.awk

#-----------------------------------------------------------------------------------------------------------------------
# add generated headers to list of generated files
#-----------------------------------------------------------------------------------------------------------------------

GENERATED := $(GENERATED) $(d)/distortosConfiguration.h
