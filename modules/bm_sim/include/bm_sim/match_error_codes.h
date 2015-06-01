#ifndef _BM_MATCH_ERROR_CODES_H_
#define _BM_MATCH_ERROR_CODES_H_

enum class MatchErrorCode {
  SUCCESS = 0,
  TABLE_FULL,
  INVALID_HANDLE,
  COUNTERS_DISABLED,
  WRONG_TABLE_TYPE,
  INVALID_MBR_HANDLE,
  MBR_STILL_USED,
  MBR_ALREADY_IN_GRP,
  MBR_NOT_IN_GRP,
  INVALID_GRP_HANDLE,
  GRP_STILL_USED,
  ERROR,
};

#endif