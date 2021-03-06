//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSProductBaseTVCell.h"

#import "NICollectionViewModelDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSLayoutConstraint, NSNumber, NSString, OTSCollectionView, OTSProductCommentTVCellObject, OTSProductCommentVO, RACCommand, UIButton, UILabel;

@interface OTSProductCommentTVCell : OTSProductBaseTVCell <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, NICollectionViewModelDelegate>
{
    UILabel *_commentRate;
    OTSCollectionView *_commentList;
    UILabel *_concentrateComment;
    UIButton *_moreCommentBtn;
    NSNumber *_skuid;
    OTSProductCommentTVCellObject *_cellObject;
    OTSProductCommentVO *_choiseComment;
    NSLayoutConstraint *_commentListTopConstraint;
    RACCommand *_selectedCommand;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) RACCommand *selectedCommand; // @synthesize selectedCommand=_selectedCommand;
@property(retain, nonatomic) NSLayoutConstraint *commentListTopConstraint; // @synthesize commentListTopConstraint=_commentListTopConstraint;
@property(retain, nonatomic) OTSProductCommentVO *choiseComment; // @synthesize choiseComment=_choiseComment;
@property(retain, nonatomic) OTSProductCommentTVCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) NSNumber *skuid; // @synthesize skuid=_skuid;
@property(retain, nonatomic) UIButton *moreCommentBtn; // @synthesize moreCommentBtn=_moreCommentBtn;
@property(retain, nonatomic) UILabel *concentrateComment; // @synthesize concentrateComment=_concentrateComment;
@property(retain, nonatomic) OTSCollectionView *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) UILabel *commentRate; // @synthesize commentRate=_commentRate;
- (void).cxx_destruct;
- (id)collectionViewModel:(id)arg1 cellForCollectionView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)addLayoutConstraint;
- (void)intUI;
- (void)initBaseDataInfo;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)tapCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

