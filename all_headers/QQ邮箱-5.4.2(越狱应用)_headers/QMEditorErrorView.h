//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMUIButton, UILabel;
@protocol QMEditorErrorViewDelegate;

@interface QMEditorErrorView : UIView
{
    QMUIButton *_retryButton;
    UILabel *_errorLabel;
    id <QMEditorErrorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QMEditorErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didClickErrorViewRetry:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

