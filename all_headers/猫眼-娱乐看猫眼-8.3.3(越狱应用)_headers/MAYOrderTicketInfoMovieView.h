//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MAYRoundedLabel, NSString, UIImageView, UILabel;

@interface MAYOrderTicketInfoMovieView : UIView
{
    int _foldStatus;
    CDUnknownBlockType _clickFansMeeting;
    UILabel *_movieNameLabel;
    UILabel *_movieTimeLabel;
    UILabel *_movieLanguageLabel;
    UILabel *_movieSeatsLabel;
    MAYRoundedLabel *_countdownLabel;
    UIView *_fansMeetingView;
    UIImageView *_starIcon;
    UILabel *_starLabel;
    UIImageView *_starArrow;
    MAYRoundedLabel *_shareLabel;
    UIView *_surprisedEggView;
    UIImageView *_eggIcon;
    UILabel *_eggLabel;
    NSString *_seqNo;
}

@property(retain, nonatomic) NSString *seqNo; // @synthesize seqNo=_seqNo;
@property(nonatomic) int foldStatus; // @synthesize foldStatus=_foldStatus;
@property(retain, nonatomic) UILabel *eggLabel; // @synthesize eggLabel=_eggLabel;
@property(retain, nonatomic) UIImageView *eggIcon; // @synthesize eggIcon=_eggIcon;
@property(retain, nonatomic) UIView *surprisedEggView; // @synthesize surprisedEggView=_surprisedEggView;
@property(retain, nonatomic) MAYRoundedLabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIImageView *starArrow; // @synthesize starArrow=_starArrow;
@property(retain, nonatomic) UILabel *starLabel; // @synthesize starLabel=_starLabel;
@property(retain, nonatomic) UIImageView *starIcon; // @synthesize starIcon=_starIcon;
@property(retain, nonatomic) UIView *fansMeetingView; // @synthesize fansMeetingView=_fansMeetingView;
@property(retain, nonatomic) MAYRoundedLabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UILabel *movieSeatsLabel; // @synthesize movieSeatsLabel=_movieSeatsLabel;
@property(retain, nonatomic) UILabel *movieLanguageLabel; // @synthesize movieLanguageLabel=_movieLanguageLabel;
@property(retain, nonatomic) UILabel *movieTimeLabel; // @synthesize movieTimeLabel=_movieTimeLabel;
@property(retain, nonatomic) UILabel *movieNameLabel; // @synthesize movieNameLabel=_movieNameLabel;
@property(copy, nonatomic) CDUnknownBlockType clickFansMeeting; // @synthesize clickFansMeeting=_clickFansMeeting;
- (void).cxx_destruct;
- (void)shareFansMeeting;
- (void)foldFansMeetingView;
- (double)preferredContentHeight;
- (void)refreshConstraint;
- (void)configConstraint;
- (void)bindWithViewModel:(id)arg1;
- (void)commonInit;
- (id)init;

@end

