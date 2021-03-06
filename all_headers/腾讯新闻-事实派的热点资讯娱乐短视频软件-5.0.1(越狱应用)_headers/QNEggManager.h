//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QNFullScreenAnimationViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, QNFullScreenAnimationView;

@interface QNEggManager : NSObject <QNFullScreenAnimationViewDelegate>
{
    NSMutableDictionary *_categoryEggsData;
    NSMutableArray *_eggCenterBigImageItems;
    QNFullScreenAnimationView *_fullScreenAnimation;
    NSMutableDictionary *_itemsCountDict;
    NSString *_version;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)openLinkArticleDetailView:(id)arg1;
- (void)fullScreenAnimationFinish;
- (void)showFullScreenAnimationWithCategory:(id)arg1;
- (id)p_getAndCheckCenterBigImageView;
- (id)_getCurrentChannel;
- (id)p_getDropImageViewsForCenterBigImageView;
- (id)p_getAndCheckDropImageViews:(id)arg1;
- (id)p_getDropImageViewsWithFrame:(struct CGRect)arg1 andImage:(id)arg2 scaleWidth:(double)arg3;
- (void)onPullToRefreshViewFinish:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)prepareData;
- (void)requestFinished:(id)arg1;
- (void)loadLastPullConfig;
- (void)refreshVersion:(id)arg1;
- (id)p_keyForItemsCount:(id)arg1;
- (id)p_dateString:(id)arg1;
- (void)writeDataToDisk;
- (void)readDataFromDisk;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

