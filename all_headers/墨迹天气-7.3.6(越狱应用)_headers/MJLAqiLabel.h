//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface MJLAqiLabel : UILabel
{
    _Bool _useAttributedText;
}

+ (void)initialize;
@property(nonatomic, getter=isUseAttributedText) _Bool useAttributedText; // @synthesize useAttributedText=_useAttributedText;
- (void)configAttributedText:(id)arg1 rangeArray:(id)arg2 font:(id)arg3;
- (id)sortRangeArray:(id)arg1;
- (struct _NSRange)getNeedDecreaseStringRangeWithText:(id)arg1 specificText:(id)arg2;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;

@end

