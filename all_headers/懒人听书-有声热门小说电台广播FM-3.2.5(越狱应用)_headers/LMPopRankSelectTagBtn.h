//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface LMPopRankSelectTagBtn : UIButton
{
    _Bool _isSpread;
    unsigned long long _rankType;
}

@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) unsigned long long rankType; // @synthesize rankType=_rankType;
- (void)spreadInsideAnimation;
- (void)spreadOutAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

