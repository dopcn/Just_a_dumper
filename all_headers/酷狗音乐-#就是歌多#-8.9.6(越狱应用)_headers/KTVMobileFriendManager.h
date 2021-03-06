//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FollowModleTask, FollowTableHttpDao, NSMutableArray, NSMutableDictionary;

@interface KTVMobileFriendManager : NSObject
{
    NSMutableDictionary *_contactFriendsMap;
    NSMutableArray *_fellows;
    FollowTableHttpDao *_fthDao;
    FollowModleTask *_followModleTask;
    CDUnknownBlockType _fellowsUpdateCompleteBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType fellowsUpdateCompleteBlock; // @synthesize fellowsUpdateCompleteBlock=_fellowsUpdateCompleteBlock;
@property(retain, nonatomic) FollowModleTask *followModleTask; // @synthesize followModleTask=_followModleTask;
@property(retain, nonatomic) FollowTableHttpDao *fthDao; // @synthesize fthDao=_fthDao;
@property(retain, nonatomic) NSMutableArray *fellows; // @synthesize fellows=_fellows;
@property(retain, nonatomic) NSMutableDictionary *contactFriendsMap; // @synthesize contactFriendsMap=_contactFriendsMap;
- (void).cxx_destruct;
- (void)p_loadNewDataWithTask:(id)arg1;
- (void)updateFellows:(CDUnknownBlockType)arg1;
- (_Bool)isFellowRelastionToUser:(long long)arg1;
- (_Bool)validateDataSource:(id)arg1;
- (void)loadLocalDataWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)takeTheContactFreind:(CDUnknownBlockType)arg1;

@end

