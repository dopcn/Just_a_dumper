//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BFCollectionViewCell.h"

@class BFPosterView, DisplayStarView, UIButton, UIImageView, UILabel, UIView;

@interface BFCollectionViewStyleTenCell : BFCollectionViewCell
{
    UIView *_blueView;
    UILabel *_titleLabel;
    BFPosterView *_poster;
    UILabel *_tagsLabel;
    UILabel *_firstFieldLabel;
    UILabel *_secondFieldLabel;
    UILabel *_thirdFieldLabel;
    UILabel *_fourthFieldLabel;
    UILabel *_fifthFieldLabel;
    DisplayStarView *_starView;
    UILabel *_scoreLabel;
    UIImageView *_commentImageView;
    UIButton *_playLaterOnBtn;
    UIButton *_playImmediatelyBtn;
    UIView *_separatorVBar;
    UIButton *_unlikeBtn;
}

@property(retain, nonatomic) UIButton *unlikeBtn; // @synthesize unlikeBtn=_unlikeBtn;
@property(retain, nonatomic) UIView *separatorVBar; // @synthesize separatorVBar=_separatorVBar;
@property(retain, nonatomic) UIButton *playImmediatelyBtn; // @synthesize playImmediatelyBtn=_playImmediatelyBtn;
@property(retain, nonatomic) UIButton *playLaterOnBtn; // @synthesize playLaterOnBtn=_playLaterOnBtn;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) DisplayStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *fifthFieldLabel; // @synthesize fifthFieldLabel=_fifthFieldLabel;
@property(retain, nonatomic) UILabel *fourthFieldLabel; // @synthesize fourthFieldLabel=_fourthFieldLabel;
@property(retain, nonatomic) UILabel *thirdFieldLabel; // @synthesize thirdFieldLabel=_thirdFieldLabel;
@property(retain, nonatomic) UILabel *secondFieldLabel; // @synthesize secondFieldLabel=_secondFieldLabel;
@property(retain, nonatomic) UILabel *firstFieldLabel; // @synthesize firstFieldLabel=_firstFieldLabel;
@property(retain, nonatomic) UILabel *tagsLabel; // @synthesize tagsLabel=_tagsLabel;
@property(retain, nonatomic) BFPosterView *poster; // @synthesize poster=_poster;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *blueView; // @synthesize blueView=_blueView;
- (void)unlikeBtnClicked:(id)arg1;
- (void)cellBtnPressed:(id)arg1;
- (void)updateFavStatus;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

