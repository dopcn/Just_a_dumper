//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCIMBaseMessageItem.h"

@class NSString;

@interface TBCDynamicBarOrgMemberInfoItem : TBCIMBaseMessageItem
{
    NSString *_roleName;
    NSString *_forumId;
    NSString *_portrait;
    NSString *_userID;
    NSString *_userName;
    NSString *_userLevel;
    NSString *_roleID;
    NSString *_LevelName;
}

@property(retain, nonatomic) NSString *LevelName; // @synthesize LevelName=_LevelName;
@property(retain, nonatomic) NSString *roleID; // @synthesize roleID=_roleID;
@property(retain, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *portrait; // @synthesize portrait=_portrait;
@property(retain, nonatomic) NSString *forumId; // @synthesize forumId=_forumId;
@property(retain, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
- (void).cxx_destruct;
- (id)uSmallPhotoURL;
- (id)uPhotoURL;
- (id)init;

@end

