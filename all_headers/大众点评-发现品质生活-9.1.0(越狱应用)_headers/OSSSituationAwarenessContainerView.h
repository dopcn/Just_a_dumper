//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NVImageViewDelegate-Protocol.h"

@class NSString, NVImageView, NVJsonLabel, NVModelBaseSceneModeItem, OSSSituationAwarenessAccessoryView, OSSSituationAwarenessSubtitleContainerView, UIButton, UIImageView, UILabel;

@interface OSSSituationAwarenessContainerView : UIView <NVImageViewDelegate>
{
    _Bool _isScaledImage;
    NVImageView *_mainImageView;
    UIImageView *_tagImageView;
    UIImageView *_locationImageView;
    NVJsonLabel *_titleLabel;
    UIImageView *_shopPowerView;
    UILabel *_disclaimerLabel;
    OSSSituationAwarenessAccessoryView *_accessoryView;
    OSSSituationAwarenessSubtitleContainerView *_subtitleContainerView;
    UIButton *_maskView;
    NVModelBaseSceneModeItem *_data;
}

+ (double)heightForData:(id)arg1;
@property(retain, nonatomic) NVModelBaseSceneModeItem *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) OSSSituationAwarenessSubtitleContainerView *subtitleContainerView; // @synthesize subtitleContainerView=_subtitleContainerView;
@property(retain, nonatomic) OSSSituationAwarenessAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) UIImageView *shopPowerView; // @synthesize shopPowerView=_shopPowerView;
@property(nonatomic) _Bool isScaledImage; // @synthesize isScaledImage=_isScaledImage;
@property(retain, nonatomic) NVJsonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) NVImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)imageLoadingFailed:(id)arg1;
- (void)imageLoadingSucced:(id)arg1;
- (id)scaleToWidth:(double)arg1 scaledImage:(id)arg2;
- (void)reloadViewWithData:(id)arg1;
- (long long)accessoryType;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

