//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface YYAccompanimentModel : NSObject
{
    NSMutableArray *_myMusicArray;
}

- (void).cxx_destruct;
- (_Bool)checkMusicInfoPlayStatus:(id)arg1;
- (id)queryMyMusicInfoWithID:(id)arg1;
- (void)checkMusicInfoListStatus:(id)arg1;
- (void)downloadFileWithInfo:(id)arg1;
- (void)deleteMyMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addLocalMusicToMyMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isLocalHasAddToMyMusic:(id)arg1;
- (void)loadMyMusicListWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestSearchKey:(id)arg1 page:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestHotRecommendListWithPage:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

