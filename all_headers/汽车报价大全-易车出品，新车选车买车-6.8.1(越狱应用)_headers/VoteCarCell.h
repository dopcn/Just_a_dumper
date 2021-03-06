//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIView, VoteInfo;

__attribute__((visibility("hidden")))
@interface VoteCarCell : UITableViewCell
{
    NSDictionary *_voteDict;
    CDUnknownBlockType _operationBlock;
    TTTAttributedLabel *_voteEndDateLabel;
    VoteInfo *_voteInfo;
    UIImageView *_voteStatusImageview;
    UILabel *_voteCarsCountLabel;
    UIView *_line;
    UIView *_line2;
    UIButton *_actionButton;
    TTTAttributedLabel *_carNameLabel;
    UIImageView *_carImageView;
    UILabel *_topVoteCountLabel;
    UILabel *_topVoteRankLabel;
    UILabel *_sharePromptlabel;
    UIView *_cellSelecteView;
}

@property(nonatomic) __weak UIView *cellSelecteView; // @synthesize cellSelecteView=_cellSelecteView;
@property(nonatomic) __weak UILabel *sharePromptlabel; // @synthesize sharePromptlabel=_sharePromptlabel;
@property(nonatomic) __weak UILabel *topVoteRankLabel; // @synthesize topVoteRankLabel=_topVoteRankLabel;
@property(nonatomic) __weak UILabel *topVoteCountLabel; // @synthesize topVoteCountLabel=_topVoteCountLabel;
@property(nonatomic) __weak UIImageView *carImageView; // @synthesize carImageView=_carImageView;
@property(nonatomic) __weak TTTAttributedLabel *carNameLabel; // @synthesize carNameLabel=_carNameLabel;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak UIView *line2; // @synthesize line2=_line2;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UILabel *voteCarsCountLabel; // @synthesize voteCarsCountLabel=_voteCarsCountLabel;
@property(nonatomic) __weak UIImageView *voteStatusImageview; // @synthesize voteStatusImageview=_voteStatusImageview;
@property(retain, nonatomic) VoteInfo *voteInfo; // @synthesize voteInfo=_voteInfo;
@property(nonatomic) __weak TTTAttributedLabel *voteEndDateLabel; // @synthesize voteEndDateLabel=_voteEndDateLabel;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) NSDictionary *voteDict; // @synthesize voteDict=_voteDict;
- (void).cxx_destruct;
- (void)touchDown:(id)arg1;
- (void)opButtonSelected:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)configCellWithVoteInfo:(id)arg1;

@end

