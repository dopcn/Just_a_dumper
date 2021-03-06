//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, QYPActivityIndicatorView, QYPlayerVideoListCellFlowLayoutPhone, QYUCardDataV3, UICollectionView;

@interface QYPlayerVideoListBaseCellPhone : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _isFirstCell;
    _Bool _hasSentGuessLikeAdBlockShowPingback;
    QYPlayerVideoListCellFlowLayoutPhone *_flowLayout;
    UICollectionView *_collectionView;
    NSArray *_dataSourceArray;
    QYUCardDataV3 *_cardData;
    CDUnknownBlockType _videoItemSelectedBlock;
    CDUnknownBlockType _getEpisodeAdViewBlock;
    CDUnknownBlockType _sendGuessLikeAdBlockShowPingback;
    QYPActivityIndicatorView *_loadingView;
}

@property(nonatomic) _Bool hasSentGuessLikeAdBlockShowPingback; // @synthesize hasSentGuessLikeAdBlockShowPingback=_hasSentGuessLikeAdBlockShowPingback;
@property(retain, nonatomic) QYPActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType sendGuessLikeAdBlockShowPingback; // @synthesize sendGuessLikeAdBlockShowPingback=_sendGuessLikeAdBlockShowPingback;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(copy, nonatomic) CDUnknownBlockType getEpisodeAdViewBlock; // @synthesize getEpisodeAdViewBlock=_getEpisodeAdViewBlock;
@property(copy, nonatomic) CDUnknownBlockType videoItemSelectedBlock; // @synthesize videoItemSelectedBlock=_videoItemSelectedBlock;
@property(nonatomic) __weak QYUCardDataV3 *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) QYPlayerVideoListCellFlowLayoutPhone *flowLayout; // @synthesize flowLayout=_flowLayout;
- (void).cxx_destruct;
- (void)scrollToItemAtIndex:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (_Bool)hasZeroHeightBlockInFirstIndex:(id)arg1;
- (id)checkZeroHeightBlock:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)removeLoadingView;
- (void)showLoadingView;
- (void)createLoadingView;
- (_Bool)handleGuessLikeAdBlockShowPingback:(id)arg1 index:(long long)arg2;
- (void)configItemsForRecommendPingback;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)createCollectionView;
- (void)configSelf;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

