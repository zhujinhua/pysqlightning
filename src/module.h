/* module.h - definitions for the module
 *
 * Copyright (C) 2004 Gerhard H�ring <gh@ghaering.de>
 *
 * This file is part of pysqlite.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef PYSQLITE_MODULE_H
#define PYSQLITE_MODULE_H
#include "Python.h"

/**
 * Exception objects
 */
PyObject* sqlite_Error;
PyObject* sqlite_Warning;
PyObject* sqlite_InterfaceError;
PyObject* sqlite_DatabaseError;
PyObject* sqlite_InternalError;
PyObject* sqlite_OperationalError;
PyObject* sqlite_ProgrammingError;
PyObject* sqlite_IntegrityError;
PyObject* sqlite_DataError;
PyObject* sqlite_NotSupportedError;

/**
 * Type objects
 */
PyObject* sqlite_STRING;
PyObject* sqlite_BINARY;
PyObject* sqlite_NUMBER;
PyObject* sqlite_DATETIME;
PyObject* sqlite_ROWID;
#endif