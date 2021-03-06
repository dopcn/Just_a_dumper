//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseManage.h"

@class NSMutableArray, NSString;

@interface MBoxFileShareManage : BaseManage
{
    _Bool _finishShareFileDiff;
    NSString *_toUK;
    NSString *_cursor;
    NSMutableArray *_shareFiles;
    NSMutableArray *_tmpGroupFileModels;
    unsigned long long _fileDiffRequestID;
}

+ (id)convertGroupRequestModel:(id)arg1;
+ (id)convertRequestModel:(id)arg1;
+ (void)initialize;
+ (id)sharedMBoxFileShareManage;
@property(nonatomic) unsigned long long fileDiffRequestID; // @synthesize fileDiffRequestID=_fileDiffRequestID;
@property(retain, nonatomic) NSMutableArray *tmpGroupFileModels; // @synthesize tmpGroupFileModels=_tmpGroupFileModels;
@property(retain, nonatomic) NSMutableArray *shareFiles; // @synthesize shareFiles=_shareFiles;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) NSString *toUK; // @synthesize toUK=_toUK;
@property(nonatomic) _Bool finishShareFileDiff; // @synthesize finishShareFileDiff=_finishShareFileDiff;
- (void).cxx_destruct;
- (id)selectFileByKindFileWithType:(long long)arg1 to_id:(id)arg2 to_uk:(id)arg3 file_type:(long long)arg4;
- (id)selectFileByKindWithTypeSource:(id)arg1 toId:(id)arg2;
- (id)getfileListDoubleDBWithFromUk:(id)arg1;
- (id)getFilelistWithLocalDBWithToUk:(id)arg1 to_id:(id)arg2 type:(long long)arg3;
- (id)getFilelistDoubleWithLocalDBWithToUK:(id)arg1 month:(id)arg2;
- (id)getFilelistWithLocalDBWithTo_id:(id)arg1 month:(id)arg2 type:(long long)arg3;
- (id)convertGroupFileModel:(id)arg1;
- (id)convertFileModel:(id)arg1;
- (_Bool)deleteFileArrayWithMsgID:(id)arg1 inGroup:(id)arg2;
- (_Bool)deleteShareFileWithUK:(id)arg1 msgId:(id)arg2;
- (id)convertGroupFileModels:(id)arg1;
- (id)convertFileModels:(id)arg1;
- (_Bool)removeShareFilesWithMsgIDs:(id)arg1;
- (unsigned long long)getMBoxShareFileListWithFromUK:(id)arg1 msgID:(id)arg2 toUK:(id)arg3 uname:(id)arg4 avatarUrl:(id)arg5 msgTime:(id)arg6 page:(long long)arg7 size:(long long)arg8 needMedia:(long long)arg9 callback:(id)arg10;
- (id)myShareFileArrayWithToUK:(id)arg1 myUK:(id)arg2 withStart:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)shareFileArrayWithToUK:(id)arg1 withStart:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (id)getShareInfoFileListFromRequestModel:(id)arg1;
- (id)getFileListFromRequestModel:(id)arg1;
- (id)getGroupFileListFromRequestModel:(id)arg1;
- (id)getMBoxAllGroupFileListWithMsgID:(id)arg1 inGroup:(id)arg2;
- (id)getMBoxGroupFileListWithMsgID:(id)arg1 inGroup:(id)arg2;
- (id)getMBoxMyGroupFileShareFromLocalDBWithGid:(id)arg1;
- (id)getMBoxGroupFileShareFromLocalDBWithGid:(id)arg1;
- (unsigned long long)getMboxGroupFileListWithGid:(id)arg1 msgID:(id)arg2 page:(long long)arg3 shareUK:(id)arg4 avatarUrl:(id)arg5 userName:(id)arg6 msgTime:(id)arg7 callback:(id)arg8;
- (long long)getMBoxGroupFileShareListWithGid:(id)arg1 limit:(long long)arg2 type:(long long)arg3 fromUK:(id)arg4 desc:(long long)arg5 lastMsgTime:(id)arg6 callback:(id)arg7;
- (unsigned long long)cancelMBoxGroupFileMsgWithGid:(id)arg1 msgList:(id)arg2 Type:(long long)arg3 fromUK:(id)arg4 callback:(id)arg5;
- (unsigned long long)cancelMBoxFileMsgWithUser:(id)arg1 opType:(long long)arg2 msgsList:(id)arg3 callback:(id)arg4;
- (unsigned long long)transferMBoxFileList:(id)arg1 toPath:(id)arg2 callback:(id)arg3;
- (unsigned long long)deleteMBoxMessageShareWithMsgIds:(id)arg1 msgType:(unsigned long long)arg2 userType:(unsigned long long)arg3 callback:(id)arg4;
- (_Bool)addShareFileArray:(id)arg1;
- (id)getMBoxAllFileShareFromLocalDBWithUK:(id)arg1 msgID:(id)arg2;
- (id)getMBoxFileShareFromLocalDBWithUK:(id)arg1 msgID:(id)arg2;
- (id)getMBoxMyFileShareFromLocalDBWithUK:(id)arg1;
- (id)getMBoxFileShareFromLocalDBWithUK:(id)arg1;
- (unsigned long long)mboxFileShareWithFromUK:(id)arg1 msgID:(id)arg2 toUK:(id)arg3 page:(unsigned long long)arg4 fid:(unsigned long long)arg5 type:(unsigned long long)arg6 gid:(id)arg7 num:(unsigned long long)arg8 needMedia:(id)arg9 callback:(id)arg10;
- (unsigned long long)getMBoxFileShareDiffWithCursor:(id)arg1 toUK:(id)arg2 callback:(id)arg3;
- (void)loginNotification:(id)arg1;
- (void)logoutNotification:(id)arg1;
- (void)addNotification;

@end

