/**
 *
 * $Id: misc.h,v 1.1 2004/08/28 19:22:35 dannybackx Exp $
 *
 * Copyright (C) 1995 Free Software Foundation, Inc.
 * Copyright (C) 1995-2001 LessTif Development Team
 *
 * This file is part of the GNU LessTif Library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 *  Original author:  Geoffrey W. Ritchey
 *                    codesmit@southwind.net
 *
*/ 


#ifndef _MISC_H
#define _MISC_H

#define MAX_STACK 20

extern int __MrmStackPointer;
extern char *__MrmStack[MAX_STACK];

void __MrmExit(int, char *, const char *, ...);
void __MrmWarn(int, char *, const char *, ...);

char *__MrmPop(void);
void __MrmPush(char *s);
char *__MrmStore(char *s);

#define LOC __LINE__,__FILE__

#endif /* _MISC_H */
