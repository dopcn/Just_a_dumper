//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SKTimerIconView : UIView
{
    float _originX;
    UIImageView *_icon;
    UILabel *_time;
}

@property(nonatomic) float originX; // @synthesize originX=_originX;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setTimer:(id)arg1;
- (id)initWithX:(float)arg1;

@end

