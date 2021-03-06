//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface XcfUserManager : NSObject
{
    NSMutableArray *_expertUserModels;
    NSMutableArray *_expertUsers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *expertUsers; // @synthesize expertUsers=_expertUsers;
@property(retain, nonatomic) NSMutableArray *expertUserModels; // @synthesize expertUserModels=_expertUserModels;
- (void).cxx_destruct;
- (id)getAllMPUsersWithCursor:(id)arg1 size:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getMPArticlesWithMPId:(id)arg1 coverSize:(struct CGSize)arg2 cursorStr:(id)arg3 size:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)getMPModelWithUserId:(id)arg1 picSize:(double)arg2 successBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)userExpertsByKeyword:(id)arg1;
- (void)requestExpertUsersByLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getHotUsersFromServerByOffset:(unsigned long long)arg1;
- (void)getHotUsersFromServerIfNeeded;
- (void)getUserByUserName:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getUserByUserId:(id)arg1 picSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)lookupByIds:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)followAllFriendsWithProviderName:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getSocialFriendsByProviderName:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 withSuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getTrackableSearchUsersByKeyword:(id)arg1 limit:(unsigned long long)arg2 cursor:(id)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)getSearchUsersByKeyword:(id)arg1 limit:(unsigned long long)arg2 cursor:(id)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getDishDiggedUsersByDishID:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getReviewDiggedUsersByReviewId:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getFollowersInFollowingByUserId:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getFollowerByUserID:(id)arg1 cursor:(id)arg2 size:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getFollowingByUserID:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getTrendsUserWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)init;
- (id)getUserByUserId:(id)arg1 picSize:(unsigned long long)arg2;

@end

