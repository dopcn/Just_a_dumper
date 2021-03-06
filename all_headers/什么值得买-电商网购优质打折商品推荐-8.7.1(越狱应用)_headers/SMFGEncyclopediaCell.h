//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMBaseTableCell.h"

@class FLAnimatedImageView, UIImageView, UILabel;

@interface SMFGEncyclopediaCell : SMBaseTableCell
{
    FLAnimatedImageView *_iconView;
    UILabel *_topicLabel;
    UILabel *_subTopicLabel;
    UIImageView *_picView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_commentLabel;
    UILabel *_collectionLabel;
}

@property(nonatomic) __weak UILabel *collectionLabel; // @synthesize collectionLabel=_collectionLabel;
@property(nonatomic) __weak UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *picView; // @synthesize picView=_picView;
@property(nonatomic) __weak UILabel *subTopicLabel; // @synthesize subTopicLabel=_subTopicLabel;
@property(nonatomic) __weak UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(nonatomic) __weak FLAnimatedImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)zdm_isYetBrowse;
- (void)zdm_setupHasBrowsing;
- (void)setDataDic:(id)arg1;
- (void)awakeFromNib;

@end

