//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BDImageView, NSString, PostListFrameData, TitleButton, UICollectionView, UIImageView, UILabel, UIView;
@protocol PostsListTableCellDelegate;

@interface PostsListTableCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    PostListFrameData *_listFrameData;
    id <PostsListTableCellDelegate> _delegate;
    CDUnknownBlockType _commentBtnClickBlock;
    CDUnknownBlockType _approvalBtnClickBlock;
    UIView *_topView;
    UIView *_contentTextView;
    UIView *_contentImageView;
    BDImageView *_headImage;
    UILabel *_nickLabel;
    UILabel *_timeLabel;
    TitleButton *_approvalBtn;
    TitleButton *_commentBtn;
    UIImageView *_topImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UICollectionView *_photoCollection;
}

+ (id)cellWithTableView:(id)arg1;
@property(nonatomic) __weak UICollectionView *photoCollection; // @synthesize photoCollection=_photoCollection;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(nonatomic) __weak TitleButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(nonatomic) __weak TitleButton *approvalBtn; // @synthesize approvalBtn=_approvalBtn;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(nonatomic) __weak BDImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) __weak UIView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak UIView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType approvalBtnClickBlock; // @synthesize approvalBtnClickBlock=_approvalBtnClickBlock;
@property(copy, nonatomic) CDUnknownBlockType commentBtnClickBlock; // @synthesize commentBtnClickBlock=_commentBtnClickBlock;
@property(nonatomic) __weak id <PostsListTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PostListFrameData *listFrameData; // @synthesize listFrameData=_listFrameData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)approvalBtnClick:(id)arg1;
- (void)commentBtnClick:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setImageContentView;
- (void)setContentTextView;
- (void)setTopView;
- (void)isNeedChangeUI:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

