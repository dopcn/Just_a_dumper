//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor;
@protocol BBAToggleButtonViewDelegate;

@interface BBAToggleButtonView : UIView
{
    id <BBAToggleButtonViewDelegate> _delegate;
    NSMutableArray *_toggleButtons;
    NSArray *_normalImages;
    NSArray *_highlightedImages;
    UIColor *_normalDescColor;
    UIColor *_highlightedDescColor;
}

@property(retain, nonatomic) UIColor *highlightedDescColor; // @synthesize highlightedDescColor=_highlightedDescColor;
@property(retain, nonatomic) UIColor *normalDescColor; // @synthesize normalDescColor=_normalDescColor;
@property(retain, nonatomic) NSArray *highlightedImages; // @synthesize highlightedImages=_highlightedImages;
@property(retain, nonatomic) NSArray *normalImages; // @synthesize normalImages=_normalImages;
@property(retain, nonatomic) NSMutableArray *toggleButtons; // @synthesize toggleButtons=_toggleButtons;
@property(nonatomic) __weak id <BBAToggleButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setButtonNormal:(id)arg1 index:(unsigned long long)arg2;
- (void)setButtonHighlighted:(id)arg1 index:(unsigned long long)arg2;
- (void)buttonPressed:(id)arg1;
- (void)initializetoggleButtons;

@end

