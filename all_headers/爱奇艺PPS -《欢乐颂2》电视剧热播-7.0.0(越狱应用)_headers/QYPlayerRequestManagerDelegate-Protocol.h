//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DataLoadManager;

@protocol QYPlayerRequestManagerDelegate <NSObject>

@optional
- (void)paopaoFeedDataManagerFailed:(DataLoadManager *)arg1;
- (void)paopaoFeedDataManagerFinish:(DataLoadManager *)arg1;
- (void)dataManagerCancelByDateType:(int)arg1;
- (void)dataManagerFailByDateType:(int)arg1;
- (void)dataManagerSuccessByDateType:(int)arg1 data:(id)arg2;
@end

