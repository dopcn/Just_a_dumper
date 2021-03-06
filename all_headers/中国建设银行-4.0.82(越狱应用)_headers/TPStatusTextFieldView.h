//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, SpecialText, UITextView;

@interface TPStatusTextFieldView : UIView
{
    NSAttributedString *_attributedText;
    NSArray *_specialSegments;
    UITextView *_tv;
    SpecialText *_testTF;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) SpecialText *testTF; // @synthesize testTF=_testTF;
@property(nonatomic) __weak UITextView *tv; // @synthesize tv=_tv;
@property(retain, nonatomic) NSArray *specialSegments; // @synthesize specialSegments=_specialSegments;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

