#
# Copyright (c) 2000 Silicon Graphics, Inc.  All Rights Reserved.
#
# This program is free software; you can redistribute it and/or modify it
# under the terms of version 2 of the GNU General Public License as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it would be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#
# Further, this software is distributed without any warranty that it is
# free of the rightful claim of any third person regarding infringement
# or the like.  Any license provided herein, whether implied or
# otherwise, applies only to this software file.  Patent licenses, if
# any, provided herein do not apply to combinations of this program with
# other software, or any other product whatsoever.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write the Free Software Foundation, Inc., 59
# Temple Place - Suite 330, Boston MA 02111-1307, USA.
#
# Contact information: Silicon Graphics, Inc., 1600 Amphitheatre Pkwy,
# Mountain View, CA  94043, or:
#
# http://www.sgi.com
#
# For further information regarding this notice, see:
#
# http://oss.sgi.com/projects/GenInfo/SGIGPLNoticeExplan/
#

TOPDIR = ..
include $(TOPDIR)/include/builddefs

LIBRMT = $(TOPDIR)/librmt/librmt.a

COMMINCL = \
	arch_xlate.h \
	cldmgr.h \
	content.h \
	content_common.h \
	content_inode.h \
	dlog.h \
	drive.h \
	exit.h \
	fs.h \
        getdents.h \
	global.h \
	lock.h \
	media.h \
	mlog.h \
	openutil.h \
	path.h \
	qlock.h \
	ring.h \
	stkchk.h \
	stream.h \
	types.h \
	util.h \
	sproc.h \
	attr.h \
	rec_hdr.h

INVINCL = \
	inventory.h \
	inv_priv.h

INVCOMMON = \
	inv_api.c \
	inv_core.c \
	inv_fstab.c \
	inv_idx.c \
	inv_mgr.c \
	inv_stobj.c

COMMON = \
	arch_xlate.c \
	cldmgr.c \
	content_common.c \
	dlog.c \
	drive.c \
	drive_scsitape.c \
	drive_simple.c \
	drive_minrmt.c \
	fs.c \
	getdents.c \
	global.c \
	lock.c \
	main.c \
	mlog.c \
	openutil.c \
	qlock.c \
	path.c \
	ring.c \
	stkchk.c \
	stream.c \
	util.c \
	sproc.c \
	attr.c

LOCALS = \
	content.c \
	inomap.c \
	var.c

#LOCALS += hsmapi.c
#LOCALINCL += hsmapi.h

LOCALINCL = \
	getopt.h \
	inomap.h \
	var.h

CMDTARGET = xfsdump
CMDDEPS = $(LIBHANDLE) $(LIBATTR)

CFILES = $(COMMON) $(INVCOMMON) $(LOCALS)
HFILES = $(LOCALINCL)
LINKS  = $(COMMINCL) $(COMMON) $(INVINCL) $(INVCOMMON)
LDIRT = $(LINKS)
LLDLIBS = $(LIBHANDLE) $(LIBUUID) $(LIBRMT) $(LIBATTR)

LCFLAGS = -DDUMP -DRMT -DBASED -DDOSOCKS -DINVCONVFIX -DSIZEEST -DPIPEINVFIX -DEXTATTR
#LCFLAGS += -DDMEXTATTR

default: $(LINKS) $(CMDTARGET)

include $(BUILDRULES)

install: default
	$(INSTALL) -m 755 -d $(PKG_BIN_DIR)
	$(INSTALL) -m 755 $(CMDTARGET) $(PKG_BIN_DIR)
install-dev:

$(COMMINCL) $(COMMON):
	@$(RM) $@; $(LN_S) ../common/$@ $@

$(INVINCL) $(INVCOMMON):
	@$(RM) $@; $(LN_S) ../inventory/$@ $@
