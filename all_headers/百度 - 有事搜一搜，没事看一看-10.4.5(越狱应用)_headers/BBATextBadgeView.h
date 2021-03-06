//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UILabel;

@interface BBATextBadgeView : UIView
{
    double _fontSize;
    double _leftMargin;
    UILabel *_textLabel;
    CALayer *_textLayer;
}

+ (id)getAttributedString:(id)arg1 textFont:(id)arg2 lineSpace:(double)arg3;
@property(retain, nonatomic) CALayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGSize)getBadgeViewSize;
- (void)setBadgeText:(id)arg1;
- (id)init;

@end

