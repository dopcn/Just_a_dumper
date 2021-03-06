//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UIPlaceHolderTextField, UIViewController;
@protocol UI51CustomSearchBarDelegate;

@interface UI51CustomSearchBar : UIView <UITextFieldDelegate>
{
    UIImageView *_inputBackground;
    UIView *_maskView;
    NSString *placeholderStr;
    UIView *maskView;
    UIPlaceHolderTextField *_searchField;
    UIButton *_searchCancelButton;
    UIView *_lineView;
    UIViewController<UI51CustomSearchBarDelegate> *_barRootCtrl;
    long long _textLimitCNLength;
}

+ (id)barWithCtrl:(id)arg1 rect:(struct CGRect)arg2 backgroundView:(id)arg3;
+ (id)barWithCtrl:(id)arg1 rect:(struct CGRect)arg2;
@property(nonatomic) long long textLimitCNLength; // @synthesize textLimitCNLength=_textLimitCNLength;
@property(nonatomic) __weak UIViewController<UI51CustomSearchBarDelegate> *barRootCtrl; // @synthesize barRootCtrl=_barRootCtrl;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *searchCancelButton; // @synthesize searchCancelButton=_searchCancelButton;
@property(retain, nonatomic) UIPlaceHolderTextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView;
@property(copy, nonatomic) NSString *placeholderStr; // @synthesize placeholderStr;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)callSearchBarEndEditing:(id)arg1;
- (void)callSearchBarEndEditing;
- (void)callSearchBarBeginEditing;
- (void)resignSearchField;
- (void)callsearchBarShowAnimationFinished;
- (void)callsearchBarHiddenAnimationFinished;
- (void)cancelAction;
- (void)searchAction;
- (void)adjustInputBackground;
- (void)textFieldDidChange:(id)arg1;
- (void)deleteButtonPressed;
- (void)textFieldApplySkin;
- (void)textFieldStopEdtingMode;
- (void)textFieldStartEdtingMode;
- (void)customSubviews;
- (id)initWithCtrl:(id)arg1 rect:(struct CGRect)arg2 backgroundView:(id)arg3;
- (id)initWithCtrl:(id)arg1 rect:(struct CGRect)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

