//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MNRArticleAddFavorite, MNRCancleFavorite;

@interface MNFArticleManager : NSObject
{
    MNRArticleAddFavorite *_requestAddFavorite;
    MNRCancleFavorite *_requestCancleFavorite;
}

@property(retain, nonatomic) MNRCancleFavorite *requestCancleFavorite; // @synthesize requestCancleFavorite=_requestCancleFavorite;
@property(retain, nonatomic) MNRArticleAddFavorite *requestAddFavorite; // @synthesize requestAddFavorite=_requestAddFavorite;
- (void).cxx_destruct;
- (void)cancleFavoriteArticleBlockWithWithArticleID:(id)arg1 Success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addFavoriteArticleBlockWithArticleID:(id)arg1 Success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

