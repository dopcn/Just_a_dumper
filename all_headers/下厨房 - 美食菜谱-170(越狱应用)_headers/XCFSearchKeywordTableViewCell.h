//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateRightAlignedLayout-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UICollectionView, UILabel, XCFSearchKeywordModel;

@interface XCFSearchKeywordTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateRightAlignedLayout>
{
    CDUnknownBlockType _extensionTouchedBlock;
    UILabel *_keywordLabel;
    UICollectionView *_extensionCollectionView;
    NSLayoutConstraint *_collectionViewWidth;
    XCFSearchKeywordModel *_searchKeywordModel;
    NSMutableArray *_extensions;
}

+ (double)height;
@property(retain, nonatomic) NSMutableArray *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) XCFSearchKeywordModel *searchKeywordModel; // @synthesize searchKeywordModel=_searchKeywordModel;
@property(nonatomic) __weak NSLayoutConstraint *collectionViewWidth; // @synthesize collectionViewWidth=_collectionViewWidth;
@property(nonatomic) __weak UICollectionView *extensionCollectionView; // @synthesize extensionCollectionView=_extensionCollectionView;
@property(nonatomic) __weak UILabel *keywordLabel; // @synthesize keywordLabel=_keywordLabel;
@property(copy, nonatomic) CDUnknownBlockType extensionTouchedBlock; // @synthesize extensionTouchedBlock=_extensionTouchedBlock;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setKeyword:(id)arg1 SearchKeywordModel:(id)arg2;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

