//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SDashedLineView, UILabel;

@interface SRNPriceLabel : UIView
{
    UILabel *_titleLabel;
    SDashedLineView *_line;
}

@property(retain, nonatomic) SDashedLineView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 andPriceView:(id)arg2 font:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

