//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDHTMLLabel, NSMutableArray, UIButton, UILabel;

@interface VSCheckDetailHeadView : UIView
{
    UIView *_containerView;
    NSMutableArray *_customConstraints;
    MDHTMLLabel *_moneyLabel;
    UIButton *_expendButton;
    CDUnknownBlockType _callback;
    UILabel *_freightLabel;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UILabel *freightLabel; // @synthesize freightLabel=_freightLabel;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak UIButton *expendButton; // @synthesize expendButton=_expendButton;
@property(nonatomic) __weak MDHTMLLabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)resetFrame;
- (void)showMoney:(id)arg1 freight:(id)arg2 prePay:(_Bool)arg3 defaultSelectStaue:(_Bool)arg4 actionCallback:(CDUnknownBlockType)arg5;
- (void)expendAction:(id)arg1;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

