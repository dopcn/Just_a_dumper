//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KugouUploadLocalSongAction : UserActionRecord
{
    int _userActionID;
    unsigned long long _errorCode;
    NSString *_functionName;
    NSString *_fileName;
    NSString *_songHash;
    unsigned long long _songQuality;
}

@property(nonatomic) unsigned long long songQuality; // @synthesize songQuality=_songQuality;
@property(copy, nonatomic) NSString *songHash; // @synthesize songHash=_songHash;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int userActionID; // @synthesize userActionID=_userActionID;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
- (void)coding;
- (void)dealloc;

@end

