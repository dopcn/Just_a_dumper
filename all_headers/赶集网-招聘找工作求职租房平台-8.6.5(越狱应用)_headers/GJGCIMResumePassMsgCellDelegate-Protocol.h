//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GJGCIMResumePassMsgCell, NSString;

@protocol GJGCIMResumePassMsgCellDelegate <NSObject>
- (void)passMsgCell:(GJGCIMResumePassMsgCell *)arg1 gotoPositionDetialWithPuid:(NSString *)arg2 categoryId:(NSString *)arg3 subcategoryId:(NSString *)arg4;
- (void)passMsgCell:(GJGCIMResumePassMsgCell *)arg1 gotoResumeDetailWithPuid:(NSString *)arg2;
- (void)passMsgCell:(GJGCIMResumePassMsgCell *)arg1 gotoUserInformationWithUserId:(NSString *)arg2;
@end

