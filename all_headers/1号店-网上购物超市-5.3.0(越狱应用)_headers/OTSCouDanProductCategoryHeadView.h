//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, OTSCollectionView, UIButton, UILabel;
@protocol OTSCouDanProductCategoryHeadViewDelegate;

@interface OTSCouDanProductCategoryHeadView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <OTSCouDanProductCategoryHeadViewDelegate> _delegate;
    UIView *_freshView;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UILabel *_seplineLbl;
    UILabel *_bottomLine;
    long long _currentIndex;
    NSLayoutConstraint *_bLineCenterOffset;
    OTSCollectionView *_safeCollectionView;
    NSArray *_dataArray;
}

@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) OTSCollectionView *safeCollectionView; // @synthesize safeCollectionView=_safeCollectionView;
@property(retain, nonatomic) NSLayoutConstraint *bLineCenterOffset; // @synthesize bLineCenterOffset=_bLineCenterOffset;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *seplineLbl; // @synthesize seplineLbl=_seplineLbl;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *freshView; // @synthesize freshView=_freshView;
@property(nonatomic) __weak id <OTSCouDanProductCategoryHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notFreshBtn;
- (void)freshBtn;
- (void)updateSelectProductCategory:(long long)arg1;
- (void)updateSelectFreshCategory:(long long)arg1 showFresh:(_Bool)arg2 andPriceArray:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

