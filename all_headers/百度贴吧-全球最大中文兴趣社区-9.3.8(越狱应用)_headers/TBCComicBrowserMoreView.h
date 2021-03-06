//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIControl, UILabel;
@protocol TBCComicBrowserMoreViewDelegate;

@interface TBCComicBrowserMoreView : UIView
{
    id <TBCComicBrowserMoreViewDelegate> _delegate;
    UIView *_contentView;
    UIButton *_shareButton;
    UILabel *_shareLabel;
    UIButton *_downloadButton;
    UILabel *_downloadLabel;
    UIButton *_reportButton;
    UILabel *_reportLabel;
    UIControl *_outsideView;
}

@property(retain, nonatomic) UIControl *outsideView; // @synthesize outsideView=_outsideView;
@property(retain, nonatomic) UILabel *reportLabel; // @synthesize reportLabel=_reportLabel;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UILabel *downloadLabel; // @synthesize downloadLabel=_downloadLabel;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TBCComicBrowserMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTap;
- (void)updateDownloadButton:(_Bool)arg1;
- (void)onDismiss;
- (void)onReport;
- (void)onDownload;
- (void)onShare;
- (struct CGRect)labelFrameAtIndex:(unsigned long long)arg1;
- (struct CGRect)buttonFrameAtIndex:(unsigned long long)arg1;
- (id)labelWithTitle:(id)arg1 index:(long long)arg2;
- (id)buttonWithImage:(id)arg1 action:(SEL)arg2 index:(long long)arg3;
- (void)setupSubviews;
- (void)setupConfig;
- (id)init;
- (void)dealloc;

@end

