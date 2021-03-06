//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDCBaseDAO.h"

@interface MboxFileShareDAO : BDCBaseDAO
{
}

+ (id)allMsgKindFileWithUK:(id)arg1 msgIDArray:(id)arg2;
+ (id)selectFileWithFromUk:(id)arg1;
+ (id)selectFileWithToUK:(id)arg1 month:(id)arg2;
+ (long long)fileShareCountWithUK:(id)arg1 isToUser:(_Bool)arg2 msgID:(id)arg3;
+ (id)imageFileListWithUK:(id)arg1 msgID:(id)arg2 isToUser:(_Bool)arg3 imageCountLimit:(long long)arg4;
+ (id)myShareFileArrayWithToUK:(id)arg1 myUK:(id)arg2 withStart:(unsigned long long)arg3 limit:(unsigned long long)arg4;
+ (id)myShareFileArrayWithToUK:(id)arg1 myUK:(id)arg2;
+ (id)shareFileArrayWithToUK:(id)arg1;
+ (id)shareFileArrayWithToUK:(id)arg1 withStart:(unsigned long long)arg2 limit:(unsigned long long)arg3;
+ (id)shareFileMessageWithToUK:(id)arg1;
+ (id)shareFileArrayWithFromUK:(id)arg1 msgId:(id)arg2 start:(unsigned long long)arg3 count:(unsigned long long)arg4;
+ (id)shareFileArrayWithToUK:(id)arg1 msgId:(id)arg2 start:(unsigned long long)arg3 count:(unsigned long long)arg4;
+ (id)shareFileArrayWithFromUK:(id)arg1 msgId:(id)arg2;
+ (id)shareAllFileArrayWithToUK:(id)arg1 msgId:(id)arg2;
+ (id)shareFileArrayWithToUK:(id)arg1 msgId:(id)arg2;
+ (_Bool)removeShareFilesWithMsgIDs:(id)arg1;
+ (_Bool)deleteShareFilesWithMsgIDArray:(id)arg1;
+ (_Bool)deleteShareFileWithUK:(id)arg1 msgId:(id)arg2 fid:(id)arg3;
+ (_Bool)deleteShareFileWithUK:(id)arg1 msgId:(id)arg2;
+ (id)exsitedShareFileListInLocalDB:(id)arg1 msgID:(id)arg2 fromUK:(id)arg3 toUK:(id)arg4;
+ (_Bool)updateShareListFileDetailInfo:(id)arg1 msgID:(id)arg2 fromUK:(id)arg3 toUK:(id)arg4;
+ (_Bool)updateShareFileInfo:(id)arg1 withFileModel:(id)arg2;
+ (_Bool)updateShareFile:(id)arg1 withNewMessageID:(id)arg2 withFileStatus:(int)arg3 msgTime:(id)arg4;
+ (_Bool)addOneShareMessageArray:(id)arg1;
+ (_Bool)addOneShareMessage:(id)arg1;
+ (_Bool)addShareFileArray:(id)arg1;
+ (_Bool)addOneShareFileWithModel:(id)arg1;
+ (id)sqlOfCreateTable;
+ (id)convertResultModel:(id)arg1;

@end

