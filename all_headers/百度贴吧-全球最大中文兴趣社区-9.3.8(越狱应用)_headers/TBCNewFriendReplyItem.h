//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSString;

@interface TBCNewFriendReplyItem : TBCBaseItem
{
    NSString *_userID;
    NSString *_friendID;
    NSString *_message;
    NSString *_time;
}

@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *friendID; // @synthesize friendID=_friendID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)dealloc;
- (id)init;

@end

