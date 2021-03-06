//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSString, QYCardData, UICollectionView;

@interface QYPlayerVideoListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    long long _playingSection;
    long long _playingIndex;
    int _dockFromType;
    _Bool _endDragVelocity;
    int _location;
    UICollectionView *_collectionView;
    CDUnknownBlockType _videoItemSelectedBlock;
    CDUnknownBlockType _visibleListCellChangedBlock;
    CDUnknownBlockType _sendScrollPingbackBlock;
    CDUnknownBlockType _getEpisodeAdViewBlock;
    QYCardData *_cardData;
    NSArray *_dataSourceArray;
    NSDictionary *_playingIdDic;
}

@property(retain, nonatomic) NSDictionary *playingIdDic; // @synthesize playingIdDic=_playingIdDic;
@property(retain, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) QYCardData *cardData; // @synthesize cardData=_cardData;
@property(copy, nonatomic) CDUnknownBlockType getEpisodeAdViewBlock; // @synthesize getEpisodeAdViewBlock=_getEpisodeAdViewBlock;
@property(copy, nonatomic) CDUnknownBlockType sendScrollPingbackBlock; // @synthesize sendScrollPingbackBlock=_sendScrollPingbackBlock;
@property(copy, nonatomic) CDUnknownBlockType visibleListCellChangedBlock; // @synthesize visibleListCellChangedBlock=_visibleListCellChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType videoItemSelectedBlock; // @synthesize videoItemSelectedBlock=_videoItemSelectedBlock;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) int location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)checkIsResponseItem:(id)arg1;
- (_Bool)checkDataIsPlaying:(id)arg1;
- (void)updatePlayingId:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)sendScrollPingback;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
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

