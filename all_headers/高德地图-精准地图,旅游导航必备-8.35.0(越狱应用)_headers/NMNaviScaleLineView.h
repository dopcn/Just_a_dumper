//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMScaleLineView.h"

@class UIImageView;

@interface NMNaviScaleLineView : NMScaleLineView
{
    _Bool _showLogo;
    UIImageView *_logoView;
}

@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) _Bool showLogo; // @synthesize showLogo=_showLogo;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)refreshWithMapCenter:(struct ANPoint)arg1 mapZoomLevel:(double)arg2 showLogo:(_Bool)arg3;
- (void)mapModeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

