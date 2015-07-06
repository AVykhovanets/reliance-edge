/*  THIS FILE WAS GENERATED BY THE DATALIGHT RELIANCE EDGE CONFIGURATION
    UTILITY.  DO NOT MODIFY.
*/
/** @file
*/
#ifndef REDCONF_H
#define REDCONF_H


#include <string.h>

#define REDCONF_READ_ONLY 0

#define REDCONF_API_POSIX 0

#define REDCONF_API_FSE 1

#define REDCONF_API_POSIX_FORMAT 0

#define REDCONF_API_POSIX_LINK 0

#define REDCONF_API_POSIX_UNLINK 0

#define REDCONF_API_POSIX_MKDIR 0

#define REDCONF_API_POSIX_RMDIR 0

#define REDCONF_API_POSIX_RENAME 0

#define REDCONF_RENAME_ATOMIC 0

#define REDCONF_API_POSIX_FTRUNCATE 0

#define REDCONF_API_POSIX_READDIR 0

#define REDCONF_NAME_MAX 12U

#define REDCONF_PATH_SEPARATOR '/'

#define REDCONF_TASK_COUNT 10U

#define REDCONF_HANDLE_COUNT 10U

#define REDCONF_API_FSE_FORMAT 0

#define REDCONF_API_FSE_TRUNCATE 1

#define REDCONF_API_FSE_TRANSMASKGET 1

#define REDCONF_API_FSE_TRANSMASKSET 1

#define REDCONF_OUTPUT 1

#define REDCONF_ASSERTS 1

#define REDCONF_BLOCK_SIZE 512U

#define REDCONF_VOLUME_COUNT 1U

#define REDCONF_ENDIAN_BIG 0

#define REDCONF_ALIGNMENT_SIZE 4U

#define REDCONF_CRC_ALGORITHM CRC_SLICEBY8

#define REDCONF_INODE_BLOCKS 0

#define REDCONF_INODE_TIMESTAMPS 0

#define REDCONF_ATIME 0

#define REDCONF_DIRECT_POINTERS 4U

#define REDCONF_INDIRECT_POINTERS 32U

#define REDCONF_BUFFER_COUNT 8U

#define RedMemCpyUnchecked memcpy

#define RedMemMoveUnchecked memmove

#define RedMemSetUnchecked memset

#define RedMemCmpUnchecked memcmp

#define RedStrLenUnchecked strlen

#define RedStrCmpUnchecked strcmp

#define RedStrNCmpUnchecked strncmp

#define RedStrNCpyUnchecked strncpy

#define REDCONF_TRANSACT_DEFAULT (( RED_TRANSACT_VOLFULL | RED_TRANSACT_UMOUNT ) & RED_TRANSACT_MASK)

#define REDCONF_IMAP_INLINE 0

#define REDCONF_IMAP_EXTERNAL 1

#define REDCONF_IMAGE_BUILDER 0

#define REDCONF_CHECKER 0

#endif
