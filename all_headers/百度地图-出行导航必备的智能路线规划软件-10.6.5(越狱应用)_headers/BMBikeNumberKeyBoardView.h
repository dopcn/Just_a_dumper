//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITextField, UITextView;
@protocol BMBikeNumberKeyBoardViewDelegate;

@interface BMBikeNumberKeyBoardView : UIView
{
    id <BMBikeNumberKeyBoardViewDelegate> _delegate;
    UITextView *_textView;
    UITextField *_textField;
}

@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <BMBikeNumberKeyBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enSurenDidClick;
- (void)deleteKeyBoard;
- (void)numberKeyBoard:(long long)arg1;
- (void)keyBoardAction:(id)arg1;
- (id)creteCommonButton;
- (void)setupKeyBoard;
- (id)initWithTextView:(id)arg1;
- (double)keyboardHight;
- (id)initWithTextField:(id)arg1;

@end

