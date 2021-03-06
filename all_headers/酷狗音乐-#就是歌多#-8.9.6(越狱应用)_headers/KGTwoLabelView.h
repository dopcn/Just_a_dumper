//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KGThemeLabel, KGThemeView;

@interface KGTwoLabelView : UIView
{
    double _labelSpace;
    double _leftRightMargin;
    KGThemeView *_containerView;
    KGThemeLabel *_firstLabel;
    KGThemeLabel *_secondLabel;
}

@property(retain, nonatomic) KGThemeLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) KGThemeLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) KGThemeView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double leftRightMargin; // @synthesize leftRightMargin=_leftRightMargin;
@property(nonatomic) double labelSpace; // @synthesize labelSpace=_labelSpace;
- (void).cxx_destruct;
- (void)setWidth:(double)arg1;
- (void)setFirstLabelText:(id)arg1 andSecondLableText:(id)arg2;
- (void)setSecondLabelFontSize:(double)arg1 andColorKey:(long long)arg2;
- (void)changeSecondLabelColor:(id)arg1;
- (void)setFirstLabelFontSize:(double)arg1 andColorKey:(long long)arg2;
- (void)changeFirstLabelColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

