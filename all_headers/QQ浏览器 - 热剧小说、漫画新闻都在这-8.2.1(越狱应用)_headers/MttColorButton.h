//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttButton.h"

@class UIImageView;

@interface MttColorButton : MttButton
{
    UIImageView *promptImage_;
    _Bool _showRedDot;
    int _colorStyle;
}

@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) int colorStyle; // @synthesize colorStyle=_colorStyle;
- (void).cxx_destruct;
- (void)updateUIWithStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withColorStyle:(int)arg2;

@end

