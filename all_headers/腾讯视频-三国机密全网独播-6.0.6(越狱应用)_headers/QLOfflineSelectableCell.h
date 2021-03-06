//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "QLSelectableProtocol-Protocol.h"

@class NSString, QLInfoButton, QLJCEPoster, QLONAPosterImageView, UIImageView, UILabel;

@interface QLOfflineSelectableCell : UICollectionViewCell <QLSelectableProtocol>
{
    _Bool _pt_selected;
    _Bool _playing;
    _Bool _isPreCache;
    _Bool _disabled;
    unsigned long long _cellState;
    QLInfoButton *_infoButton;
    UIImageView *_selectedImageView;
    UIImageView *_currentPlayingMarkView;
    QLONAPosterImageView *_posterImageView;
    QLJCEPoster *_poster;
    unsigned long long _type;
    UILabel *_batchTitleLabel;
}

@property(retain, nonatomic) UILabel *batchTitleLabel; // @synthesize batchTitleLabel=_batchTitleLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) QLJCEPoster *poster; // @synthesize poster=_poster;
@property(retain, nonatomic) QLONAPosterImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) UIImageView *currentPlayingMarkView; // @synthesize currentPlayingMarkView=_currentPlayingMarkView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) QLInfoButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) unsigned long long cellState; // @synthesize cellState=_cellState;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool isPreCache; // @synthesize isPreCache=_isPreCache;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool pt_selected; // @synthesize pt_selected=_pt_selected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPoster:(id)arg1 viewType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

