//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YXThemeLabel;
@protocol CopyAndPasteViewDelegate;

@interface CopyAndPasteView : UIView
{
    _Bool _canCopy;
    _Bool _canPaste;
    YXThemeLabel *_tipLabel;
    YXThemeLabel *_titleLabel;
    id <CopyAndPasteViewDelegate> _delegate;
}

@property(nonatomic) id <CopyAndPasteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canPaste; // @synthesize canPaste=_canPaste;
@property(nonatomic) _Bool canCopy; // @synthesize canCopy=_canCopy;
@property(retain, nonatomic) YXThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YXThemeLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)pasteText:(id)arg1;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)initComponents;
- (void)awakeFromNib;

@end

