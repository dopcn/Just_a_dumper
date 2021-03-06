//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "XSTCustomEmoViewCollectionViewCellDelegate-Protocol.h"
#import "XSTDefaultEmoCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, XSTCyclePageController;
@protocol XSTEmojiShowViewDelegate;

@interface XSTEmojiShowView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, XSTDefaultEmoCollectionViewCellDelegate, XSTCustomEmoViewCollectionViewCellDelegate>
{
    id <XSTEmojiShowViewDelegate> _delegate;
    UICollectionView *_showColView;
    XSTCyclePageController *_pageController;
    NSArray *_emojiArr;
    long long _lastSection;
}

@property(nonatomic) long long lastSection; // @synthesize lastSection=_lastSection;
@property(retain, nonatomic) NSArray *emojiArr; // @synthesize emojiArr=_emojiArr;
@property(retain, nonatomic) XSTCyclePageController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) UICollectionView *showColView; // @synthesize showColView=_showColView;
@property(nonatomic) __weak id <XSTEmojiShowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setPageDotWithArr:(id)arg1 isDefault:(_Bool)arg2;
- (long long)getPageCountWithArr:(id)arg1 isDefault:(_Bool)arg2;
- (void)turnEmojiWithIndex:(long long)arg1;
- (id)getEmojiArrWithSection:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)customEmoViewCollectionViewCell:(id)arg1 didPressButtonName:(id)arg2 passParams:(id)arg3;
- (void)defaultEmoCollectionViewCell:(id)arg1 didPressButtonName:(id)arg2 passParams:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

