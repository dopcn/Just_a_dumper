//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface NHShrinkControl : UIControl
{
    _Bool _shrink;
    UIImageView *_imageView;
    UILabel *_shrinkLabel;
}

@property(nonatomic, getter=isShrink) _Bool shrink; // @synthesize shrink=_shrink;
@property(retain, nonatomic) UILabel *shrinkLabel; // @synthesize shrinkLabel=_shrinkLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateLayOutForNewStyle:(_Bool)arg1;
- (double)estimateWidth;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setText:(id)arg1;
- (id)initWithIcon:(id)arg1 selectedIcon:(id)arg2;

@end

