//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface SPKNumberPadKeyboard : UIView
{
    NSArray *_frameArray;
    UILabel *_titleLabel;
    unsigned long long _keyboardType;
}

@property(readonly, nonatomic) unsigned long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *frameArray; // @synthesize frameArray=_frameArray;
- (void).cxx_destruct;
- (void)didClickedDigitButton:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)frameForKeyBoardButtonWithRow:(long long)arg1 Column:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyboardType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

