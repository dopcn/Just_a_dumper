//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface UILabel (Sugar)
+ (struct CGSize)sizeForAttributedString:(id)arg1 width:(double)arg2 lineCount:(long long)arg3;
+ (struct CGSize)sizeForAttributedString:(id)arg1 width:(double)arg2;
+ (struct CGSize)sizeForString:(id)arg1 width:(float)arg2 font:(id)arg3 lineCount:(long long)arg4;
+ (struct CGSize)sizeForString:(id)arg1 width:(float)arg2 font:(id)arg3;
- (void)highlightString:(id)arg1 color:(id)arg2;
- (void)setTextAlignmentTop;
- (void)setGradientTextColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (void)setDefaultGradientTextColor;
@end

