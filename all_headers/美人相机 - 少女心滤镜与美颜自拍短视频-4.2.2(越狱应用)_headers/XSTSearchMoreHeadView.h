//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;
@protocol XSTSearchMoreHeadViewDelegate;

@interface XSTSearchMoreHeadView : UIView <UITextFieldDelegate>
{
    UIView *_grayView;
    UIImageView *_becomeBigImageView;
    UITextField *_textField;
    id <XSTSearchMoreHeadViewDelegate> _delegate;
    NSString *_textStr;
}

@property(copy, nonatomic) NSString *textStr; // @synthesize textStr=_textStr;
@property(nonatomic) __weak id <XSTSearchMoreHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *becomeBigImageView; // @synthesize becomeBigImageView=_becomeBigImageView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

