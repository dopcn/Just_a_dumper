//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSNumber;

@interface TBCGroupFriendInviteItem : TBCIMBaseMessageItem
{
    NSNumber *_msgId;
    NSNumber *_recordId;
    NSNumber *_groupId;
}

@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSNumber *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
- (id)init;
- (void)dealloc;

@end

