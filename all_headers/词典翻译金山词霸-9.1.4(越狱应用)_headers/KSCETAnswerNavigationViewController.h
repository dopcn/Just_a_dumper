//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSCETAnswerItemDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UICollectionView, UIView;
@protocol KSCETAnswerNavigationDelegate;

@interface KSCETAnswerNavigationViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, KSCETAnswerItemDelegate>
{
    id <KSCETAnswerNavigationDelegate> _delegate;
    NSArray *_answers;
    UIButton *_arrowDownButton;
    UICollectionView *_collectionView;
    UIView *_blankView;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

+ (id)navigationButtonForView:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *blankView; // @synthesize blankView=_blankView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIButton *arrowDownButton; // @synthesize arrowDownButton=_arrowDownButton;
@property(retain, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(nonatomic) __weak id <KSCETAnswerNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInWindow;
- (void)onClickDownArrowButton:(id)arg1;
- (void)navigateToAnswerItemWithIndexPath:(id)arg1;
- (double)calculateFittingHeight;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setTheme;
- (void)didReceiveMemoryWarning;
- (void)tap;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

