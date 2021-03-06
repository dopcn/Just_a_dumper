//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYGroupStyleCell.h"

#import "MAYHorizontalListViewScrollGestures-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MAYHorizontalCollectionView, MAYMovieBoardHorizontalListView, NSString, UIImageView, UILabel;

@interface MAYBaseMovieBoardCell : MAYGroupStyleCell <UIGestureRecognizerDelegate, MAYHorizontalListViewScrollGestures>
{
    _Bool _showHorizontalListView;
    UILabel *_titleLabel;
    UIImageView *_indicator;
    UIImageView *_titleTag;
    MAYMovieBoardHorizontalListView *_detailView;
    MAYHorizontalCollectionView *_detailView2;
    double _listViewHeight;
}

@property(nonatomic) double listViewHeight; // @synthesize listViewHeight=_listViewHeight;
@property(nonatomic) _Bool showHorizontalListView; // @synthesize showHorizontalListView=_showHorizontalListView;
@property(retain, nonatomic) MAYHorizontalCollectionView *detailView2; // @synthesize detailView2=_detailView2;
@property(retain, nonatomic) MAYMovieBoardHorizontalListView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIImageView *titleTag; // @synthesize titleTag=_titleTag;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setCellContent:(id)arg1;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)setGesturesRecognizersToBeEnabledWhenListViewGestureFails:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

