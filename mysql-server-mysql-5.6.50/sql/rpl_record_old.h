/* Copyright (c) 2007, 2010, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2.0,
   as published by the Free Software Foundation.

   This program is also distributed with certain software (including
   but not limited to OpenSSL) that is licensed under separate terms,
   as designated in a particular file or component or in included license
   documentation.  The authors of MySQL hereby grant you an additional
   permission to link the program and your derivative works with the
   separately licensed software that they have included with MySQL.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License, version 2.0, for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA */

#ifndef RPL_RECORD_OLD_H
#define RPL_RECORD_OLD_H

#include "log_event.h"                          /* Log_event_type */

#ifndef MYSQL_CLIENT
size_t pack_row_old(TABLE *table, MY_BITMAP const* cols,
                    uchar *row_data, const uchar *record);

#ifdef HAVE_REPLICATION
int unpack_row_old(Relay_log_info *rli,
                   TABLE *table, uint const colcnt, uchar *record,
                   uchar const *row, MY_BITMAP const *cols,
                   uchar const **row_end, ulong *master_reclength,
                   MY_BITMAP* const rw_set,
                   Log_event_type const event_type);
#endif
#endif
#endif
