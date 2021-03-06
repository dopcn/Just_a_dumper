//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTLiveBasePresentedViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, UILabel, UIView;

@interface CTLiveDailySignInViewController : CTLiveBasePresentedViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIView *_signInContentView;
    UILabel *_signInTitleLabel;
    UIButton *_closeButton;
    UICollectionView *_signInCollectionView;
    UIButton *_signInButton;
    UILabel *_signInRemarkLabel;
    NSArray *_signInDetails;
    double _cellWidth;
    double _cellHeight;
}

+ (void)checkAndShowDailySign:(CDUnknownBlockType)arg1;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(copy, nonatomic) NSArray *signInDetails; // @synthesize signInDetails=_signInDetails;
@property(retain, nonatomic) UILabel *signInRemarkLabel; // @synthesize signInRemarkLabel=_signInRemarkLabel;
@property(retain, nonatomic) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UICollectionView *signInCollectionView; // @synthesize signInCollectionView=_signInCollectionView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *signInTitleLabel; // @synthesize signInTitleLabel=_signInTitleLabel;
@property(retain, nonatomic) UIView *signInContentView; // @synthesize signInContentView=_signInContentView;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)signIn;
- (void)close;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

