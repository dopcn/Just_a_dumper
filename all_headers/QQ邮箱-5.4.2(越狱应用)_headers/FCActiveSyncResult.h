//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FCActiveSyncFolderSyncResult, FCActiveSyncMeetingResponseResult, FCActiveSyncSyncResult, NSMutableArray, NSString;

@interface FCActiveSyncResult : NSObject
{
    _Bool _updateAccount;
    int _code;
    int _authCode;
    NSString *_policyKey;
    NSString *_protocolVersion;
    NSString *_serverAddress;
    NSMutableArray *_supportedVersions;
    NSMutableArray *_supportedCommands;
    NSMutableArray *_allowMethods;
    FCActiveSyncFolderSyncResult *_foldersyncResult;
    FCActiveSyncSyncResult *_syncResult;
    FCActiveSyncMeetingResponseResult *_meetingResponseResult;
}

@property(retain, nonatomic) FCActiveSyncMeetingResponseResult *meetingResponseResult; // @synthesize meetingResponseResult=_meetingResponseResult;
@property(retain, nonatomic) FCActiveSyncSyncResult *syncResult; // @synthesize syncResult=_syncResult;
@property(retain, nonatomic) FCActiveSyncFolderSyncResult *foldersyncResult; // @synthesize foldersyncResult=_foldersyncResult;
@property(retain, nonatomic) NSMutableArray *allowMethods; // @synthesize allowMethods=_allowMethods;
@property(retain, nonatomic) NSMutableArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(retain, nonatomic) NSMutableArray *supportedVersions; // @synthesize supportedVersions=_supportedVersions;
@property(nonatomic) _Bool updateAccount; // @synthesize updateAccount=_updateAccount;
@property(retain, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *policyKey; // @synthesize policyKey=_policyKey;
@property(nonatomic) int authCode; // @synthesize authCode=_authCode;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

