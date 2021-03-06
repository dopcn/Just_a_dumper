//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NICell-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class JMGoodsDetailCommentCollectionView, JMNewCommentCellObject, JMProductNewDetailComment, NSAttributedString, NSString, UIButton, UICollectionViewFlowLayout, UIImageView, UILabel, UIView, YJUITableCellObject, YJUITableViewManager;

@interface JMGoodsDetailCommentTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, NICell>
{
    _Bool _isContentOpenClick;
    JMNewCommentCellObject *_cellObject;
    UIImageView *_iconImageView;
    UIImageView *_starImageView;
    UILabel *_nameLabel;
    UILabel *_vipLabel;
    UILabel *_joinLabel;
    UILabel *_contentLabel;
    UILabel *_modelLabel;
    UIButton *_commentButton;
    UIButton *_likeButton;
    UIView *_lineView;
    JMGoodsDetailCommentCollectionView *_collectionView;
    UIButton *_replyButton;
    UIButton *_contentOpenButton;
    UIButton *_replyOpenButton;
    JMProductNewDetailComment *_comment;
    unsigned long long _originType;
    long long _showImageCount;
    UICollectionViewFlowLayout *_flowLayout;
    YJUITableViewManager *_tableViewManager;
    YJUITableCellObject *_yjCellObject;
    NSAttributedString *_commentAttributrStr;
    JMProductNewDetailComment *_firstComment;
}

+ (double)cellHeightWithObject:(id)arg1;
+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
+ (double)tableViewManager:(id)arg1 heightForCellObject:(id)arg2;
+ (id)cellObjectWithCellModel:(id)arg1;
@property(retain, nonatomic) JMProductNewDetailComment *firstComment; // @synthesize firstComment=_firstComment;
@property(nonatomic) _Bool isContentOpenClick; // @synthesize isContentOpenClick=_isContentOpenClick;
@property(copy, nonatomic) NSAttributedString *commentAttributrStr; // @synthesize commentAttributrStr=_commentAttributrStr;
@property(nonatomic) __weak YJUITableCellObject *yjCellObject; // @synthesize yjCellObject=_yjCellObject;
@property(nonatomic) __weak YJUITableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) long long showImageCount; // @synthesize showImageCount=_showImageCount;
@property(nonatomic) unsigned long long originType; // @synthesize originType=_originType;
@property(retain, nonatomic) JMProductNewDetailComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) UIButton *replyOpenButton; // @synthesize replyOpenButton=_replyOpenButton;
@property(retain, nonatomic) UIButton *contentOpenButton; // @synthesize contentOpenButton=_contentOpenButton;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) JMGoodsDetailCommentCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UILabel *modelLabel; // @synthesize modelLabel=_modelLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *joinLabel; // @synthesize joinLabel=_joinLabel;
@property(retain, nonatomic) UILabel *vipLabel; // @synthesize vipLabel=_vipLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) JMNewCommentCellObject *cellObject; // @synthesize cellObject=_cellObject;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (void)replyOpenAction:(id)arg1;
- (void)contentOpenAction:(id)arg1;
- (void)replyAction:(id)arg1;
- (void)likeAction:(id)arg1;
- (void)commentAction:(id)arg1;
- (void)updateButtonFrameWithComment:(id)arg1;
- (void)updateSubViewsFrameWithComment:(id)arg1;
- (void)updateSubViewsDataWithComment:(id)arg1;
- (void)ctrAnalyticsWithViewAction:(id)arg1;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)reloadDataSyncWithCellObject:(id)arg1 tableViewManager:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)addSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

