/*
 * Copyright (c) 2000 Silicon Graphics, Inc.  All Rights Reserved.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * 
 * Further, this software is distributed without any warranty that it is
 * free of the rightful claim of any third person regarding infringement
 * or the like.  Any license provided herein, whether implied or
 * otherwise, applies only to this software file.  Patent licenses, if
 * any, provided herein do not apply to combinations of this program with
 * other software, or any other product whatsoever.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write the Free Software Foundation, Inc., 59
 * Temple Place - Suite 330, Boston MA 02111-1307, USA.
 * 
 * Contact information: Silicon Graphics, Inc., 1600 Amphitheatre Pkwy,
 * Mountain View, CA  94043, or:
 * 
 * http://www.sgi.com 
 * 
 * For further information regarding this notice, see: 
 * 
 * http://oss.sgi.com/projects/GenInfo/SGIGPLNoticeExplan/
 */
#ifndef __XFS_H__
#define __XFS_H__


#include <xfs_support/support.h>
#include <xfs_types.h>
#include <xfs_arch.h>

#include <winnt/xfs_winnt.h>

#include <xinc/xfs_fs.h>
#include <sys/stat.h>
#include <winnt/xfs_cred.h>
#include <sys/buf.h>
#include <sys/file.h>
#include <sys/conf.h>
#include <sys/dirent.h>
#include <xinc/attributes.h>
#include <xinc/acl.h>

#include <xfs_buf.h>
#include <xinc/xqm.h>
#include <winnt/xfs_globals.h>
#include <winnt/xfs_behavior.h>
#include <winnt/xfs_vfs.h>
#include <winnt/xfs_vnode.h>
#include <winnt/xfs_fs_subr.h>

#include <xinc/dmapi.h>
#include <xinc/dmapi_kern.h>

#include <xfs_macros.h>
#include <xfs_inum.h>
#include <xfs_log.h>
#include <xfs_cxfs.h>
#include <xfs_clnt.h>

#include <xfs_trans.h>
#include <xfs_sb.h>
#include <xfs_ag.h>
#include <xfs_dir.h>
#include <xfs_dir2.h>
#include <xfs_imap.h>
#include <xfs_mount.h>
#include <xfs_alloc_btree.h>
#include <xfs_bmap_btree.h>
#include <xfs_ialloc_btree.h>
#include <xfs_btree.h>
#include <xfs_ialloc.h>
#include <xfs_attr_sf.h>
#include <xfs_dir_sf.h>
#include <xfs_dir2_sf.h>
#include <xfs_dinode.h>
#include <xfs_inode.h>
#include <xfs_alloc.h>
#include <xfs_bmap.h>
#include <xfs_bit.h>
#include <xfs_rtalloc.h>
#include <xfs_error.h>
#include <xfs_quota.h>
#include <xfs_itable.h>
#include <xfs_dqblk.h>
#include <xfs_dquot_item.h>
#include <xfs_dquot.h>
#include <xfs_qm.h>
#include <xfs_rw.h>
#include <xfs_da_btree.h>
#include <xfs_dir_leaf.h>
#include <xfs_dir2_data.h>
#include <xfs_dir2_leaf.h>
#include <xfs_dir2_block.h>
#include <xfs_dir2_node.h>
#include <xfs_dir2_trace.h>
#include <xfs_acl.h>
#include <xfs_attr.h>
#include <xfs_attr_leaf.h>
#include <xfs_inode_item.h>
#include <xfs_buf_item.h>
#include <xfs_extfree_item.h>
#include <xfs_log_priv.h>
#include <xfs_trans_priv.h>
#include <xfs_trans_space.h>
#include <xfs_utils.h>
#include <xfs_dmapi.h>
#include <xfs_grio.h>

#include <winnt/xfs_ntrw.h>
#include <sys/namei.h>
#if 0
#include <linux/xfs_super.h>
#endif

#endif	/* __XFS_H__ */
