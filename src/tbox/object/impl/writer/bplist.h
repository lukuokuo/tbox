/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2017, ruki All rights reserved.
 *
 * @author      ruki
 * @file        bplist.h
 * @ingroup     object
 *
 */
#ifndef TB_OBJECT_IMPL_WRITER_BPLIST_H
#define TB_OBJECT_IMPL_WRITER_BPLIST_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_enter__

/* //////////////////////////////////////////////////////////////////////////////////////
 * types
 */

/// the object bplist writer type
typedef struct __tb_oc_bplist_writer_t
{
    /// the stream
    tb_stream_ref_t              stream;

}tb_oc_bplist_writer_t;

/// the bplist writer func type
typedef tb_bool_t               (*tb_oc_bplist_writer_func_t)(tb_oc_bplist_writer_t* writer, tb_oc_object_ref_t object, tb_size_t item_size);

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! the bplist object writer
 *
 * @return                      the bplist object writer
 */
tb_oc_writer_t*                 tb_oc_bplist_writer(tb_noarg_t);

/*! hook the bplist writer
 *
 * @param type                  the object type 
 * @param func                  the writer func
 *
 * @return                      tb_true or tb_false
 */
tb_bool_t                       tb_oc_bplist_writer_hook(tb_size_t type, tb_oc_bplist_writer_func_t func);

/*! the bplist writer func
 *
 * @param type                  the object type 
 *
 * @return                      the object writer func
 */
tb_oc_bplist_writer_func_t  tb_oc_bplist_writer_func(tb_size_t type);

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_leave__

#endif

