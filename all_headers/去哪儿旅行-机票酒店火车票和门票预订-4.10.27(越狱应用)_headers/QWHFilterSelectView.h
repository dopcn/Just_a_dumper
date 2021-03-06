//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LightControl.h"

@class MASConstraint, NSAttributedString, NSString, QWHPlaceHolderLabel, QWStackView, SUIButton, UIActivityIndicatorView, UIImageView, UILabel;
@protocol QWHFilterSelectViewDelegate;

@interface QWHFilterSelectView : LightControl
{
    _Bool _useAutoResizingContentFontMode;
    _Bool _useAutoClearButton;
    _Bool _activityViewShow;
    NSString *_hintText;
    NSString *_placeHolderText;
    NSString *_contentText;
    NSAttributedString *_contentAttributeString;
    id <QWHFilterSelectViewDelegate> _delegate;
    UILabel *_hintLabel;
    UIImageView *_arrowimageView;
    UIActivityIndicatorView *_activityView;
    QWStackView *_contentViewContainer;
    QWHPlaceHolderLabel *_contentLabel;
    SUIButton *_clearButton;
    MASConstraint *_arrowViewRightConstraint;
    MASConstraint *_activityWidthConstraint;
}

+ (id)viewWithHintText:(id)arg1;
+ (id)viewWithHintText:(id)arg1 placeHolder:(id)arg2;
@property(retain, nonatomic) MASConstraint *activityWidthConstraint; // @synthesize activityWidthConstraint=_activityWidthConstraint;
@property(retain, nonatomic) MASConstraint *arrowViewRightConstraint; // @synthesize arrowViewRightConstraint=_arrowViewRightConstraint;
@property(retain, nonatomic) SUIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) QWHPlaceHolderLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QWStackView *contentViewContainer; // @synthesize contentViewContainer=_contentViewContainer;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *arrowimageView; // @synthesize arrowimageView=_arrowimageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak id <QWHFilterSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool activityViewShow; // @synthesize activityViewShow=_activityViewShow;
@property(nonatomic) _Bool useAutoClearButton; // @synthesize useAutoClearButton=_useAutoClearButton;
@property(nonatomic) _Bool useAutoResizingContentFontMode; // @synthesize useAutoResizingContentFontMode=_useAutoResizingContentFontMode;
@property(retain, nonatomic) NSAttributedString *contentAttributeString; // @synthesize contentAttributeString=_contentAttributeString;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
- (void).cxx_destruct;
- (void)clearButtonPressed:(id)arg1;
- (void)showClearButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutViews;
- (void)initViews;
- (id)init;

@end

