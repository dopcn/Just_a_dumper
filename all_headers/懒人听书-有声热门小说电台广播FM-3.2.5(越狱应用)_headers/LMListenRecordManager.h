//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LMListenRecordManager : NSObject
{
}

+ (id)shareListenRecordManager;
- (id)getUserPlayHistoryListFromLocalWithRecordCount:(long long)arg1;
- (void)syncUserPlayHistory:(CDUnknownBlockType)arg1;
- (void)saveUserServerPlayHistoryToLocal:(CDUnknownBlockType)arg1;
- (id)getPlayHistoryWithEntityId:(long long)arg1 entityType:(long long)arg2;
- (_Bool)checkPlayAudioIsFromLocal:(long long)arg1 entityType:(long long)arg2 audioId:(long long)arg3;
- (_Bool)deleteHistoryWithEntityId:(long long)arg1 entityType:(long long)arg2;

@end

