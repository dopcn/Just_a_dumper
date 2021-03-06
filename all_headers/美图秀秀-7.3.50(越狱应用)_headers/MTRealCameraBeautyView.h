//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MTCollectionView, NSString;
@protocol MTRealCameraBeautyViewDelegate;

@interface MTRealCameraBeautyView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isWhite;
    id <MTRealCameraBeautyViewDelegate> _delegate;
    long long _beautyLevel;
    MTCollectionView *_collectionView;
    UIView *_containView;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) MTCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isWhite; // @synthesize isWhite=_isWhite;
@property(nonatomic) long long beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) __weak id <MTRealCameraBeautyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureStyle;
- (void)scrollToSelectLevel;
- (void)updateBeautyLevel;
- (void)setupSubviews;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

