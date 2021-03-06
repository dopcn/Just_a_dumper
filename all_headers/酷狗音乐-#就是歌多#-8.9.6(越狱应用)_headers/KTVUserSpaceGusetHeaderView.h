//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class KFSegmentTitle, KTVThemeButton, KTVThemeLabel, KTVThemeView, KTVUserSpaceLocation;
@protocol KTVUserSpaceGusetHeaderViewDelegate;

@interface KTVUserSpaceGusetHeaderView : UICollectionReusableView
{
    _Bool isQuanju;
    id <KTVUserSpaceGusetHeaderViewDelegate> _delegate;
    KFSegmentTitle *_menuSegment;
    KTVThemeView *_bottomSeparator;
    KTVThemeLabel *_titleLabel;
    KTVUserSpaceLocation *_infoNum;
    KTVThemeButton *_playAllOpusBtn;
}

@property(retain, nonatomic) KTVThemeButton *playAllOpusBtn; // @synthesize playAllOpusBtn=_playAllOpusBtn;
@property(retain, nonatomic) KTVUserSpaceLocation *infoNum; // @synthesize infoNum=_infoNum;
@property(retain, nonatomic) KTVThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KTVThemeView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) KFSegmentTitle *menuSegment; // @synthesize menuSegment=_menuSegment;
@property(nonatomic) __weak id <KTVUserSpaceGusetHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)configViewHeightWithNumber:(unsigned long long)arg1;
- (void)configViewInfoNum:(id)arg1;
- (void)layoutSubviews;
- (id)attributedTitleWithNumber:(unsigned long long)arg1;
- (void)actionPlayAllOpus;
- (void)playOpusId:(id)arg1;
- (void)configeMenuSegmentEvent;
- (void)configeMenuSegmentInfo;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

