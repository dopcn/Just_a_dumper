//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoRoomBaseView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "YoyoRoomShareViewCellDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, UILabel, UIView, YOYO_MASConstraint;

@interface YoyoRoomShareView : YoyoRoomBaseView <UICollectionViewDelegate, UICollectionViewDataSource, YoyoRoomShareViewCellDelegate>
{
    UIView *_bgView;
    UIView *_bgShadowView;
    UILabel *_shareLabel;
    UICollectionView *_topCollectionView;
    UICollectionView *_bottomCollectionView;
    UIView *_line;
    UIButton *_cancelBtn;
    NSArray *_topCVDatas;
    NSArray *_bottomCVDatas;
    NSArray *_horizontalTopCVDatas;
    NSArray *_horizontalBottomCVDatas;
    NSArray *_verticalTopCVDatas;
    NSArray *_verticalBottomCVDatas;
    YOYO_MASConstraint *_bgViewBottomCons;
}

@property(retain, nonatomic) YOYO_MASConstraint *bgViewBottomCons; // @synthesize bgViewBottomCons=_bgViewBottomCons;
@property(retain, nonatomic) NSArray *verticalBottomCVDatas; // @synthesize verticalBottomCVDatas=_verticalBottomCVDatas;
@property(retain, nonatomic) NSArray *verticalTopCVDatas; // @synthesize verticalTopCVDatas=_verticalTopCVDatas;
@property(retain, nonatomic) NSArray *horizontalBottomCVDatas; // @synthesize horizontalBottomCVDatas=_horizontalBottomCVDatas;
@property(retain, nonatomic) NSArray *horizontalTopCVDatas; // @synthesize horizontalTopCVDatas=_horizontalTopCVDatas;
@property(retain, nonatomic) NSArray *bottomCVDatas; // @synthesize bottomCVDatas=_bottomCVDatas;
@property(retain, nonatomic) NSArray *topCVDatas; // @synthesize topCVDatas=_topCVDatas;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UICollectionView *bottomCollectionView; // @synthesize bottomCollectionView=_bottomCollectionView;
@property(nonatomic) __weak UICollectionView *topCollectionView; // @synthesize topCollectionView=_topCollectionView;
@property(nonatomic) __weak UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(nonatomic) __weak UIView *bgShadowView; // @synthesize bgShadowView=_bgShadowView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)onAfterHidden;
- (void)onAfterShown;
- (void)onShownAnimEndState;
- (void)onShownAnimBeginState;
- (void)collectionView:(id)arg1 onClickIndex:(long long)arg2;
- (void)OnClickCancelShare:(id)arg1;
- (void)onClickBlankArea;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateConstraints;
- (id)createCollectionView;
- (void)loadView;
- (void)onScreenWillRotateTo:(long long)arg1;
- (void)refreshViewForRoomViewTypeChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

