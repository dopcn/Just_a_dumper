//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BDSocialShareUserVector : NSObject
{
    NSMutableDictionary *_userList;
}

+ (void)destroyUserVector;
+ (id)defaultUserVector;
@property(retain, nonatomic) NSMutableDictionary *userList; // @synthesize userList=_userList;
- (void)dealloc;
- (id)getUserInfoWithMediaType:(id)arg1;
- (void)clearUserInfoStoreWithMediaType:(id)arg1;
- (void)updateUserInfo:(id)arg1 mediaType:(id)arg2;
- (void)initUserList;
- (id)init;

@end

