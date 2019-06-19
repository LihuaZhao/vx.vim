/** \file \brief fooLib.c - foo function library */

/**
* \internal \copyright
*
* Copyright (c) 2019 Wind River Systems, Inc.
*
* The right to copy, distribute, modify, or otherwise make use
* of this software may be licensed only pursuant to the terms
* of an applicable Wind River license agreement.
*/

/**
*
\internal
modification history
--------------------
01oct14,rdl  update coding standard for test file format (VXW7-1299)
15sep97,nfs  added defines MAX_FOOS and MIN_FATS.
15feb96,dnw  added functions fooGet() and fooPut();
             added check for invalid index in fooFind().
10feb84,dnw  written.
*/

/**
* ### Description
* This module is an example of the Wind River Systems C coding conventions.
* ...
*
* ### Include Files 
* fooLib.h
*
* \cond internal
*/ 

/* includes */

#include <vxWorks.h>
#include <fooLib.h>

/* defines */

#define MAX_FOOS	112U  /* max # of foo entries */
#define MIN_FATS	2U	/* min # of FAT copies */


/* typedefs */

typedef struct fooMsg	/* FOO_MSG */
    {
    STATUS (*func)	/* pointer to function to invoke */
        (
        int arg1,
        int arg2
        );

    int arg [FOO_MAX_ARGS]; /* args for function */
    } FOO_MSG;

/* globals */

char *		pGlobalFoo;	/* global foo table */

/* locals */

LOCAL uint_t numFoosLost;	/* count of foos lost */

/* forward declarations */

LOCAL uint_t fooMat (list * aList, int fooBar, BOOL doFoo); 
FOO_MSG	 fooNext (void);
STATUS		 fooPut (FOO_MSG inPar);

/*******************************************************************************/
/**
*
* \brief **fooGet** - get an element from a foo
*
* ### Description
* This function finds the element of a specified index in a specified
* foo. The value of the element found is copied to *pValue*. The value can 
* be gronk or blah value, it is the responsibility of the user to know what
* type is contained in foo. 
*
* \param [in]  foo      a foo structure array -- foo in which to find 
*                       the element                   
* \param [in]  index    a positive integer -- element to be found 
*                       in foo    
* \param [out] * pValue any integer -- where to put value 
*
* \returns 
* OK, or ERROR if the element is not found or the index does not
* exist
*
* ### ERRNO:
*
* * S_fooLib_BLAH
*   The blah element was not found.
*
* * S_fooLib_GRONK
*   The gronk element was not found.
* 
* ### See Also: 
* fooSet(), fooPrint()
*
* \internal
* *fooGlobalLock* - fooGet() takes the fooGlobalLock and may 
*                   cause some latency as a result   
* \endinternal
*/

STATUS fooGet
    (
    FOO     foo,   /* foo in which to find element */
    int     index,	 /* element to be found in foo */
    int *   pValue	 /* where to put value */
    )	
    {	
    ...	
    }	

/**
* \endcond
*/
