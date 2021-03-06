//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AudioTrackData, BDImageView, UIButton, UILabel;

@interface AudioTrackCell : UITableViewCell
{
    _Bool _simple;
    UILabel *__lblTitle;
    UILabel *__lblIndex;
    UIButton *__btnPlayCount;
    UIButton *__btnDuration;
    UILabel *__lblUpdated;
    BDImageView *__gifIndicator;
    AudioTrackData *__trackData;
}

@property(retain, nonatomic) AudioTrackData *_trackData; // @synthesize _trackData=__trackData;
@property(retain, nonatomic) BDImageView *_gifIndicator; // @synthesize _gifIndicator=__gifIndicator;
@property(retain, nonatomic) UILabel *_lblUpdated; // @synthesize _lblUpdated=__lblUpdated;
@property(retain, nonatomic) UIButton *_btnDuration; // @synthesize _btnDuration=__btnDuration;
@property(retain, nonatomic) UIButton *_btnPlayCount; // @synthesize _btnPlayCount=__btnPlayCount;
@property(retain, nonatomic) UILabel *_lblIndex; // @synthesize _lblIndex=__lblIndex;
@property(retain, nonatomic) UILabel *_lblTitle; // @synthesize _lblTitle=__lblTitle;
@property(nonatomic) _Bool simple; // @synthesize simple=_simple;
- (void).cxx_destruct;
- (void)_onSrvcTrackChanged:(id)arg1;
- (void)_showGifIndicator:(_Bool)arg1;
- (void)masLayoutSubviews;
- (void)_createSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 simpleMode:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithData:(id)arg1 atIndex:(long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

