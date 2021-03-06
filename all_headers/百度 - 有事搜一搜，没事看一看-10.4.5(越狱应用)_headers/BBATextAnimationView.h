//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UILabel;

@interface BBATextAnimationView : UIView
{
    NSArray *_originLabelsList;
    NSArray *_plusLabelList;
    UILabel *_originLabel;
    NSString *_numbers;
    NSString *_newNumbers;
    struct CGSize _intrinsicContentSize;
    UIColor *_textColor;
    UIFont *_textFont;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)createLabels;
- (id)generateLabels:(id)arg1 shouldShiftY:(_Bool)arg2 alpha:(double)arg3;
- (void)updateFrame:(_Bool)arg1;
- (int)startFromWithOriginString:(id)arg1 newString:(id)arg2;
- (void)updateLabelsLayoutWithAnimation;
- (void)createOriginLabel;
- (void)setText:(id)arg1 animated:(_Bool)arg2 textColor:(id)arg3;
- (void)setText:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;

@end

