//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface NLRegUnderlineButton : UIButton
{
    UIColor *_normalUnderlineColor;
    UIColor *_highlightedUnderlineColor;
    double _underlineWidth;
    double _titleUnderlineSpace;
}

@property(nonatomic) double titleUnderlineSpace; // @synthesize titleUnderlineSpace=_titleUnderlineSpace;
@property(nonatomic) double underlineWidth; // @synthesize underlineWidth=_underlineWidth;
@property(retain, nonatomic) UIColor *highlightedUnderlineColor; // @synthesize highlightedUnderlineColor=_highlightedUnderlineColor;
@property(retain, nonatomic) UIColor *normalUnderlineColor; // @synthesize normalUnderlineColor=_normalUnderlineColor;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

