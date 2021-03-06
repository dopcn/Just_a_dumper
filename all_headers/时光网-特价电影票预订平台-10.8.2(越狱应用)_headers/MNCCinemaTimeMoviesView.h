//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class MTBImageView, MTBScrollView, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MNDCinemaTimeMoviesViewDeleagte;

@interface MNCCinemaTimeMoviesView : MTBView <UIScrollViewDelegate>
{
    id <MNDCinemaTimeMoviesViewDeleagte> _delegate;
    CDUnknownBlockType _blockViewDidScroll;
    CDUnknownBlockType _bloceWillBeginDragging;
    MTBScrollView *_scrollViewData;
    MTBImageView *_imgView;
    MTBView *_viewBlack;
    NSMutableDictionary *_mDicImageCached;
    NSMutableArray *_mArrayCell;
    long long _intCurrentIndex;
    NSArray *_arrayData;
}

@property(copy, nonatomic) NSArray *arrayData; // @synthesize arrayData=_arrayData;
@property(nonatomic) long long intCurrentIndex; // @synthesize intCurrentIndex=_intCurrentIndex;
@property(retain, nonatomic) NSMutableArray *mArrayCell; // @synthesize mArrayCell=_mArrayCell;
@property(retain, nonatomic) NSMutableDictionary *mDicImageCached; // @synthesize mDicImageCached=_mDicImageCached;
@property(retain, nonatomic) MTBView *viewBlack; // @synthesize viewBlack=_viewBlack;
@property(retain, nonatomic) MTBImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) MTBScrollView *scrollViewData; // @synthesize scrollViewData=_scrollViewData;
@property(copy, nonatomic) CDUnknownBlockType bloceWillBeginDragging; // @synthesize bloceWillBeginDragging=_bloceWillBeginDragging;
@property(copy, nonatomic) CDUnknownBlockType blockViewDidScroll; // @synthesize blockViewDidScroll=_blockViewDidScroll;
@property(nonatomic) __weak id <MNDCinemaTimeMoviesViewDeleagte> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg1;
- (void)pageWillDidScroll:(CDUnknownBlockType)arg1;
- (void)setPageBlock:(CDUnknownBlockType)arg1;
- (void)setListData:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)setBackgroundImageForUrl:(id)arg1 originImage:(id)arg2;
- (void)setImgWithCell:(id)arg1 image:(id)arg2 url:(id)arg3;
- (void)setImgWithUrl:(id)arg1 withMovieCell:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)createViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

