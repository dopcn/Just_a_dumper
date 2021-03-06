//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface JDXiaoBingUserTextView : UIView
{
    UIButton *m_contentView;
    long long _m_rowIndex;
    UILabel *_m_messageLabel;
    UIImageView *_m_messageState;
    UIImageView *_m_messageImage;
    UIActivityIndicatorView *_m_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *m_indicatorView; // @synthesize m_indicatorView=_m_indicatorView;
@property(retain, nonatomic) UIImageView *m_messageImage; // @synthesize m_messageImage=_m_messageImage;
@property(retain, nonatomic) UIImageView *m_messageState; // @synthesize m_messageState=_m_messageState;
@property(retain, nonatomic) UILabel *m_messageLabel; // @synthesize m_messageLabel=_m_messageLabel;
@property(nonatomic) long long m_rowIndex; // @synthesize m_rowIndex=_m_rowIndex;
- (void)dealloc;
- (void)updateContentBackground:(_Bool)arg1;
- (void)clearCellData;
- (void)finishSending;
- (void)notiClickAction:(id)arg1;
- (void)retrySendMsg;
- (void)messageClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resizeViewLayout:(struct CGRect)arg1;

@end

