//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, XSTArticleCommentConfig;
@protocol XSTArticleCommentViewDelegate;

@interface XSTArticleCommentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <XSTArticleCommentViewDelegate> _delegate;
    XSTArticleCommentConfig *_commentConfig;
    UICollectionView *_commentCollectionView;
    NSMutableArray *_cellHeightArray;
}

@property(retain, nonatomic) NSMutableArray *cellHeightArray; // @synthesize cellHeightArray=_cellHeightArray;
@property(retain, nonatomic) UICollectionView *commentCollectionView; // @synthesize commentCollectionView=_commentCollectionView;
@property(retain, nonatomic) XSTArticleCommentConfig *commentConfig; // @synthesize commentConfig=_commentConfig;
@property(nonatomic) __weak id <XSTArticleCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configCommentViewWithConfig:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

